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

#include "kahve.h" /* her şeyimizin olduğu header dosyası */

/*#ifdef __TURKISH__
# include "turkish.h"   TODO
#endif //__TURKISH__*/

int main(int argc, char **argv){
    time_t t = time(NULL);          /* tarih ve saat için ana bölüm */
    struct tm tm = *localtime(&t);  /* burası da */

    Bardak Fincan;                  /* Fincan adlı Bardak'ımızı tanımlayalım */
    Bardak *fincan = &Fincan;       /* fonksiyonlarda kullanabilmemiz
                                     * için Fincan için fincan adında
                                     * bir pointer tanimlayalım */
    Fincan.bardak_bos = true;       /* standart olarak boş */

    for (;;){                       /* "main loop" ana döngü */
        while(1 <= tm.tm_mday && 5  >= tm.tm_mday   /* hafta içi mi? */
           && 9 <= tm.tm_hour && 17 >= tm.tm_hour){ /* iş saati mi?  */

            if (Fincan.bardak_bos == true) /* fincanımız boşsa */
               doldur(fincan);             /* dolduralım */
            else                           /* değilse */
                ic(fincan);                /* içelim */
        }
        //else
        printf("Vuhu\n");           /* hafta için veya iş sati değilse vuhu */
        sleep(60);                  /* bir dakika bekleyip
                                     * tekrar kontrol edelim */
    }
    return 0;
}
