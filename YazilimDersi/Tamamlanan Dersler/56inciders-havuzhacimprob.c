#include "stdio.h"
#include "stdlib.h"

/* Havuzun enini boyunu yuksekligini metre cinsinden girdisini alan ve havuzun dolmasi icin
 * ne kadar suyun gerekli oldugunu hesaplayan bir c programi yazin.
 */

int main()
{
    float en,boy,yukseklik,su;
    printf("Havuzunuzun enini giriniz: ");
    scanf("%f",&en);
    printf("Havuzunuzun boyunu giriniz: ");
    scanf("%f",&boy);
    printf("Havuzunuzun yuksekligini giriniz: ");
    scanf("%f",&yukseklik);

    su=en*boy*yukseklik;

    printf("Havuzunuz %.2f L kadar su alabilir.",su);

    return 0;
}