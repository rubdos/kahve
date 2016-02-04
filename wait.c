#include "coffee.h"

void bekle(int sure){
#ifdef __unix__
        /* sleep() fonksiyonu,
         * UNIX benzeri işletim sistemlerinde saniye ile çalışır. */
        sleep(sure);
#elif _WIN32
        /* Sleep() fonksiyonu,
         * Windows'ta mikrosaniye ile çalışır. */
        sleep(sure * 100);
#endif
}
