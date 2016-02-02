#ifndef __KAHVE_H__
#define __KAHVE_H__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

struct bardak {
    bool bardak_bos;
};

typedef struct bardak Bardak;

void doldur(Bardak *fincan){
    fincan->bardak_bos = false;
    puts("doldur");
    sleep(30);
}

void ic(Bardak *fincan){
    fincan->bardak_bos = true;
    puts("ic");
    sleep(300);
}

#define enguzelicecek kahve

#endif //__KAHVE_H__
