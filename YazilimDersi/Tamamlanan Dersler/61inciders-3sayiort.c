#include <stdlib.h>
#include <stdio.h>

/* Kullanicidan 3 sayi alan ve bunun ortalamasini veren bir C programi yaziniz.
 */

int main()
{
    float a,b,c,ort;

    printf("Lutfen 1. sayiyi giriniz: ");
    scanf("%f",&a);
    printf("Lutfen 2. sayiyi giriniz: ");
    scanf("%f",&b);
    printf("Lutfen 3. sayiyi giriniz: ");
    scanf("%f",&c);

    ort=(a+b+c)/3;

    printf("Girdiginiz 3 sayinin ortalamasi: %.2f",ort);

    return 0;
}