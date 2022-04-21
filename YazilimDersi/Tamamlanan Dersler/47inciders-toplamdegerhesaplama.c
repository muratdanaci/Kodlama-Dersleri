#include "stdio.h"
#include "stdlib.h"

/* Kullanicinin girdigi bir n sayisina kadar olan tum tam sayilarin toplamini hesaplayan duzgun
 * bir sekilde ekrana yazdiran bir program yaziniz.
 * Cikti: Lutfen bir sayi giriniz: 8
 * 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
 */

int main()
{
    int a,i;
    int sonuc;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&a);

    i = 1;
    sonuc = 0;

    while (i<=a)
    {
        if (i==a)
        {
            printf("%d = ",a);
        } else
        {
            printf("%d + ",i);
        }

        sonuc=sonuc+i;
        i++;

    }
    printf("%d",sonuc);

    return 0;
}