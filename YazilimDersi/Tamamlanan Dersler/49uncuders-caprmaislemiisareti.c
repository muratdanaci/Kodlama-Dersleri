#include "stdio.h"
#include "stdlib.h"

/* Kullanici tarafindan girilen iki tam sayinin carpiminin isaretini, sayilari carpmadan bulan
 * bir program yazin.
 *
 * cikti: Iki tane sayi girin: -3 , 432
 *         >> isaret(-3*432)= -1
 *         Iki tane sayi girin: 10 , 5
 *         >> isaret(10*5)= +1
 *         Iki tane sayi girin: 0 , 78
 *         >> isaret(0*78)= 0
 *
 * Not: Carpim islemi yapmadan sonucun israterini bulmak icin, her iki sayinin pozitif ve negatif
 * oldugu durumlari dusunup derste gordugunuz && ve || oper. kullanmaniz gerekmektedir
 */

int main()
{
    int a,b;

    printf("Lutfen iki tane sayi girin: ");
    scanf("%d%d",&a,&b);

    if ((a>0 && b>0) || (a<0 && b<0))
    {
        printf(">> isaret(%d*%d)= +1",a,b);
    }
    else if ((a>0 && b<0) || (a<0 && b>0))
    {
        printf(">> isaret(%d*%d)= -1",a,b);
    } else
    {
        printf(">> isaret(%d*%d)= 0",a,b);
    }

    return 0;
}