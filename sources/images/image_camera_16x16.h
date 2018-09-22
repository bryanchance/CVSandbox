#include <ximage.h>

static uint8_t camera_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x9B, 0x9D, 0xA0, 0x5B, 
    0xA4, 0xA5, 0xA8, 0xC6, 0xA8, 0xAA, 0xAB, 0x7A, 0xAE, 0xB0, 0xB0, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xF1, 0xF1, 0xF2, 0x00, 0xF1, 0xF1, 0xF2, 0x00, 0xF1, 0xF1, 0xF2, 0x00, 
    0xD7, 0xD6, 0xD8, 0x00, 0xE6, 0xE6, 0xE7, 0x04, 0xE6, 0xE7, 0xE8, 0x25, 0xEB, 0xEB, 0xEC, 0x54, 0xDB, 0xDC, 0xDD, 0xA0, 
    0xC1, 0xC2, 0xC4, 0xFF, 0xD3, 0xD5, 0xD7, 0xFF, 0xBC, 0xBE, 0xBF, 0xFF, 0x8C, 0x8D, 0x8F, 0x5F, 0xA3, 0xA4, 0xA7, 0x00, 
    0xA3, 0xA4, 0xA7, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xF1, 0xF1, 0xF2, 0x00, 0xF1, 0xF1, 0xF2, 0x00, 
    0xF1, 0xF1, 0xF2, 0x22, 0xD7, 0xD6, 0xD8, 0x9F, 0xF1, 0xEF, 0xF2, 0xDD, 0xF8, 0xF8, 0xF9, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB5, 0xB7, 0xB8, 0xFF, 0x84, 0x85, 0x87, 0xFF, 0x9B, 0x9C, 0x9E, 0xD0, 
    0xA3, 0xA4, 0xA7, 0x03, 0xA3, 0xA4, 0xA7, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xD1, 0xD0, 0xD1, 0x00, 
    0xD1, 0xD0, 0xD1, 0x00, 0x83, 0x82, 0x83, 0xC1, 0x09, 0x0C, 0x09, 0xFF, 0x8E, 0x9D, 0x8D, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 
    0xDE, 0xDF, 0xE1, 0xFF, 0xC1, 0xC1, 0xC4, 0xFF, 0xAE, 0xAF, 0xB4, 0xFF, 0xA2, 0xA4, 0xA7, 0xFF, 0xAA, 0xAD, 0xAF, 0xFF, 
    0xB0, 0xB2, 0xB5, 0xFB, 0xA0, 0xA2, 0xA4, 0x1A, 0xA0, 0xA2, 0xA4, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xD1, 0xD0, 0xD1, 0x00, 0xD1, 0xD0, 0xD1, 0x0F, 0x2A, 0x28, 0x2A, 0xF7, 0x00, 0x01, 0x00, 0xFF, 0x4A, 0x77, 0x48, 0xFF, 
    0xBA, 0xB5, 0xBB, 0xFF, 0xA0, 0xA1, 0xA5, 0xFF, 0xA1, 0xA2, 0xA6, 0xFF, 0xAF, 0xB0, 0xB3, 0xFF, 0xBB, 0xBC, 0xBE, 0xFF, 
    0xBB, 0xBB, 0xBC, 0xFF, 0xC1, 0xC2, 0xC4, 0xFB, 0xC0, 0xC0, 0xC2, 0x19, 0xC5, 0xC5, 0xC5, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xD1, 0xD2, 0xD3, 0x00, 0xD1, 0xD2, 0xD3, 0x0A, 0x58, 0x56, 0x58, 0xEF, 0x01, 0x02, 0x01, 0xFF, 
    0x0F, 0x3F, 0x0E, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xD5, 0xD5, 0xD9, 0xFF, 0xBE, 0xBF, 0xC0, 0xFF, 0xC0, 0xC3, 0xC4, 0xFF, 
    0xB5, 0xB7, 0xB8, 0xFF, 0x94, 0x95, 0x94, 0xFF, 0xB8, 0xB7, 0xB9, 0xFD, 0xC7, 0xC8, 0xC8, 0x57, 0xC5, 0xC5, 0xC5, 0x0B, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xDD, 0xDF, 0xE0, 0x00, 0xDD, 0xDF, 0xE0, 0x07, 0x8C, 0x8D, 0x8D, 0xEF, 
    0x35, 0x31, 0x34, 0xFF, 0x58, 0x54, 0x56, 0xFF, 0xEA, 0xE8, 0xEB, 0xFF, 0xE0, 0xE1, 0xE4, 0xFF, 0xA3, 0xA3, 0xA4, 0xFF, 
    0xD0, 0xD0, 0xD0, 0xFF, 0xF0, 0xEF, 0xEF, 0xFF, 0xF0, 0xF0, 0xEF, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xC1, 0xC1, 0xC1, 0xFF, 
    0xC4, 0xC4, 0xC4, 0x5F, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0xE1, 0xE2, 0x00, 0xE0, 0xE1, 0xE2, 0x07, 
    0xA6, 0xA7, 0xA8, 0xEF, 0xC7, 0xC8, 0xC9, 0xFF, 0xBB, 0xBB, 0xBE, 0xFF, 0xD9, 0xDA, 0xDA, 0xFF, 0xC2, 0xC4, 0xC5, 0xFF, 
    0x9B, 0x9A, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5E, 0x5E, 0x5E, 0xFF, 0x65, 0x65, 0x65, 0xFF, 0x28, 0x28, 0x28, 0xFF, 
    0x31, 0x31, 0x31, 0xFF, 0xCB, 0xCB, 0xCB, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xDC, 0xDD, 0xDF, 0x00, 
    0xDC, 0xDD, 0xDF, 0x07, 0xB0, 0xB1, 0xB1, 0xEF, 0xE0, 0xE0, 0xE1, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0xEF, 0xEE, 0xF0, 0xFF, 
    0xBC, 0xBE, 0xBF, 0xFF, 0x9E, 0x9D, 0x9D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x38, 0x38, 0x38, 0xFF, 0x14, 0x14, 0x14, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x34, 0x34, 0x34, 0xFF, 0xCB, 0xCB, 0xCB, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xDB, 0xDC, 0xDE, 0x00, 0xDB, 0xDC, 0xDE, 0x07, 0xB5, 0xB5, 0xB5, 0xEF, 0xE5, 0xE7, 0xE6, 0xFF, 0xB6, 0xB6, 0xB7, 0xFF, 
    0xF1, 0xF1, 0xF2, 0xFF, 0xBC, 0xBC, 0xBD, 0xFF, 0x9D, 0x9C, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x1D, 0x1C, 0xFF, 
    0x19, 0x1A, 0x19, 0xFF, 0x11, 0x11, 0x11, 0xFF, 0x55, 0x55, 0x55, 0xFF, 0xC8, 0xC8, 0xC8, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xF5, 0xF5, 0xF6, 0x00, 0xF5, 0xF5, 0xF6, 0x07, 0xB8, 0xB8, 0xB8, 0xEF, 0xE6, 0xE8, 0xE7, 0xFF, 
    0xE9, 0xE9, 0xEA, 0xFF, 0xEB, 0xEB, 0xEA, 0xFF, 0xD5, 0xD5, 0xD7, 0xFF, 0xA2, 0xA1, 0xA1, 0xFF, 0xC6, 0xC6, 0xC4, 0xFF, 
    0xDB, 0xDB, 0xDC, 0xFF, 0xDC, 0xDC, 0xDC, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 0xC0, 0xC0, 0xC0, 0xEE, 0xC5, 0xC5, 0xC5, 0x52, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xBE, 0xBE, 0xBE, 0x00, 0xFE, 0xFE, 0xFE, 0x19, 0xBB, 0xBC, 0xBC, 0xF3, 
    0xED, 0xEF, 0xEE, 0xFF, 0xED, 0xED, 0xEC, 0xFF, 0xE8, 0xE8, 0xE9, 0xFF, 0xD7, 0xD9, 0xDA, 0xFF, 0xC6, 0xC5, 0xC6, 0xFF, 
    0xC8, 0xC9, 0xCA, 0xFF, 0xBE, 0xBF, 0xC2, 0xFF, 0xC2, 0xC2, 0xC4, 0xFF, 0x9E, 0x9E, 0x9F, 0xFD, 0xF8, 0xF8, 0xF8, 0x33, 
    0xB7, 0xB7, 0xB7, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xBE, 0xBE, 0xBE, 0x08, 0xC2, 0xC2, 0xC2, 0x44, 
    0xC1, 0xC1, 0xC1, 0xF9, 0xFE, 0xFE, 0xFE, 0xFF, 0xFC, 0xFC, 0xFC, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 0xDF, 0xE1, 0xE3, 0xFF, 
    0xD3, 0xD2, 0xD3, 0xFF, 0xDD, 0xDE, 0xDF, 0xFF, 0xF3, 0xF4, 0xF7, 0xFF, 0xEA, 0xEB, 0xED, 0xFF, 0xA2, 0xA2, 0xA4, 0xFC, 
    0xBC, 0xBC, 0xBC, 0x44, 0xB7, 0xB7, 0xB7, 0x05, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x05, 0x05, 0x08, 
    0x09, 0x09, 0x09, 0x35, 0x9F, 0x9F, 0xA0, 0xCC, 0xEA, 0xEA, 0xEA, 0xFF, 0xFC, 0xFC, 0xFC, 0xFF, 0xFE, 0xFE, 0xFE, 0xFF, 
    0xFD, 0xFD, 0xFD, 0xFF, 0xFA, 0xFA, 0xFA, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xA8, 0xA9, 0xAA, 0xF2, 0x6F, 0x71, 0x72, 0xC4, 
    0x6A, 0x6B, 0x6C, 0x7F, 0x13, 0x14, 0x14, 0x1F, 0x01, 0x01, 0x01, 0x02, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x05, 0x05, 0x05, 0x00, 0x01, 0x01, 0x01, 0x09, 0x16, 0x16, 0x16, 0x28, 0x24, 0x24, 0x24, 0x5F, 0x4F, 0x4F, 0x4F, 0x91, 
    0x8E, 0x8E, 0x8E, 0xB9, 0x9F, 0xA0, 0xA0, 0xC8, 0x6D, 0x6D, 0x6D, 0xAB, 0x26, 0x26, 0x27, 0x80, 0x07, 0x07, 0x07, 0x55, 
    0x11, 0x11, 0x11, 0x2E, 0x20, 0x20, 0x20, 0x11, 0x13, 0x14, 0x14, 0x00, 0x01, 0x01, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x05, 0x05, 0x00, 0x01, 0x01, 0x01, 0x00, 0x16, 0x16, 0x16, 0x00, 0x24, 0x24, 0x24, 0x00, 
    0x4F, 0x4F, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 
    0x07, 0x07, 0x07, 0x00, 0x11, 0x11, 0x11, 0x00, 0x20, 0x20, 0x20, 0x00, 0x13, 0x14, 0x14, 0x00, 0x01, 0x01, 0x01, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 
};

static const ximage image_camera_16x16 =
{
    &camera_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
