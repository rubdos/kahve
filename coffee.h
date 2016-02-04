/*
 * Kahve.
 * Copyright (C) 2016  Arda Ünlü
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* bu dosyanın bir kere include edileceğinden emin olalım. */
#ifndef __KAHVE_H__
#define __KAHVE_H__

/* "iç" ve "doldur" yazıları için */
#include <stdio.h>
/* bardak dolu mu öğrenmek için */
#include <stdbool.h>
/* şu anki zamanı bulup ona göre içip içmeyeceğimize karar vermek için */
#include <time.h>

#ifdef __unix__
/* sleep() fonksiyonu,
* UNIX benzeri işletim sistemlerinde unistd.h dosyasında bulunur. */
# include <unistd.h>
#elif _WIN32
/* Sleep() fonksiyonu,
* Windows'ta windows.h dosyasında bulunur. */
# include <windows.h>
#endif

/* bardak yapımızı oluşturalım */
struct bardak {
/* bardak boş mu test etmek için booleanımız */
    bool bardak_bos;
};

/* Bardak adlı tipi oluşturalım */
typedef struct bardak Bardak;

#define en_guzel_icecek "kahve" /* <3 */
#endif //__KAHVE_H__
