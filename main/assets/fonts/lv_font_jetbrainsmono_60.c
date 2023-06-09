/*******************************************************************************
 * Size: 60 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_JETBRAINSMONO_60
#define LV_FONT_JETBRAINSMONO_60 1
#endif

#if LV_FONT_JETBRAINSMONO_60

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x0, 0xe3, 0x9d, 0xef, 0xec, 0x81, 0x0, 0xff,
    0xe2, 0x27, 0xfd, 0x60, 0x1d, 0x58, 0xc4, 0x20,
    0x26, 0xfc, 0xe0, 0x1f, 0xfc, 0x3a, 0x0, 0xd,
    0x0, 0x6c, 0x50, 0xf, 0xe8, 0x90, 0xf, 0xfe,
    0xd, 0x8, 0x2, 0xc4, 0x2, 0x93, 0x0, 0xc6,
    0x84, 0x1, 0x99, 0x40, 0x3f, 0xe5, 0x50, 0x1,
    0x54, 0x1, 0xb, 0x0, 0x4d, 0xd9, 0x7b, 0xa3,
    0x0, 0xa0, 0x3, 0xfc, 0x36, 0x0, 0x1b, 0x0,
    0xce, 0x1, 0x1c, 0x88, 0x4, 0x5a, 0x1, 0x11,
    0x0, 0x3f, 0xa8, 0x40, 0x14, 0x20, 0x1b, 0xc0,
    0x2a, 0x0, 0xf0, 0xb0, 0x4, 0x80, 0x1f, 0x95,
    0x0, 0xc, 0x80, 0x1c, 0x40, 0x11, 0x0, 0x7d,
    0xc0, 0x10, 0x80, 0x7c, 0x34, 0x0, 0x29, 0x0,
    0xff, 0x38, 0x7, 0xfd, 0xe0, 0x1f, 0x50, 0x5,
    0xc0, 0x1f, 0xfd, 0x26, 0x40, 0x3, 0x98, 0x7,
    0xff, 0x44, 0xa4, 0x0, 0x50, 0x1, 0xff, 0xd2,
    0xe0, 0xb, 0x80, 0x3f, 0xf9, 0xbe, 0x1, 0x9c,
    0xc0, 0x10, 0x60, 0x1f, 0xc4, 0x1, 0x28, 0x7,
    0xdc, 0x1, 0x8, 0x4, 0x70, 0x0, 0x37, 0x0,
    0xff, 0x78, 0x5, 0x40, 0x1e, 0x17, 0x0, 0x90,
    0x2, 0xe0, 0xb, 0x80, 0x3f, 0xe7, 0x0, 0x8e,
    0x40, 0x31, 0x68, 0x80, 0x8, 0x80, 0x8, 0x20,
    0x4, 0x90, 0x7, 0xfc, 0x2c, 0x1, 0x37, 0xe5,
    0xee, 0x8c, 0x2, 0x80, 0x1, 0xb8, 0x1, 0x18,
    0x3, 0xff, 0x83, 0x26, 0x1, 0x8d, 0x8, 0x3,
    0x32, 0x80, 0x38, 0x2, 0xa0, 0xf, 0xfe, 0x1e,
    0x28, 0x7, 0xf3, 0xc8, 0x2, 0x48, 0x1, 0x22,
    0x1, 0xff, 0xc4, 0xac, 0x62, 0x0, 0x9, 0xbf,
    0x40, 0x1, 0x18, 0x0, 0x8c, 0x1, 0xff, 0xc6,
    0x39, 0xdf, 0xf7, 0x64, 0x8, 0x0, 0x68, 0x0,
    0x34, 0x1, 0xff, 0xd2, 0xb1, 0x0, 0x58, 0x80,
    0x7f, 0xf4, 0x55, 0x40, 0x5, 0x50, 0x7, 0xff,
    0x44, 0x6c, 0x0, 0x36, 0x1, 0xff, 0xd2, 0xa1,
    0x0, 0x50, 0x80, 0x46, 0xf5, 0x75, 0x8, 0x1,
    0xff, 0xc7, 0x64, 0x0, 0x32, 0x0, 0xf, 0x31,
    0xa, 0x8a, 0xf7, 0xca, 0x1, 0xff, 0xc4, 0x19,
    0x0, 0x14, 0x80, 0x17, 0xc, 0x3, 0xe1, 0xa8,
    0x0, 0xff, 0xe1, 0xd0, 0x5, 0xc0, 0x3, 0xa0,
    0xf, 0xf9, 0xd8, 0x3, 0xff, 0x82, 0xc8, 0x0,
    0x73, 0x0, 0x40, 0x4, 0x33, 0xdf, 0xd4, 0x40,
    0x14, 0x0, 0x7f, 0xf0, 0xa, 0x40, 0x5, 0x0,
    0x1, 0x40, 0xb, 0x58, 0x40, 0x57, 0x4, 0x0,
    0x2a, 0x1, 0xff, 0x70, 0x5, 0xe0, 0x12, 0x0,
    0x48, 0x60, 0x1c, 0x32, 0x1, 0x68, 0x7, 0xf9,
    0xcc, 0x1, 0x4, 0x1, 0x10, 0x5, 0x80, 0x1f,
    0x18, 0x4, 0x40, 0x1f, 0xc7, 0x0, 0x3, 0x70,
    0xd, 0xe0, 0x1f, 0xf3, 0x80, 0x42, 0x1, 0xfd,
    0xc0, 0x17, 0x0, 0x7f, 0xf4, 0xa0, 0x80, 0x12,
    0x40, 0x1f, 0xfd, 0x13, 0x70, 0x2, 0x30, 0x7,
    0xff, 0x4b, 0x80, 0x2a, 0x0, 0xff, 0xe9, 0x49,
    0x0, 0x28, 0x40, 0x3e, 0xe0, 0xb, 0xc0, 0x3e,
    0x60, 0x8, 0x40, 0x39, 0x18, 0x0, 0xaa, 0x0,
    0xfc, 0x40, 0x12, 0x0, 0x7d, 0x80, 0x11, 0x0,
    0x61, 0xa0, 0x0, 0xd8, 0x7, 0xf2, 0x0, 0x46,
    0xc0, 0x1c, 0x6c, 0x1, 0x60, 0x6, 0xb1, 0x0,
    0x58, 0x80, 0x7f, 0x98, 0x2, 0x9a, 0x64, 0x59,
    0xc0, 0x8, 0x90, 0x2, 0x55, 0x0, 0x15, 0x40,
    0x1f, 0xf4, 0x8, 0x4, 0xb3, 0x74, 0xc0, 0x1b,
    0x80, 0x21, 0xb0, 0x0, 0xd0, 0x7, 0xff, 0x0,
    0x74, 0x40, 0x3f, 0xd4, 0x60, 0x15, 0x8, 0x2,
    0x80, 0x3f, 0xf8, 0x47, 0xec, 0x1, 0xf2, 0x6a,
    0x80, 0x6b, 0xff, 0x90, 0x3, 0xff, 0x86, 0x33,
    0xf7, 0x31, 0x35, 0xd6, 0x40, 0x18,

    /* U+0030 "0" */
    0x0, 0xff, 0xa, 0x33, 0xb9, 0x90, 0x40, 0x3f,
    0xf8, 0xa3, 0x1b, 0xd7, 0x31, 0x9, 0xbe, 0xd8,
    0x10, 0xf, 0xfe, 0xc, 0xf3, 0x90, 0x7, 0xe2,
    0x7e, 0x80, 0xf, 0xf0, 0xe3, 0x0, 0x7f, 0xf0,
    0x9f, 0x4, 0x3, 0xe1, 0xc3, 0x0, 0xf0, 0x99,
    0x84, 0x3, 0xc7, 0x82, 0x1, 0xea, 0x20, 0xc,
    0x33, 0xdc, 0xcc, 0x77, 0x24, 0x40, 0x31, 0x50,
    0x7, 0x2a, 0x0, 0x65, 0xe6, 0x10, 0xc, 0x2d,
    0xca, 0x1, 0x91, 0x40, 0x34, 0x0, 0x64, 0xa0,
    0xf, 0xf5, 0x20, 0x6, 0x80, 0x9, 0x8, 0x2,
    0x1a, 0x0, 0xff, 0xe0, 0x50, 0x80, 0x44, 0x60,
    0xc, 0x0, 0xd2, 0x20, 0x1f, 0xfc, 0x1, 0x90,
    0xd, 0x60, 0x4, 0x0, 0xca, 0x1, 0xff, 0xc2,
    0x50, 0xc, 0x80, 0x1, 0x0, 0x84, 0x80, 0x3f,
    0xf8, 0x44, 0x20, 0x10, 0x80, 0x8, 0x2, 0x20,
    0xf, 0xfe, 0x21, 0x0, 0x44, 0x1, 0xe7, 0x0,
    0xff, 0xe2, 0x38, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xe1, 0xae, 0xe5, 0x8, 0x7, 0xff,
    0x2b, 0x14, 0x44, 0xb8, 0x1, 0xff, 0xc9, 0x42,
    0x0, 0xc4, 0x80, 0x1f, 0xfc, 0x82, 0x0, 0xf1,
    0x0, 0x7f, 0xf2, 0x8, 0x3, 0xca, 0x1, 0xff,
    0xc8, 0x42, 0x0, 0xc6, 0x60, 0xf, 0xfe, 0x4e,
    0x20, 0x1, 0x34, 0x3, 0xff, 0x94, 0x37, 0xfe,
    0xb1, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xfa, 0xce, 0x1, 0xff, 0xc4, 0x70, 0xf,
    0x10, 0x4, 0x40, 0x1f, 0xfc, 0x42, 0x0, 0x88,
    0x0, 0x20, 0x10, 0x90, 0x7, 0xff, 0x8, 0x84,
    0x2, 0x60, 0x2, 0x0, 0x65, 0x0, 0xff, 0xe1,
    0x28, 0x6, 0xc0, 0x6, 0x0, 0x69, 0x10, 0xf,
    0xfe, 0x0, 0xc8, 0x6, 0x40, 0x2, 0x10, 0x4,
    0x34, 0x1, 0xff, 0xc0, 0xa1, 0x0, 0x88, 0xc0,
    0x28, 0x0, 0xc9, 0x40, 0x1f, 0xea, 0x40, 0xd,
    0x0, 0x19, 0x50, 0x3, 0x2f, 0x30, 0x80, 0x61,
    0x6e, 0x50, 0xc, 0x8a, 0x1, 0xd4, 0x40, 0x18,
    0x67, 0xb9, 0x98, 0xee, 0x48, 0x80, 0x62, 0xb0,
    0xf, 0xe, 0x18, 0x7, 0x84, 0xcc, 0x20, 0x1e,
    0x3c, 0x0, 0xfc, 0x38, 0xc0, 0x1f, 0xfc, 0x27,
    0xc1, 0x0, 0xff, 0x4f, 0x39, 0x0, 0x7e, 0x27,
    0xe8, 0x0, 0xff, 0xe0, 0x8c, 0x6f, 0x5c, 0xc4,
    0x26, 0xfb, 0x60, 0x40, 0x3e,

    /* U+0031 "1" */
    0x0, 0xfe, 0x1b, 0xff, 0xf2, 0x80, 0x7f, 0xf1,
    0x8f, 0xd0, 0x3, 0xff, 0x98, 0xf8, 0x20, 0x1f,
    0xfc, 0xb1, 0xb8, 0x0, 0xff, 0xe6, 0x1f, 0xa0,
    0x6, 0x36, 0x0, 0xff, 0xe3, 0x3e, 0x8, 0x6,
    0x6c, 0xf0, 0xf, 0xfe, 0x20, 0xdc, 0x0, 0x75,
    0x48, 0x7, 0xff, 0x14, 0xbd, 0x0, 0x31, 0xea,
    0x80, 0x7f, 0xf1, 0x98, 0x40, 0x33, 0x61, 0x0,
    0x7f, 0xf2, 0xc6, 0xa4, 0x3, 0xff, 0x98, 0x7e,
    0xa0, 0x1f, 0xfc, 0xc7, 0xc1, 0x0, 0xff, 0xe5,
    0xbd, 0xc0, 0x7, 0xff, 0x34, 0xd0, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xfe, 0x1, 0xff, 0xe7, 0x26, 0x6f, 0xfb,
    0x0, 0x36, 0x33, 0x7f, 0xa, 0x4c, 0xff, 0xca,
    0x1, 0x9a, 0x67, 0xf8, 0x80, 0x3f, 0xff, 0xe0,
    0x1f, 0xc0,

    /* U+0032 "2" */
    0x0, 0xff, 0x12, 0xb3, 0xb9, 0x50, 0x3, 0xff,
    0x8c, 0x75, 0xdb, 0x53, 0x10, 0xab, 0xfc, 0x70,
    0xf, 0xfe, 0x9, 0x5e, 0x28, 0x80, 0x7e, 0x38,
    0xe6, 0x0, 0xff, 0x26, 0x20, 0x7, 0xff, 0x4,
    0x66, 0x80, 0x3f, 0x25, 0x88, 0x7, 0x88, 0xc8,
    0x40, 0x3c, 0xb6, 0x1, 0xe2, 0xa0, 0xe, 0x4b,
    0xfd, 0xcd, 0xed, 0x70, 0xe, 0x49, 0x0, 0xe9,
    0x10, 0xd, 0x76, 0x40, 0xe, 0x28, 0xe3, 0x0,
    0xcc, 0x40, 0x11, 0xa0, 0x6, 0xc4, 0x0, 0xfe,
    0x1c, 0x30, 0xd, 0x20, 0x14, 0x80, 0x68, 0x30,
    0xf, 0xfe, 0x7, 0x0, 0x64, 0x10, 0x2, 0x0,
    0x67, 0x0, 0xff, 0xe0, 0x93, 0x0, 0x64, 0x3,
    0x10, 0x9, 0x40, 0x3f, 0xf8, 0x7a, 0x1, 0xb0,
    0x18, 0x3, 0x68, 0x7, 0xff, 0xd, 0x40, 0x31,
    0x81, 0x80, 0x62, 0x0, 0xff, 0xe1, 0x88, 0x6,
    0x10, 0x4b, 0xbc, 0x80, 0x1f, 0xfc, 0xa2, 0x44,
    0xc2, 0x1, 0xff, 0xc3, 0x10, 0xc, 0x20, 0x1f,
    0xfc, 0xa5, 0x0, 0xc4, 0x1, 0xff, 0xca, 0xc0,
    0xd, 0x80, 0x1f, 0xfc, 0xa6, 0x0, 0x85, 0x0,
    0x3f, 0xf9, 0x2c, 0x20, 0x13, 0x80, 0x7f, 0xf2,
    0xa0, 0x3, 0x58, 0x7, 0xff, 0x26, 0x44, 0x2,
    0x62, 0x0, 0xff, 0xe4, 0x23, 0x0, 0x43, 0x0,
    0x1f, 0xfc, 0x82, 0xa0, 0xd, 0x62, 0x1, 0xff,
    0xc7, 0x1f, 0x10, 0x9, 0x94, 0x3, 0xff, 0x91,
    0xa4, 0x1, 0x1c, 0x80, 0x7f, 0xf2, 0x2c, 0xc0,
    0x21, 0xd0, 0xf, 0xfe, 0x45, 0x20, 0x6, 0xd1,
    0x0, 0xff, 0xe3, 0xca, 0x80, 0x6b, 0x30, 0xf,
    0xfe, 0x3c, 0x30, 0x6, 0xa4, 0x0, 0xff, 0xe3,
    0xbb, 0x80, 0x34, 0xa8, 0x7, 0xff, 0x1d, 0xa0,
    0x3, 0x43, 0x0, 0x7f, 0xf1, 0xd6, 0x40, 0x33,
    0xb8, 0x3, 0xff, 0x8e, 0x94, 0x1, 0x9a, 0x0,
    0x3f, 0xf8, 0xe7, 0x60, 0x19, 0x64, 0x3, 0xff,
    0x8e, 0x5a, 0x1, 0x92, 0x80, 0x3f, 0xf8, 0xe5,
    0x82, 0x1, 0x1d, 0x80, 0x7f, 0xf1, 0xc7, 0xc4,
    0x2, 0x3c, 0x0, 0xff, 0xe3, 0x8e, 0x10, 0x4,
    0x5a, 0x1, 0xff, 0xc8, 0xd2, 0x0, 0x8b, 0x4,
    0x3, 0xff, 0x8f, 0x66, 0x1, 0xf, 0x88, 0x7,
    0xff, 0x1d, 0x90, 0x3, 0x32, 0x33, 0x7f, 0xf1,
    0x8c, 0x3, 0xe7, 0x99, 0xff, 0xe4, 0x0, 0x7f,
    0xff, 0xc0, 0x3f, 0x80,

    /* U+0033 "3" */
    0x0, 0x67, 0xff, 0xff, 0x28, 0x40, 0x3f, 0xff,
    0xe0, 0x1f, 0xd1, 0x33, 0xff, 0xc4, 0x40, 0xc,
    0x22, 0x0, 0x91, 0x9b, 0xff, 0x86, 0x48, 0x1,
    0xb4, 0x3, 0xff, 0x8e, 0x76, 0x1, 0xac, 0xc0,
    0x3f, 0xf8, 0xc7, 0x80, 0x1a, 0x90, 0x3, 0xff,
    0x8c, 0x5a, 0x1, 0xa5, 0x40, 0x3f, 0xf8, 0xc3,
    0x82, 0x1, 0x3b, 0x0, 0x7f, 0xf1, 0x87, 0x4,
    0x2, 0x68, 0x0, 0xff, 0xe3, 0xe9, 0x0, 0x4b,
    0x20, 0x1f, 0xfc, 0x7b, 0x30, 0x8, 0xe8, 0x3,
    0xff, 0x8f, 0x68, 0x1, 0x1e, 0x0, 0x7f, 0xf1,
    0xe9, 0x0, 0x22, 0xd0, 0xf, 0xfe, 0x3c, 0x28,
    0x4, 0x3e, 0x20, 0x1f, 0xfc, 0x76, 0x0, 0xc3,
    0x9b, 0x4c, 0x20, 0x1f, 0xfc, 0xa1, 0x25, 0x9e,
    0x91, 0x0, 0xff, 0xe6, 0xb7, 0x98, 0x7, 0xff,
    0x34, 0x70, 0xc0, 0x3f, 0xf8, 0x1d, 0xdd, 0xb6,
    0xe2, 0x1, 0xda, 0x20, 0x1f, 0xfc, 0x1, 0x1c,
    0x49, 0x1c, 0xe0, 0x18, 0x6c, 0x3, 0xff, 0x91,
    0x10, 0x0, 0xca, 0x40, 0x1f, 0xfc, 0x87, 0x40,
    0xd, 0x40, 0x1f, 0xfc, 0x98, 0x0, 0xc8, 0x1,
    0xff, 0xc9, 0x31, 0x0, 0x8c, 0x3, 0xff, 0x94,
    0x80, 0x18, 0x80, 0x3f, 0xf9, 0x26, 0x1, 0x84,
    0x3, 0xff, 0x92, 0x20, 0x19, 0xc0, 0x3f, 0xfd,
    0x42, 0x67, 0x80, 0x3f, 0xf9, 0x4d, 0x99, 0x94,
    0x3, 0xff, 0x92, 0x20, 0x18, 0xc0, 0x3f, 0xf8,
    0x64, 0x1, 0x9c, 0x80, 0x36, 0x0, 0x7f, 0xf0,
    0xdc, 0x3, 0x1a, 0x80, 0x64, 0x0, 0xff, 0xe1,
    0x11, 0x0, 0x22, 0x1, 0x30, 0x8, 0x58, 0x3,
    0xff, 0x83, 0x0, 0x19, 0x40, 0x12, 0x1, 0xa4,
    0x80, 0x3f, 0xe5, 0x50, 0x6, 0xa0, 0x2, 0x90,
    0x6, 0xc3, 0x0, 0xfe, 0x5a, 0x0, 0xcc, 0x40,
    0x17, 0x0, 0x61, 0xca, 0x30, 0xe, 0x4b, 0xa0,
    0xc, 0x30, 0x1, 0x8e, 0x40, 0x39, 0x73, 0xfb,
    0x7b, 0xed, 0x0, 0x3b, 0x44, 0x3, 0x9a, 0x40,
    0x3e, 0x12, 0x10, 0xf, 0xe, 0x18, 0x7, 0xcd,
    0x84, 0x1, 0xff, 0xc1, 0x5f, 0x30, 0xf, 0xe3,
    0xda, 0x40, 0xf, 0xc2, 0xb9, 0x42, 0x1, 0xff,
    0xc0, 0x5b, 0xfc, 0x98, 0x8a, 0xb7, 0xa8, 0xc0,
    0x3e,

    /* U+0034 "4" */
    0x0, 0xff, 0xe2, 0x4f, 0xfe, 0x90, 0xf, 0xfe,
    0x39, 0xb0, 0x4, 0x30, 0x1, 0xff, 0xc7, 0xe0,
    0xd, 0x2, 0x1, 0xff, 0xc6, 0x72, 0x0, 0x8d,
    0x80, 0x3f, 0xf8, 0xc5, 0x0, 0x1b, 0x80, 0x3f,
    0xf8, 0xf2, 0x1, 0x9c, 0x80, 0x3f, 0xf8, 0xca,
    0x80, 0x11, 0x40, 0x7, 0xff, 0x1e, 0xc0, 0x34,
    0x80, 0x7f, 0xf1, 0xe4, 0x40, 0x25, 0x40, 0xf,
    0xfe, 0x31, 0xb0, 0x6, 0xb0, 0xf, 0xfe, 0x3f,
    0x0, 0x68, 0x10, 0xf, 0xfe, 0x33, 0x90, 0x4,
    0x4e, 0x1, 0xff, 0xc6, 0x18, 0x0, 0xdc, 0x1,
    0xff, 0xc7, 0xa0, 0xc, 0xc6, 0x1, 0xff, 0xc6,
    0x54, 0x0, 0x86, 0x0, 0x3f, 0xf8, 0xf6, 0x1,
    0xac, 0x40, 0x3f, 0xf8, 0xd2, 0x20, 0x12, 0x28,
    0x7, 0xff, 0x18, 0xd8, 0x3, 0x48, 0x7, 0xff,
    0x1f, 0xc0, 0x33, 0x90, 0x7, 0xe5, 0x88, 0xc0,
    0x1c, 0xc6, 0x1, 0x14, 0x0, 0x7f, 0x73, 0xbe,
    0x10, 0x8, 0x64, 0x3, 0x48, 0x7, 0xff, 0x1e,
    0xc0, 0x32, 0xa0, 0x7, 0xff, 0x19, 0x14, 0x3,
    0x58, 0x7, 0xff, 0x1e, 0x80, 0x34, 0x8, 0x7,
    0xff, 0x1a, 0x4, 0x2, 0x37, 0x0, 0xff, 0xe3,
    0x13, 0x80, 0x6f, 0x0, 0xff, 0xe3, 0xd0, 0x6,
    0x63, 0x0, 0xff, 0xe3, 0x88, 0x6, 0xa0, 0xf,
    0xff, 0x3a, 0x33, 0x7f, 0xf0, 0xc0, 0x3f, 0xd1,
    0x33, 0xff, 0xc2, 0x20, 0xf, 0xff, 0xf8, 0x7,
    0xe9, 0xff, 0xff, 0xe3, 0xa0, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xe1, 0x0,

    /* U+0035 "5" */
    0x7, 0xff, 0xff, 0xe5, 0x18, 0x7, 0xff, 0xab,
    0xc0, 0x3f, 0xfa, 0x51, 0x33, 0xff, 0xc5, 0x20,
    0xf, 0x95, 0x9b, 0xff, 0x8a, 0x20, 0x1f, 0xfd,
    0x53, 0x0, 0xff, 0xe4, 0x8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xd4, 0x60, 0x18, 0x40, 0x3f, 0xfa,
    0x62, 0x66, 0x21, 0x0, 0xff, 0xe3, 0x1c, 0xf7,
    0x33, 0x1b, 0xdc, 0x93, 0x0, 0xff, 0xe1, 0x4e,
    0x30, 0x80, 0x70, 0xb6, 0x58, 0x80, 0x7f, 0xd6,
    0xc0, 0x1f, 0xf2, 0x79, 0x0, 0x61, 0x0, 0xcc,
    0x80, 0x1f, 0xfc, 0x11, 0xc1, 0x0, 0xfd, 0x60,
    0x3, 0x9d, 0xff, 0x75, 0x30, 0x7, 0xd, 0x80,
    0x7e, 0x20, 0x8c, 0x62, 0x0, 0xa, 0xce, 0x90,
    0x6, 0x53, 0x0, 0xfd, 0x2e, 0x1, 0xf8, 0xb4,
    0x80, 0x34, 0x80, 0x7c, 0x8c, 0x1, 0xff, 0x70,
    0x6, 0x50, 0x3, 0x80, 0x68, 0x0, 0xff, 0xe0,
    0x1a, 0x0, 0x63, 0xd, 0xee, 0xc6, 0x1, 0xff,
    0xc1, 0xc0, 0xc, 0xa0, 0x23, 0xc0, 0x1f, 0xfc,
    0x24, 0x0, 0xdc, 0x1, 0xff, 0xc8, 0x10, 0xc,
    0x20, 0x1f, 0xfc, 0x83, 0x0, 0xc6, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xf2, 0x98, 0x6, 0x30, 0xf,
    0xfe, 0x40, 0x80, 0x61, 0x8f, 0xfc, 0x40, 0x1f,
    0xfc, 0x25, 0x0, 0xdd, 0xc0, 0xc, 0x80, 0x1f,
    0xfc, 0x2d, 0x0, 0xc8, 0x80, 0xd, 0x40, 0x1f,
    0xfc, 0x12, 0x40, 0x8, 0x48, 0x86, 0x1, 0x1b,
    0x0, 0x7f, 0xf0, 0x38, 0x3, 0x30, 0x2, 0x0,
    0x34, 0xb0, 0x7, 0xfa, 0xcc, 0x3, 0x48, 0x1,
    0x14, 0x3, 0x4d, 0xa8, 0x80, 0x62, 0x7e, 0x40,
    0xd, 0x2, 0x1, 0x59, 0x0, 0x64, 0xae, 0xe6,
    0xeb, 0xb6, 0x4, 0x3, 0x23, 0x80, 0x61, 0xc2,
    0x0, 0xf0, 0x91, 0x4, 0x3, 0xcb, 0x60, 0x1e,
    0x1d, 0x70, 0xf, 0xfe, 0x14, 0x50, 0x7, 0xf4,
    0x73, 0x88, 0x7, 0xe2, 0x7e, 0x70, 0xf, 0xf8,
    0x63, 0xb9, 0x53, 0x10, 0x9b, 0xed, 0x81, 0x0,
    0xf0,

    /* U+0036 "6" */
    0x0, 0xff, 0xe1, 0x67, 0xfe, 0x60, 0xf, 0xfe,
    0x4a, 0x98, 0x4, 0x6c, 0x1, 0xff, 0xc9, 0xb0,
    0xd, 0xe0, 0x1f, 0xfc, 0x97, 0x10, 0x9, 0x4c,
    0x3, 0xff, 0x90, 0x30, 0x1, 0xac, 0x3, 0xff,
    0x93, 0x60, 0x1a, 0x4, 0x3, 0xff, 0x90, 0x6a,
    0x1, 0x13, 0x80, 0x7f, 0xf2, 0x7c, 0x3, 0x48,
    0x7, 0xff, 0x25, 0x4c, 0x2, 0x54, 0x0, 0xff,
    0xe4, 0xc0, 0x6, 0x80, 0xf, 0xfe, 0x4b, 0x90,
    0x4, 0xe4, 0x1, 0xff, 0xc8, 0x19, 0x0, 0x86,
    0x0, 0x3f, 0xf9, 0x30, 0x20, 0x15, 0x80, 0x7f,
    0xf2, 0x49, 0x80, 0x24, 0x50, 0xf, 0xfe, 0x4c,
    0x80, 0x69, 0x0, 0xff, 0xe4, 0xa2, 0x0, 0x27,
    0x20, 0xf, 0xfe, 0x4c, 0x80, 0x43, 0x0, 0x1f,
    0xfc, 0x96, 0x20, 0xa, 0x0, 0xa3, 0x3b, 0xfd,
    0xd6, 0xe4, 0x1, 0xff, 0x40, 0x4, 0x6f, 0x3a,
    0xe6, 0x20, 0x1, 0x48, 0xda, 0x20, 0xf, 0xd0,
    0x20, 0x14, 0xfb, 0x0, 0x7f, 0x97, 0x54, 0x3,
    0xc2, 0xe0, 0x10, 0xd8, 0x80, 0x4, 0xcc, 0x20,
    0x1f, 0x53, 0x0, 0x74, 0x80, 0x61, 0x11, 0x4f,
    0x73, 0x31, 0xdc, 0x92, 0x0, 0xe9, 0x30, 0xc,
    0xc0, 0x1c, 0xfa, 0xc2, 0x1, 0x85, 0xb5, 0xc0,
    0x3b, 0x80, 0x26, 0x10, 0xd, 0x30, 0x1, 0xfe,
    0x89, 0x0, 0xc4, 0xe0, 0xa, 0x0, 0xcc, 0xc0,
    0xf, 0xfe, 0x3, 0x30, 0x3, 0x50, 0x11, 0x80,
    0x68, 0x0, 0xff, 0xe1, 0x48, 0x80, 0x44, 0x68,
    0x1, 0x9c, 0x40, 0x3f, 0xf8, 0x6c, 0x1, 0x93,
    0xc0, 0x35, 0x80, 0x7f, 0xf1, 0x2c, 0x3, 0x6a,
    0x80, 0x63, 0x0, 0xff, 0xe2, 0x18, 0x6, 0x72,
    0x0, 0x84, 0x3, 0xff, 0x8c, 0x20, 0x11, 0x80,
    0x63, 0x0, 0xff, 0xe3, 0x18, 0x6, 0x30, 0x8,
    0xc0, 0x3f, 0xf8, 0xc6, 0x1, 0x18, 0x80, 0x42,
    0x1, 0xff, 0xc6, 0x10, 0x8, 0x58, 0x3, 0x18,
    0x7, 0xff, 0x10, 0xc0, 0x33, 0x68, 0x6, 0x40,
    0xf, 0xfe, 0x22, 0x0, 0x6c, 0x50, 0xd, 0x20,
    0x1f, 0xfc, 0x49, 0x0, 0xc8, 0x46, 0x1, 0xc,
    0x0, 0x7f, 0xf0, 0xa0, 0x40, 0x23, 0x20, 0x90,
    0xc, 0xea, 0x1, 0xff, 0xc0, 0x67, 0x0, 0xd0,
    0x0, 0x53, 0x0, 0xd4, 0xe0, 0x1f, 0xe8, 0x90,
    0xc, 0x88, 0x0, 0xb8, 0x40, 0x34, 0x6b, 0x8,
    0x6, 0x26, 0xd7, 0x0, 0xc3, 0x40, 0x18, 0xb4,
    0x3, 0x8a, 0x7b, 0x9b, 0xaf, 0xd9, 0x20, 0xe,
    0xd1, 0x0, 0xe3, 0xc1, 0x0, 0xf0, 0x91, 0x0,
    0x3e, 0x1d, 0x30, 0xf, 0x8f, 0xd8, 0x3, 0xff,
    0x84, 0xdc, 0x40, 0x1f, 0xc3, 0x3a, 0xe4, 0x1,
    0xf8, 0x5f, 0x64, 0x3, 0xff, 0x82, 0x51, 0xba,
    0xb9, 0x88, 0x4d, 0x6f, 0x41, 0x0, 0x7c,

    /* U+0037 "7" */
    0xf, 0xff, 0xfe, 0x7c, 0x0, 0x7f, 0xff, 0xc0,
    0x3f, 0xf8, 0xa2, 0xef, 0xff, 0xc5, 0x40, 0xd,
    0xe0, 0x1c, 0x51, 0x1f, 0xfc, 0x57, 0x0, 0xca,
    0x1, 0xff, 0xca, 0x23, 0x0, 0x8c, 0x80, 0x3f,
    0xf9, 0x54, 0x1, 0xa8, 0x3, 0xff, 0x96, 0xc0,
    0x19, 0x80, 0x3f, 0xf9, 0x4a, 0x20, 0x13, 0x0,
    0x7f, 0xf2, 0xe4, 0x3, 0x50, 0x7, 0xff, 0x28,
    0x8c, 0x2, 0x33, 0x0, 0x5d, 0xdb, 0x0, 0x3f,
    0xf8, 0x56, 0x1, 0xa8, 0x3, 0x8, 0xe0, 0xf,
    0xfe, 0x1b, 0x0, 0x66, 0x0, 0xff, 0xe5, 0x30,
    0x6, 0x60, 0xf, 0xfe, 0x5d, 0x0, 0x6a, 0x0,
    0xff, 0xe5, 0x19, 0x80, 0x22, 0x30, 0xf, 0xfe,
    0x55, 0x0, 0x6b, 0x0, 0xff, 0xe5, 0xb0, 0x6,
    0x70, 0xf, 0xfe, 0x53, 0x0, 0x65, 0x10, 0xf,
    0xfe, 0x55, 0x0, 0x6e, 0x0, 0xff, 0xe5, 0x19,
    0x80, 0x22, 0x40, 0xf, 0xfe, 0x55, 0x0, 0x6a,
    0x0, 0xff, 0xe5, 0xb0, 0x6, 0x60, 0xf, 0xfe,
    0x53, 0x0, 0x65, 0x10, 0xf, 0xfe, 0x55, 0x80,
    0x6e, 0x0, 0xff, 0xe5, 0x19, 0x0, 0x42, 0x80,
    0x1f, 0xfc, 0xa9, 0x0, 0xd2, 0x1, 0xff, 0xca,
    0x15, 0x0, 0xcc, 0x1, 0xff, 0xca, 0x60, 0xc,
    0x82, 0x1, 0xff, 0xca, 0xa0, 0xd, 0xe0, 0x1f,
    0xfc, 0xa4, 0x20, 0x8, 0x50, 0x3, 0xff, 0x95,
    0xc0, 0x19, 0x80, 0x3f, 0xf9, 0x42, 0xa0, 0x1a,
    0x80, 0x3f, 0xf9, 0x4c, 0x1, 0x90, 0x80, 0x3f,
    0xf9, 0x54, 0x1, 0xb8, 0x3, 0xff, 0x94, 0x84,
    0x1, 0xa, 0x80, 0x7f, 0xf2, 0xb8, 0x3, 0x30,
    0x7, 0xff, 0x28, 0x54, 0x3, 0x50, 0x7, 0xff,
    0x29, 0x80, 0x31, 0x90, 0x7, 0xff, 0x2a, 0x40,
    0x34, 0x80, 0x7f, 0xf2, 0x90, 0x40, 0x21, 0x50,
    0xf, 0xfe, 0x57, 0x80, 0x67, 0x0, 0xff, 0xe5,
    0xa, 0x0, 0x6b, 0x0, 0xff, 0xe1, 0x80,

    /* U+0038 "8" */
    0x0, 0xff, 0xa, 0x33, 0xb9, 0x90, 0x40, 0x3f,
    0xf8, 0xa2, 0xfb, 0xd7, 0x31, 0x9, 0xbe, 0xd8,
    0x10, 0xf, 0xfe, 0xb, 0xf4, 0x10, 0x7, 0xe2,
    0x7e, 0x80, 0xf, 0xf0, 0xe4, 0x0, 0x7f, 0xf0,
    0x9f, 0x48, 0x3, 0xe1, 0xc3, 0x0, 0xf0, 0x91,
    0x4, 0x3, 0xc5, 0x84, 0x1, 0xed, 0x20, 0xc,
    0x53, 0xbd, 0xba, 0xee, 0x49, 0x0, 0x61, 0xf0,
    0xe, 0x73, 0x0, 0xcf, 0xac, 0x40, 0x18, 0x5b,
    0x60, 0x3, 0x14, 0x80, 0x69, 0x0, 0xd1, 0x0,
    0xf, 0xf3, 0xc8, 0x6, 0x61, 0x0, 0x20, 0x80,
    0x46, 0xe0, 0x1f, 0xfc, 0x6, 0x50, 0xc, 0xc0,
    0xc, 0x0, 0xd2, 0x1, 0xff, 0xc2, 0x90, 0xd,
    0x80, 0x2, 0x0, 0xca, 0x1, 0xff, 0xc2, 0x31,
    0x0, 0x98, 0x0, 0x20, 0x1f, 0xfc, 0x83, 0x0,
    0x8c, 0x0, 0x20, 0x1f, 0xfc, 0xc3, 0x0, 0x68,
    0x6, 0x10, 0xf, 0xfe, 0x19, 0x0, 0x4e, 0x0,
    0x40, 0xc, 0xe0, 0x1f, 0xfc, 0x25, 0x0, 0xde,
    0x0, 0x32, 0x0, 0xa0, 0x3, 0xff, 0x85, 0x0,
    0x10, 0xa8, 0x5, 0x20, 0x10, 0xd0, 0x7, 0xff,
    0x2, 0x48, 0x2, 0x80, 0xc, 0x8c, 0x1, 0x2c,
    0x80, 0x7f, 0xa5, 0x80, 0x25, 0x60, 0xe, 0x94,
    0x0, 0x9a, 0xc8, 0x3, 0xc5, 0x8c, 0x1, 0x1d,
    0x0, 0x7d, 0x6a, 0x1, 0x26, 0xc9, 0x0, 0xa,
    0xb4, 0xc0, 0x25, 0xc0, 0xf, 0xea, 0x90, 0xc,
    0xdb, 0x76, 0xd5, 0x0, 0xd3, 0x40, 0x1f, 0xf3,
    0x73, 0x0, 0x64, 0x40, 0x6, 0x6e, 0x60, 0xf,
    0xfe, 0x8, 0xf0, 0x80, 0x7f, 0x70, 0x80, 0x7f,
    0xf0, 0x53, 0xa0, 0x40, 0x3f, 0xa3, 0x94, 0x3,
    0xfe, 0x9b, 0x10, 0xc, 0xd9, 0x86, 0x0, 0xc3,
    0x54, 0x0, 0xfe, 0xb6, 0x0, 0xcf, 0xd2, 0x66,
    0x9e, 0x70, 0xc, 0xb8, 0x1, 0xf5, 0xa0, 0x4,
    0x9d, 0x2, 0x1, 0x86, 0x34, 0xc0, 0x23, 0xb0,
    0xe, 0x84, 0x0, 0x9a, 0xc4, 0x3, 0xf1, 0x62,
    0x80, 0x49, 0x0, 0x11, 0xb8, 0x4, 0x92, 0x1,
    0xff, 0xc0, 0xa4, 0x0, 0x9c, 0xc0, 0x10, 0x1,
    0xa8, 0x3, 0xff, 0x85, 0x40, 0x1a, 0x0, 0x90,
    0x2, 0x71, 0x0, 0xff, 0xe1, 0xb, 0x0, 0x48,
    0x48, 0x1, 0xac, 0x3, 0xff, 0x89, 0x40, 0x19,
    0x3c, 0x3, 0x18, 0x7, 0xff, 0x10, 0xc0, 0x37,
    0x90, 0x7, 0xff, 0x38, 0xc0, 0x3f, 0xf9, 0xe2,
    0x20, 0xc, 0x60, 0x1f, 0xfc, 0x43, 0x0, 0xc3,
    0xa0, 0x1a, 0xc0, 0x3f, 0xf8, 0x96, 0x1, 0xb5,
    0x0, 0x33, 0x88, 0x7, 0xff, 0x8, 0x5c, 0x3,
    0x21, 0x90, 0x6, 0xd0, 0xf, 0xfe, 0x16, 0x80,
    0x62, 0x30, 0x80, 0xc, 0x7a, 0x60, 0x1f, 0xe3,
    0xd3, 0x0, 0xd0, 0x0, 0x55, 0x0, 0x62, 0xca,
    0x41, 0x0, 0xc2, 0x95, 0x84, 0x1, 0x95, 0x40,
    0x15, 0x18, 0x7, 0x2d, 0xf7, 0x37, 0x5d, 0xcb,
    0x50, 0xe, 0x3a, 0x0, 0xec, 0x50, 0xf, 0x84,
    0x88, 0x20, 0x1f, 0x2e, 0x0, 0x7d, 0x54, 0x10,
    0xf, 0xfe, 0x10, 0xd5, 0x0, 0x3f, 0x97, 0xa9,
    0x0, 0x3f, 0xc9, 0x5c, 0xa0, 0x1f, 0xfc, 0x5,
    0xbf, 0xca, 0x98, 0x84, 0xd6, 0x7d, 0xa8, 0x7,
    0xc0,

    /* U+0039 "9" */
    0x0, 0xff, 0x12, 0x33, 0xb9, 0x90, 0x40, 0x3f,
    0xf8, 0xa3, 0x1b, 0xab, 0x98, 0x84, 0xdf, 0x6c,
    0x8, 0x7, 0xff, 0x6, 0x79, 0xc8, 0x3, 0xf1,
    0x3f, 0x48, 0x7, 0xf8, 0xb5, 0x80, 0x3f, 0xf8,
    0x4d, 0xc4, 0x1, 0xf1, 0x61, 0x0, 0x7c, 0x44,
    0x0, 0xf8, 0x74, 0xc0, 0x38, 0x70, 0x40, 0x30,
    0xc6, 0xfe, 0xeb, 0xf6, 0x4, 0x3, 0xb4, 0x40,
    0x35, 0x88, 0x6, 0x7e, 0x72, 0x0, 0xc4, 0xfc,
    0xe0, 0x18, 0x6c, 0x2, 0x35, 0x0, 0xd1, 0x0,
    0xf, 0xf4, 0x48, 0x6, 0x53, 0x0, 0x48, 0x6,
    0x57, 0x0, 0xff, 0xe0, 0x33, 0x0, 0x34, 0x0,
    0x14, 0x3, 0x58, 0x7, 0xff, 0xa, 0x0, 0x32,
    0x2, 0x80, 0x66, 0x10, 0xf, 0xfe, 0x10, 0xb0,
    0x6, 0x5d, 0x0, 0xd8, 0x1, 0xff, 0xc4, 0xd0,
    0xd, 0xa4, 0x1, 0x90, 0x3, 0xff, 0x88, 0xa0,
    0x18, 0x84, 0x3, 0x8, 0x7, 0xff, 0x10, 0x40,
    0x30, 0xb8, 0x7, 0xff, 0x39, 0xc0, 0x3f, 0xf9,
    0xee, 0xc0, 0x18, 0x40, 0x3f, 0xf8, 0x82, 0x1,
    0x88, 0x80, 0x19, 0x0, 0x3f, 0xf8, 0x88, 0x1,
    0xbb, 0x40, 0x37, 0x80, 0x7f, 0xf1, 0x3c, 0x3,
    0x1a, 0x0, 0x65, 0x10, 0xf, 0xfe, 0x11, 0x28,
    0x6, 0x41, 0x40, 0xd, 0x40, 0x1f, 0xfc, 0x2e,
    0x0, 0xc8, 0x0, 0xf0, 0xc, 0x92, 0x1, 0xff,
    0xc0, 0x93, 0x0, 0xdc, 0x0, 0x44, 0x0, 0x66,
    0xb1, 0x0, 0xfc, 0x56, 0xc0, 0x18, 0x54, 0x2,
    0xa1, 0x0, 0xc9, 0xd2, 0xa2, 0x0, 0x25, 0xad,
    0x40, 0xe, 0x60, 0xc, 0x3a, 0x20, 0x1c, 0xd5,
    0xdf, 0xed, 0xa5, 0x4, 0x0, 0xe9, 0x0, 0xe3,
    0xc2, 0x0, 0xff, 0xe0, 0x26, 0x0, 0x68, 0x10,
    0xf, 0x16, 0xc0, 0x80, 0x7e, 0x19, 0xa9, 0x0,
    0x85, 0xc0, 0x3f, 0x9f, 0xad, 0xd0, 0xcc, 0x8d,
    0x5c, 0xd0, 0x20, 0x14, 0x0, 0x7f, 0xf0, 0x12,
    0x2f, 0x31, 0x72, 0xa0, 0x6c, 0x1, 0x13, 0x0,
    0x7f, 0xf2, 0x7c, 0x3, 0x48, 0x7, 0xff, 0x25,
    0x4c, 0x2, 0x44, 0x0, 0x7f, 0xf2, 0x6c, 0x3,
    0x48, 0x7, 0xff, 0x26, 0x4, 0x2, 0x62, 0x0,
    0xff, 0xe4, 0xb, 0x80, 0x43, 0x0, 0x1f, 0xfc,
    0x9b, 0x0, 0xd2, 0x20, 0x1f, 0xfc, 0x83, 0x50,
    0x8, 0x9c, 0x3, 0xff, 0x93, 0xc0, 0x1a, 0x0,
    0x3f, 0xf9, 0x2c, 0x40, 0x11, 0xa8, 0x7, 0xff,
    0x20, 0x60, 0x3, 0x78, 0x7, 0xff, 0x26, 0x4,
    0x2, 0x63, 0x0, 0xff, 0xe4, 0x13, 0x0, 0x68,
    0x0, 0xff, 0xe4, 0xc8, 0x6, 0x81, 0x0, 0xff,
    0xe4, 0x2a, 0x0, 0x42, 0xe0, 0x1f, 0xfc, 0x98,
    0x0, 0xd6, 0x1, 0xff, 0xc9, 0x72, 0x0, 0x8d,
    0x40, 0x3f, 0xf8, 0x20,

    /* U+003A ":" */
    0x0, 0x91, 0xdc, 0x80, 0x18, 0xfa, 0xe2, 0x17,
    0xc6, 0x5, 0x82, 0x1, 0x87, 0x6, 0x80, 0x3f,
    0x4a, 0x0, 0x7e, 0x40, 0xf, 0xf2, 0x0, 0x7e,
    0x4a, 0x0, 0xfd, 0x45, 0x82, 0x1, 0x87, 0x8,
    0xf, 0xae, 0x21, 0x7c, 0x60, 0x19, 0x1d, 0xc8,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xfd, 0xa3, 0xb9,
    0x0, 0x31, 0xf5, 0xc4, 0x2f, 0x8c, 0xb, 0x4,
    0x3, 0xe, 0x15, 0x80, 0x7e, 0xa5, 0x0, 0xfc,
    0x80, 0x1f, 0xe4, 0x0, 0xfc, 0x94, 0x1, 0xfa,
    0x4b, 0x4, 0x3, 0xe, 0x8, 0x1f, 0x5c, 0x42,
    0xf8, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 576, .box_w = 36, .box_h = 45, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 502, .adv_w = 576, .box_w = 28, .box_h = 46, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 819, .adv_w = 576, .box_w = 28, .box_h = 44, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 576, .box_w = 28, .box_h = 45, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 576, .box_w = 27, .box_h = 45, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 1562, .adv_w = 576, .box_w = 26, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1772, .adv_w = 576, .box_w = 26, .box_h = 45, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 2037, .adv_w = 576, .box_w = 28, .box_h = 45, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 2404, .adv_w = 576, .box_w = 29, .box_h = 44, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 2659, .adv_w = 576, .box_w = 28, .box_h = 46, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 3084, .adv_w = 576, .box_w = 28, .box_h = 45, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3448, .adv_w = 576, .box_w = 10, .box_h = 35, .ofs_x = 13, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 37, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_jetbrainsmono_60 = {
#else
lv_font_t lv_font_jetbrainsmono_60 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 46,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -9,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_JETBRAINSMONO_60*/

