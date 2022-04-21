#include "stdio.h"
#include "stdlib.h"

/*Kullanicidan aldigi tam sayi kenar uzunluklari (a,b) ve yukseklik (h) bilgisini kullanarak
 * bir dikdortgen prizmasinin sirayla taban alani, yanal alanlarinin toplamini, toplam alani
 * ve hacmini ekrana bastiran programin c kodunu yaziniz. */

int main()
{
    int a,b,h,tabanfor,yanfor,topfor,hacim;

    printf("Dikdortgen prizmanin a,b ve h uzunluklarini giriniz\n");
    scanf("%d%d%d",&a,&b,&h);

    tabanfor=a*b;
    yanfor=2*a*h+2*b*h;
    topfor=yanfor+2*tabanfor;
    hacim=tabanfor*h;

    printf("Dikdortgen prizmanin:\nTaban alani: %d\nYanal alanlar toplami: %d\nToplam alani: %d\nHacmi: %d\n",tabanfor,yanfor,topfor,hacim);

    return 0;
}