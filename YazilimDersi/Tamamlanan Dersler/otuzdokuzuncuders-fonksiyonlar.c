#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
  void tekmiciftmi(int murat)   //geriye dondurulmeyen fonksiyonlarda kullanilir.
{
    if (murat%2==0)
    {
        printf("Sayimiz cift sayidir.");
    } else
    {
        printf("Sayimiz tek sayidir.");
    }
}
*/

int tekmiciftmi(int murat)
{
    if (murat%2==0)
    {
        return 1;
    } else
    {
        return 0;
    }
}


int main()
{
    //Sayinin tek mi cift oldugunu bulmak

    int sayi,sonuc;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    sonuc=tekmiciftmi(sayi);

    //2.islem icin

    if (sonuc==1)
    {
        printf("Sonucumuz cifttir.");
    }
    if (sonuc==0)
    {
        printf("Sonucumuz tektir.");
    }


    return 0;
}