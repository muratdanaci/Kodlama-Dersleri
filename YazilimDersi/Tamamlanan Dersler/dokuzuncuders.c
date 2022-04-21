#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
    && ve
    || veya
    */
   int yas;
   int ugurlu_sayi;

    printf("Yasinizi giriniz: ");
    scanf("%d",&yas);

    printf("Ugurlu sayinizi giriniz: ");
    scanf("%d",&ugurlu_sayi);

    if((yas>30) && (yas<60) || (ugurlu_sayi=13))
    {
        printf("BRAVO");
    }
    return 0;
}