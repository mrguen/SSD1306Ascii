/*
 *
 * CalBlk36blank Font
 *
 *
 * Copyright (C) 2010 by Integrated Mapping Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * To complete CalBlk36nums with the blank character
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : CalBlk36blank.h
 * Date                : 19.05.2011 / 07.07.2018 by TG
 * Font size in bytes  : ?
 * Font width          : 10
 * Font height         : 36
 * Font first char     : 20
 * Font last char      : 20
 * Font used chars     : 1
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#ifndef CalBlk36blank_H
#define CalBlk32_H

#define CalBlk36blank_WIDTH 28
#define CalBlk36blank_HEIGHT 36

GLCDFONTDECL(CalBlk36blank) = {
    0x00, 0x32, // size
    0x1C, // width
    0x24, // height
    0x20, // first char
    0x01, // char count

    // char widths
    0x08,

    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x20 <space>
};

#endif
