#include "stdlib.h"
#include "stdio.h"

/* Bir telefon sirketi telefonda 3 dakikaya kadar konusmanin ucretini 0.25TL olarak belirlemis.
 * Ancak sirket, konusma suresi 3 dakikayi astigi durumda bundan sonraki her dakika icin ek
 * olarak 0.08TL almaktadir. Telefon gorusmesinin suresini dakika cinsinden girdi alan ve
 * konusmanin ucretini hesaplayan bir C programi yaziniz.
 * Ornek cikti>> Telefon konusma suresi: 8.0 >> Ucret: 0.65TL
 */

int main()
{
    float sure,ucret;

    printf("Lutfen telefon konusma surenizi giriniz: ");
    scanf("%f",&sure);

    if (sure<=3)
    {
        ucret=0.25;
    } else
    {
        ucret=0.25+(sure-3)*0.08;
    }
    printf("Ucret: %.2f",ucret);

    return 0;
}