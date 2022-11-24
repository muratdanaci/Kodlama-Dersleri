#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N pozitif tamsayisina kadar olan tek sayilarin ekrana listelenmesini saglayan C programini recursive fonksiyon yardimiyla yaziniz.

void teksayilar(int baslangic, int bitis)
{
    if(baslangic <= bitis)
    {
        printf("%d\n",baslangic);
        teksayilar(baslangic + 2, bitis);
    }
}


int main()
{
    int n, duzeltme;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    if (n %2 == 1)
        duzeltme = n;
    else
        duzeltme = n - 1;

    teksayilar(1, duzeltme);

    return 0;
}