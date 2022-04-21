#include <stdio.h>
#include <stdlib.h>

/* Kullanicidan pozitif bir tamsayiyi girdi olarak alip, bu sayinin 13 ve veya 17'ye bolunup
 * bolunmedigini bularak bu durumu mesaj ile belirten bir C programi yaziniz.
 */


int main()
{
    int a;

    printf("Lutfen pozitif bir tam sayi giriniz: ");
    scanf("%d",&a);

    if ((a%13==0) && (a%17==0))
    {
        printf("Girdiginiz %d sayisi 13'e ve 17'ye tam bolunur.",a);
    }
    else if ((a%13==0) && (a%17!=0))
    {
        printf("Girdiginiz %d sayisi 13'e tam bolunur fakat 17'ye tam bolunmez.",a);
    }
    else if((a%13!=0) && (a%17==0))
    {
        printf("Girdiginiz %d sayisi 13'e tam bolunmez fakat 17'ye tam bolunur.",a);
    } else
    {
        printf("Girdiginiz %d sayisi 13'e ve 17'ye tam bolunmez.",a);
    }



    return 0;
}