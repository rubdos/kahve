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

/* be sure this includes once */
#ifndef __KAHVE_H__
#define __KAHVE_H__

/* fpr printing */
#include <stdio.h>
/* to know if the Cup is empty or not */
#include <stdbool.h>
/* to learn the current time */
#include <time.h>

#ifdef __unix__
/* sleep() is in this file in UNIX-like OSes. */
# include <unistd.h>
#elif _WIN32
/* Sleep() is in this file in Windows */
# include <windows.h>
#endif

/* create the cup structure */
struct cup {
/* to know if the cup is empty or not */
    bool is_empty;
};

/* lets create the "Cup" type */
typedef struct cup Cup;

#define best_drink_evet "coffee" /* <3 */
#endif //__KAHVE_H__
