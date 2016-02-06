/*
 * Kahve.
 * Copyright (C) 2016  Arda Ünlü
 *                     Ruben De Smet

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

int main(int argc, char **argv){
    /* main section for date and time */
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    /* lets define our Cup called Mug */
    Cup Mug;

    /* empty as default */
    Mug.is_empty = true;

    /* the main loop */
    for (;;){
        t = time(NULL);
        tm = *localtime(&t);
        while (
           /* is it a weekday? */
           (1 <= tm.tm_mday && 5  >= tm.tm_mday)
           /* is it working hour? */
        && (9 <= tm.tm_hour && 16 >= tm.tm_hour)){

            /* if our Mug is empty */
            if (Mug.is_empty == true) {
                /* dolduralım */
                fill(&Mug);
              /* if not */
            } else {
                /* içelim */
                drink(&Mug);
            }

        } /* end of while, we are here if it sn't a weekday or working hour */

        /* we are happy */
        printf("Wohoo!\n");

        /* wait for a minute and recheck */
        wait(60);
    }
    return 0;
}
