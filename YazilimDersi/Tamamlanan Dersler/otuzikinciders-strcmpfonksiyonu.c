#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main()
{
    //Kiyasmalamaya yarar. 2 tane karakter dizisini kiyaslar ve bu degerlerin
    //ascii kodlarini kiyaslar hangisi buyukse 1 degerini dondurur.
    int sonuc;
    char murat[15]="ABCDEF";
    char beste[15]="abcdef";

    sonuc= strcmp(murat,beste);
    printf("%d\n",sonuc);
    if (sonuc<0)
    {
        printf("Murat, Beste'den kucuktur.");
    }
    else if (sonuc>0)
    {
        printf("Murat, Beste'den buyuktur.");
    }
    else
    {
        printf("Ikisi de birbirine esittir.");
    }
    return 0;
}