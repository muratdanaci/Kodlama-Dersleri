#include "stdlib.h"
#include "stdio.h"

/* Kullanicidan girmesini istedigi a,b,c ve x degerlerini kullanarak asagidaki aritmetik
 * islemin sonucunu hesaplayan ve ekrana basan C programini yaziniz. ax^2 + bx + c = ?
 * ornek ekran ciktisi: a,b,c ve x sayilarini giriniz: 5 6 7 8 > sonuc : 375 */

int main()
{
    int a,b,c,x,sonuc;
    printf("Lutfen a b c ve x degerlerini giriniz\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);

    sonuc=a*x*x+b*x+c;

    printf("ax^2 + bx + c = %d",sonuc);

    return 0;
}