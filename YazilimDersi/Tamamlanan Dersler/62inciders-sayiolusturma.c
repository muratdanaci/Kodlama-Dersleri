#include <stdio.h>
#include <stdlib.h>

/* Tek haneli 3 sayi olan x,y ve z yi girdi olarak alan ve yuzler basamagina x onlar basamagina
 * y ve birler basamagina z koyan ve sonunda bu sayiyi bulan bir C programi yazin.
 */

int main()
{
    int x,y,z,sayi;

    printf("Lutfen yuzler basamagindaki sayiyi giriniz: ");
    scanf("%d",&x);
    printf("Lutfen onlar basamagindaki sayiyi giriniz: ");
    scanf("%d",&y);
    printf("Lutfen birler basamagindaki sayiyi giriniz: ");
    scanf("%d",&z);

    sayi=(x*100)+(y*10)+(z);

    printf("Girdiginiz sayilarin ciktisi: %d",sayi);

    return 0;
}