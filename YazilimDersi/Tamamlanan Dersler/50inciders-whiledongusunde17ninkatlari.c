#include "stdlib.h"
#include "stdio.h"

/* while döngüsünü kullanarak 0 ile kullanıcıdan aldığı n sayisi arasinda yer alan 17'nin tum tam
 *sayi katlarini ekrana bastiran bir program yaziniz. Ciktida her satirda 10 adet sayi olacak.
 * Cikti: Limit sayisi girin: 1000
 * 0   17   34   51   68   85   102   119   136   153 ...
 * 850  867   884   901   918   935   952   969   986
 */

int main()
{
    int limit,i;
    int satir;

    printf("Lutfen bir limit degeri giriniz\n");
    scanf("%d",&limit);

    i=0;
    satir=0;

    while(i<=limit)
    {
        if (i%17==0)
        {
            printf("%5d",i);
            satir++;
            if (satir%10==0)
            {
                printf("\n");
            }
        }
        i++;
    }

    return 0;
}