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

/* we can drink */
void drink(Cup *Mug){
    /* let's not drink if already empty */
    if (Mug->is_empty == false){
        /* print "drinking" */
        printf("Drinking...\n");
        wait(300);
        /* empty, because we've drunk it */
        Mug->is_empty = true;
    }
}
