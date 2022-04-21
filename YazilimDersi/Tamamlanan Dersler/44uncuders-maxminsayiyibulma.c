#include "stdlib.h"
#include "stdio.h"

/* Kullanicidan 3 farkli tam sayi girmesini isteyen, kullanicinin girdigi bu sayilari okuyup
 * sayilarin en kucugunu ve en buyugunu ekrana bastiran C programi yaziniz
 * Cikti > Uc farkli tam sayiyi giriniz :29 78 14
 * En kucuk sayi: 14
 * En buyuk sayi: 78 */


int main()
{
    int a,b,c;
    int min,max;

    printf("Lutfen 3 farkli tam sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);

    max = a;

    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    printf("Maximum degeriniz: %d\n",max);

    min = a;

    if (b<min)
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }
    printf("Minimum degeriniz: %d\n",min);

    return 0;
}