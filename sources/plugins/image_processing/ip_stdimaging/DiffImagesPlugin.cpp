/*
    Standard image processing plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <stdlib.h>
#include <ximaging.h>
#include "DiffImagesPlugin.hpp"

// Supported pixel formats of input/output images
const XPixelFormat DiffImagesPlugin::supportedFormats[] =
{
    XPixelFormatGrayscale8, XPixelFormatRGB24, XPixelFormatRGBA32
};

void DiffImagesPlugin::Dispose( )
{
    delete this;
}

// The plug-in can process image in-place without creating new image as a result
bool DiffImagesPlugin::CanProcessInPlace( )
{
    return true;
}

// Provide supported pixel formats
XErrorCode DiffImagesPlugin::GetPixelFormatTranslations( XPixelFormat* inputFormats, XPixelFormat* outputFormats, int32_t* count )
{
    return GetPixelFormatTranslationsImpl( inputFormats, outputFormats, count, supportedFormats, supportedFormats,
        sizeof( supportedFormats ) / sizeof( XPixelFormat ) );
}

xstring DiffImagesPlugin::GetSecondImageDescription( )
{
    return XStringAlloc( "An image to calculate absolute difference with" );
}

XSupportedImageSize DiffImagesPlugin::GetSecondImageSupportedSize( )
{
    return XImageSizeEqual;
}

XPixelFormat DiffImagesPlugin::GetSecondImageSupportedFormat( XPixelFormat inputPixelFormat )
{
    return ( IsPixelFormatSupportedImpl( supportedFormats, sizeof( supportedFormats ) / sizeof( XPixelFormat ), inputPixelFormat ) ) ?
        inputPixelFormat : XPixelFormatUnknown;
}

// Process the specified source image and return new as a result
XErrorCode DiffImagesPlugin::ProcessImage( const ximage* src, const ximage* src2, ximage** dst )
{
    XErrorCode ret = XImageClone( src, dst );

    if ( ret == SuccessCode )
    {
        ret = ProcessImageInPlace( *dst, src2 );

        if ( ret != SuccessCode )
        {
            XImageFree( dst );
        }
    }

    return ret;
}

// Process the specified source image by changing it
XErrorCode DiffImagesPlugin::ProcessImageInPlace( ximage* src, const ximage* src2 )
{
    return DiffImages( src, src2 );
}

// Get specified property value of the plug-in
XErrorCode DiffImagesPlugin::GetProperty( int32_t, xvariant* ) const
{
    return ErrorInvalidProperty;
}

// Set specified property value of the plug-in
XErrorCode DiffImagesPlugin::SetProperty( int32_t, const xvariant* )
{
    return ErrorInvalidProperty;
}
