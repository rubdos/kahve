/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) <year>  <name of author>

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

#ifndef __KAHVE_H__
#define __KAHVE_H__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

struct bardak {
    bool bardak_bos;
};

typedef struct bardak Bardak;

void doldur(Bardak *fincan){
    fincan->bardak_bos = false;
    puts("doldur");
    sleep(30);
}

void ic(Bardak *fincan){
    fincan->bardak_bos = true;
    puts("ic");
    sleep(300);
}

#define enguzelicecek kahve

#endif //__KAHVE_H__
