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

/* her şeyimizin olduğu header dosyası */
#include "coffee.h"

int main(int argc, char **argv){
    /* tarih ve saat için ana bölüm */
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    /* Fincan adlı Bardak'ımızı tanımlayalım */
    Bardak Fincan;

    /* standart olarak boş */
    Fincan.bardak_bos = true;

    /* "main loop" ana döngü */
    for (;;){
        while (
           /* hafta içi mi? */
           (1 <= tm.tm_mday && 5  >= tm.tm_mday)
           /* iş saati mi?  */
        && (9 <= tm.tm_hour && 16 >= tm.tm_hour)){

            /* fincanımız boşsa */
            if (Fincan.bardak_bos == true) {
                /* dolduralım */
                doldur(&Fincan);
              /* değilse */
            } else {
                /* içelim */
                ic(&Fincan);
            }

        } /* while'ın sonu, hafta içi veya iş saati bitince buraya geliyor */

        /* hafta için veya iş sati değilse
         * (ana döngü içindeyiz ama while döngüsünden çıktık) vuhu */
        printf("Vuhu\n");

        /* bir dakika bekleyip tekrar kontrol edelim */
        bekle(60);
    }
    return 0;
}
