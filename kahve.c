#include "kahve.h"

#ifdef __TURKISH__
# include "turkish.h"
#endif //__TURKISH__

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
