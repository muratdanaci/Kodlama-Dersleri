#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N tamsayisina kadar 2 nin kuvvetlerini listelenmesini saglayan C programini recursive fonksiyon kullanarak yaziniz.

int kuvvet(int sayi)
{
    int deger;
    if (sayi == 0)
        deger = 1;
    else
        deger = 2 * kuvvet(sayi-1);
    
    printf("%d\n",deger);

    return deger;
}

int main()
{
    int n;

    printf("Lutfen bir adet sayi giriniz: ");
    scanf("%d",&n);

    kuvvet(n);
    
    
    return 0;
}