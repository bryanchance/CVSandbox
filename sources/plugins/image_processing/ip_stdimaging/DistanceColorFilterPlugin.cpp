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

#include <ximaging.h>
#include "DistanceColorFilterPlugin.hpp"

// Supported pixel formats of input/output images
const XPixelFormat DistanceColorFilterPlugin::supportedFormats[] =
{
    XPixelFormatRGB24
};

DistanceColorFilterPlugin::DistanceColorFilterPlugin( ) :
    fillColor( { 0xFF000000 } ), sampleColor( { 0xFFFFFFFF } ), maxDistance( 50 ),
    distanceType( 0 ), fillOutside( true )
{
}

void DistanceColorFilterPlugin::Dispose( )
{
    delete this;
}

// The plug-in can process image in-place without creating new image as a result
bool DistanceColorFilterPlugin::CanProcessInPlace( )
{
    return true;
}

// Provide supported pixel formats
XErrorCode DistanceColorFilterPlugin::GetPixelFormatTranslations( XPixelFormat* inputFormats, XPixelFormat* outputFormats, int32_t* count )
{
    return GetPixelFormatTranslationsImpl( inputFormats, outputFormats, count, supportedFormats, supportedFormats,
        sizeof( supportedFormats ) / sizeof( XPixelFormat ) );
}

// Process the specified source image and return new as a result
XErrorCode DistanceColorFilterPlugin::ProcessImage( const ximage* src, ximage** dst )
{
    XErrorCode ret = XImageClone( src, dst );

    if ( ret == SuccessCode )
    {
        ret = ProcessImageInPlace( *dst );

        if ( ret != SuccessCode )
        {
            XImageFree( dst );
        }
    }

    return ret;
}

// Process the specified source image by changing it
XErrorCode DistanceColorFilterPlugin::ProcessImageInPlace( ximage* src )
{
    return ColorFilteringByDistance( src, sampleColor, maxDistance, distanceType, fillOutside, fillColor );
}

// Get specified property value of the plug-in
XErrorCode DistanceColorFilterPlugin::GetProperty( int32_t id, xvariant* value ) const
{
    XErrorCode ret = SuccessCode;

    switch ( id )
    {
        case 0:
            value->type = XVT_U1;
            value->value.ubVal = distanceType;
            break;

        case 1:
            value->type = XVT_ARGB;
            value->value.argbVal = sampleColor;
            break;

        case 2:
            value->type = XVT_U2;
            value->value.usVal = maxDistance;
            break;

        case 3:
            value->type = XVT_Bool;
            value->value.boolVal = fillOutside;
            break;

        case 4:
            value->type = XVT_ARGB;
            value->value.argbVal = fillColor;
            break;

        default:
            ret = ErrorInvalidProperty;
            break;
    }

    return ret;
}

// Set specified property value of the plug-in
XErrorCode DistanceColorFilterPlugin::SetProperty( int32_t id, const xvariant* value )
{
    XErrorCode ret = SuccessCode;

    xvariant convertedValue;
    XVariantInit( &convertedValue );

    // make sure property value has expected type
    ret = PropertyChangeTypeHelper( id, value, propertiesDescription, 5, &convertedValue );

    if ( ret == SuccessCode )
    {
        switch ( id )
        {
            case 0:
                distanceType = XMIN( convertedValue.value.ubVal, 1 );
                break;

            case 1:
                sampleColor = convertedValue.value.argbVal;
                break;

            case 2:
                maxDistance = XMIN( convertedValue.value.ubVal, 440 );
                break;

            case 3:
                fillOutside = convertedValue.value.boolVal;
                break;

            case 4:
                fillColor = convertedValue.value.argbVal;
                break;
        }
    }

    XVariantClear( &convertedValue );

    return ret;
}
