#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N pozitif tamsayisinin 0 a kadar sayilarin ekrana gosterilmesini saglayan c programini yaziniz.

// Recursive fonc. ayni fonksiyonun kendi icinde surekli kendisini cagirma durumu.

void listele(int sayi)  //sayi = 5
{
    if(sayi == 0)
        printf("%d",sayi);
    else
    {
        printf("%d\n",sayi);  // 5 i yazdiriyor alt satira iniyor.
        listele(sayi-1);  //sayiyi 4 yapip listele fonksiyonuna tekrar gonderiyor.
    }
}

int main()
{
    int n;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&n); //5

    listele(n); // 5 i listele fonksiyonuna gonderiyor
    return 0;
}