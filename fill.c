#include "coffee.h"

/* bardağımızı doldurmak için olan fonksiyonumuz */
void doldur(Bardak *Fincan){
    /* bardak zaten doluysa bir daha doldurmayalım diye */
    if (Fincan->bardak_bos == true){
        /* doldururken "doldur" yazıyor */
        printf("Doldur\n");
        bekle(30);
        /* doldurduğumuz için artık boş değil */
        Fincan->bardak_bos = false;
    }
}
