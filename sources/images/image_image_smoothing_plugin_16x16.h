#include <ximage.h>

static uint8_t image_smoothing_plugin_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0x00, 0xB4, 0xB4, 0xB4, 0x1C, 
    0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 
    0xB4, 0xB4, 0xB4, 0x1C, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 
    0xCB, 0xCB, 0xCC, 0x55, 0xCB, 0xCB, 0xCC, 0x55, 0xCB, 0xCB, 0xCC, 0x55, 0xCB, 0xCB, 0xCC, 0x55, 0xC9, 0xC9, 0xC9, 0x55, 
    0xC4, 0xC4, 0xC4, 0x55, 0xBE, 0xBE, 0xBF, 0x55, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 
    0x9C, 0x9C, 0x9C, 0xFF, 0xBE, 0xC7, 0xD3, 0xAA, 0xBE, 0xC7, 0xD3, 0xAA, 0xBE, 0xC7, 0xD4, 0xAA, 0xC1, 0xC9, 0xD4, 0xAA, 
    0xC2, 0xC8, 0xD1, 0xAA, 0xC3, 0xC6, 0xCB, 0xAA, 0xC1, 0xC2, 0xC4, 0xAA, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0xB2, 0xC6, 0xE1, 0xE3, 0xB2, 0xC6, 0xE1, 0xE3, 0xB2, 0xC6, 0xE1, 0xE3, 
    0xB8, 0xCA, 0xE2, 0xE3, 0xBE, 0xCB, 0xDE, 0xE3, 0xC4, 0xCB, 0xD5, 0xE3, 0xC5, 0xC7, 0xCB, 0xE3, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0x5D, 0x92, 0xDD, 0xFF, 0x64, 0x97, 0xE0, 0xFF, 0x62, 0x97, 0xE1, 0xFF, 0x64, 0x97, 0xDF, 0xFF, 
    0x63, 0x97, 0xDF, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0x94, 0xB7, 0xE5, 0xFF, 0x94, 0xB8, 0xE6, 0xFF, 
    0x94, 0xB8, 0xE6, 0xFF, 0x9E, 0xBE, 0xE8, 0xFF, 0xAC, 0xC4, 0xE4, 0xFF, 0xBD, 0xCA, 0xDA, 0xFF, 0xC4, 0xC9, 0xCF, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x67, 0x9E, 0xE7, 0xFF, 0x6B, 0xA4, 0xEA, 0xFF, 0x6D, 0xA4, 0xEA, 0xFF, 
    0x6C, 0xA3, 0xE9, 0xFF, 0x6E, 0xA8, 0xF0, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0x83, 0xB4, 0xEE, 0xFF, 
    0x84, 0xB4, 0xEE, 0xFF, 0x84, 0xB5, 0xEF, 0xFF, 0x91, 0xBD, 0xF1, 0xFF, 0xA3, 0xC5, 0xEB, 0xFF, 0xBB, 0xCC, 0xE0, 0xFF, 
    0xC5, 0xCB, 0xD3, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x73, 0xAC, 0xF0, 0xFF, 0x79, 0xB2, 0xF0, 0xFF, 
    0x78, 0xB0, 0xF0, 0xFF, 0x79, 0xBA, 0xFF, 0xFF, 0x7B, 0xBD, 0xFF, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 
    0x81, 0xB9, 0xF2, 0xFF, 0x81, 0xB8, 0xF2, 0xFF, 0x7F, 0xB6, 0xEF, 0xFF, 0x8B, 0xBC, 0xED, 0xFF, 0x9D, 0xC1, 0xE6, 0xFF, 
    0xB7, 0xC9, 0xDC, 0xFF, 0xC4, 0xCA, 0xD1, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x84, 0xBA, 0xF8, 0xFF, 
    0x87, 0xBB, 0xF8, 0xFF, 0x87, 0xCA, 0xFF, 0xFF, 0x91, 0xC0, 0xF6, 0xFF, 0x7D, 0x53, 0x47, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 
    0x9C, 0x9C, 0x9C, 0xFF, 0x83, 0xB7, 0xE2, 0xFF, 0x86, 0xB8, 0xE3, 0xFF, 0x86, 0xB4, 0xDF, 0xFF, 0x90, 0xB7, 0xDB, 0xFF, 
    0x9F, 0xBB, 0xD5, 0xFF, 0xB7, 0xC5, 0xD2, 0xFF, 0xC4, 0xC8, 0xCD, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0x93, 0xC5, 0xFE, 0xFF, 0x9D, 0xD7, 0xFF, 0xFF, 0xA3, 0xE0, 0xFF, 0xFF, 0x95, 0x71, 0x70, 0xFF, 0xBB, 0x87, 0x74, 0xFF, 
    0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0x77, 0x9E, 0xBA, 0xFF, 0x7E, 0xA1, 0xBD, 0xFF, 0x7F, 0x9B, 0xB7, 0xFF, 
    0x89, 0x9E, 0xB5, 0xFF, 0x98, 0xA5, 0xB5, 0xFF, 0xB3, 0xB9, 0xC1, 0xFF, 0xC2, 0xC4, 0xC7, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xC3, 0xEF, 0xFF, 0xFF, 0xBE, 0xF1, 0xFF, 0xFF, 0xA6, 0x92, 0x93, 0xFF, 0x80, 0x65, 0x60, 0xFF, 
    0x4E, 0x50, 0x56, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0x5C, 0x70, 0x7C, 0xFF, 0x6A, 0x78, 0x85, 0xFF, 
    0x71, 0x77, 0x84, 0xFF, 0x80, 0x80, 0x89, 0xFF, 0x92, 0x90, 0x96, 0xFF, 0xB1, 0xAF, 0xB2, 0xFF, 0xC2, 0xC1, 0xC2, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x56, 0x60, 0x84, 0xFF, 0x38, 0x3F, 0x55, 0xFF, 0x1F, 0x1B, 0x28, 0xFF, 
    0x12, 0x1C, 0x32, 0xFF, 0x3F, 0x37, 0x51, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0x63, 0x68, 0x6C, 0xFF, 
    0x6F, 0x71, 0x73, 0xFF, 0x76, 0x71, 0x74, 0xFF, 0x84, 0x7C, 0x7E, 0xFF, 0x97, 0x8F, 0x91, 0xFF, 0xB3, 0xAF, 0xB0, 0xFF, 
    0xC3, 0xC1, 0xC3, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x40, 0x43, 0x2A, 0xFF, 0x63, 0x68, 0x42, 0xFF, 
    0x9A, 0x9A, 0x78, 0xFF, 0x96, 0x92, 0x70, 0xFF, 0x78, 0x7E, 0x54, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 
    0x81, 0x80, 0x7D, 0xFF, 0x8A, 0x88, 0x83, 0xFF, 0x8E, 0x8A, 0x85, 0xFF, 0x98, 0x93, 0x8E, 0xFF, 0xA5, 0xA0, 0x9E, 0xFF, 
    0xB9, 0xB6, 0xB6, 0xFF, 0xC3, 0xC2, 0xC3, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xD1, 0xD1, 0xD1, 0xFF, 
    0x9C, 0x9C, 0x9C, 0xFF, 0xAD, 0xAD, 0xAA, 0xE3, 0xB1, 0xB0, 0xAC, 0xE3, 0xB1, 0xB0, 0xAC, 0xE3, 0xB5, 0xB4, 0xB0, 0xE3, 
    0xBA, 0xB9, 0xB7, 0xE3, 0xC1, 0xC1, 0xC1, 0xE3, 0xC4, 0xC4, 0xC5, 0xE3, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0xBF, 0xC0, 0xBD, 0xAA, 0xC1, 0xC2, 0xBE, 0xAA, 0xC0, 0xC2, 0xBE, 0xAA, 
    0xC1, 0xC2, 0xBF, 0xAA, 0xC1, 0xC2, 0xC0, 0xAA, 0xC2, 0xC2, 0xC1, 0xAA, 0xC0, 0xC0, 0xC1, 0xAA, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xD1, 0xD1, 0xD1, 0xFF, 0x9C, 0x9C, 0x9C, 0xFF, 0xCB, 0xCB, 0xCC, 0x55, 0xCB, 0xCB, 0xCC, 0x55, 
    0xCB, 0xCB, 0xCC, 0x55, 0xCB, 0xCB, 0xCC, 0x55, 0xC9, 0xC9, 0xC9, 0x55, 0xC4, 0xC4, 0xC4, 0x55, 0xBE, 0xBE, 0xBF, 0x55, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x9C, 0x9C, 0x9C, 0xFF, 0xB4, 0xB4, 0xB4, 0x1C, 
    0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 0xB4, 0xB4, 0xB4, 0x1C, 
    0xB4, 0xB4, 0xB4, 0x1C, 
};

static const ximage image_image_smoothing_plugin_16x16 =
{
    &image_smoothing_plugin_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
