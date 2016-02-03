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

#pragma once
#include <stdio.h>   /* "iç" ve "doldur" yazıları için */
#include <stdbool.h> /* bardak dolu mu öğrenmek için */
#include <time.h>    /* şu anki zamanı bulup ona göre içip
                      * içmeyeceğimize karar vermek için */
#include <unistd.h>  /* sleep için */

struct Bardak {      /* bardak yapımızı oluşturalım */
    bool bardak_bos; /* bardak boş mu test etmek için booleanımız */
};                   /* Bardak adlı tipi oluşturalım */

void doldur(struct Bardak* fincan){         /* bardağımızı doldurmak
                                      * için olan fonksiyonumuz */
    if (fincan->bardak_bos == true){ /* bardak zaten doluysa bir
                                      * daha doldurmayalım diye */
        puts("doldur");              /* doldururken "doldur" yazıyor */
        sleep(30);                   /* 30 saniyede doluyor */
        fincan->bardak_bos = false;  /* doldurduğumuz için artık boş değil */
    }
}

void ic(struct Bardak* fincan){              /* kahveyi içmek için
                                       * olan fonksiyonumuz */
    if (fincan->bardak_bos == false){ /* bardak zaten boşsa içmeyelim diye */
        puts("ic");                   /* içerken "ic" yazıyor */
        sleep(300);                   /* 5 dakikada içiyoruz */
        fincan->bardak_bos = true;    /* içtiğimiz için artık boş */
    }
}

#define enguzelicecek kahve     /* <3 */
