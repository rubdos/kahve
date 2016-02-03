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

#include "kahve.h"

/*#ifdef __TURKISH__
# include "turkish.h"   TODO
#endif //__TURKISH__*/

int main(int argc, char **argv){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    Bardak Fincan;
    Bardak *fincan = &Fincan;
    Fincan.bardak_bos = true;

    for (;;){
        while(0 < tm.tm_mday && 9 < tm.tm_hour
           && 6 > tm.tm_mday && 17> tm.tm_hour){

            if (Fincan.bardak_bos == true)
               doldur(fincan);
            else
                ic(fincan);
            sleep(1);
        }
        //else
        printf("Vuhu\n");
        sleep(60);
    }

    return 0;
}
