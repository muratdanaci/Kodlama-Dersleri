#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin toplanarak sonucunu ekrana gosterilmesini saglayan C programini recursive fonksiyon yardimiyla yaziniz.

int topla(int sayi)
{
    if(sayi == 1)
        return 1;
    else
        return sayi + topla(sayi-1);
}

int main()
{
    int n;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&n);

    printf("Toplam sonucu = %d",topla(n));

    return 0;
}