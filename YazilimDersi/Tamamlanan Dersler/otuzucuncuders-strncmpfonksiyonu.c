#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main()
{
    // "n" belirli bir karaktere kadar oldugunu belirtir.
    int sonuc;
    char murat[15]="abcdef";
    char beste[15]="ABCDEF";

    sonuc= strncmp(murat,beste,4);
    printf("%d\n",sonuc);
    if (sonuc<0)
    {
        printf("Murat, Beste'den kucuktur.");
    }
    else if (sonuc>0)
    {
        printf("Murat, Beste'den buyuktur.");
    } else
    {
        printf("Ikisi de birbirine esittir.");
    }

    return 0;
}