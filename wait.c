/*
 * Kahve.
 * Copyright (C) 2016  Arda Ünlü

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

#include "coffee.h"
#include "wait.h"

/* we can wait :( */
void wait(int time){
#ifdef __unix__
        /* sleep() works with seconds in UNIX-like OSes */
        sleep(time);
#elif _WIN32
        /* Sleep() works with microseconds in Windows */
        Sleep(time * 100);
#endif
}
