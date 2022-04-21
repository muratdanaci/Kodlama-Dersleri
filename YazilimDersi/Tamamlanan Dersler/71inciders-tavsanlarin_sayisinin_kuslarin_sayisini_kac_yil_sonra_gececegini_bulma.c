#include "stdlib.h"
#include "stdio.h"
#define tavhiz 0.038
#define kushiz 0.012

/* Bir ciftlikte tavsanlarin sayisi 1042 iken, kuslarin sayisi 2272dir. Bir yilda tavsanlar %3,8
 * oraninda cogalirken, kuslar ise %1,2 oraninda cogalmaktadir. Tavsanlarin kuslarin sayisini
 * kac yil sonra gececegini bulan bir C programi yaziniz.
 */

int main()
{
    float tavsan=1042,kus=2272;
    int yil=0;

    while (tavsan<kus)
    {
        tavsan+=tavsan*tavhiz;
        kus+=kus*kushiz;
        yil++;
        printf("%d. yil: tavsan= %d, kus=%d\n",yil,(int)tavsan,(int)kus);
    }
    printf("Tavsanlar kuslari %d.yilda gecer.",yil);
    return 0;
}