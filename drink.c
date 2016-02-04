#include "coffee.h"

/* kahveyi içmek için olan fonksiyonumuz */
void ic(Bardak *Fincan){
    /* bardak zaten boşsa içmeyelim diye */
    if (Fincan->bardak_bos == false){
        /* içerken "ic" yazıyor */
        printf("İç\n");
        bekle(300);
        /* içtiğimiz için artık boş */
        Fincan->bardak_bos = true;
    }
}
