#include <stdio.h>
#include "stdlib.h"
#define kitver 0.04
#define temver 0.056
#define luksver 0.196
#define kitap 0
#define temelgida 1
#define luks 2

/* Uc adet urunumuz var: Kitap, temel gida ve luks.
 * Devlet her uc gruba farkli oranlarda vergi uyguluyor. Kitap icin %4.0, temel gida icin %5.6,
 * luks urun gammi icin %19.6
 * Her urunun bir kodu var: Kitap kodu 0, temel gidanin kodu 1, luks urunun kodu 2.
 * Kullanicidan istediginiz urunun kodunu ve fiyatini isteyen daha sonra switch case yapisini
 * kullarak son fiyatini ekrana bastiran bir c programi yaziniz.
 * Ayni programi if else yapisi kullanarak yaziniz.
 */


int main()
{
    int kod;
    float fiyat,fkitap,ftemel,fluks;

    printf("Lutfen urunun kodunu giriniz(Kitap:0, Temel Gida:1, Luks Urun:2): ");
    scanf("%d",&kod);
    printf("Lutfen urunun fiyatini giriniz: ");
    scanf("%f",&fiyat);

    fkitap=fiyat+fiyat*kitver;
    ftemel=fiyat+fiyat*temver;
    fluks=fiyat+fiyat*luksver;
/*
    switch (kod) {
        case kitap:
            printf("Kitapin vergili fiyati: %.2f",fkitap);
            break;
        case temelgida:
            printf("Temel gidanin vergili fiyati: %.2f",ftemel);
            break;
        case luks:
            printf("Luks urunun vergili fiyati: %.2f",fluks);
            break;
        default:
            printf("Yanlis kod girdiniz!");
    }
*/
    if (kod==0)
    {
        printf("Kitabin vergili fiyati: %.2f",fkitap);
    } else if (kod==1)
    {
        printf("Temel gidanin vergili fiyati: %.2f",ftemel);
    } else if (kod==2)
    {
        printf("Luks urunun vergili fiyati: %.2f",fluks);
    } else
    {
        printf("Yanlis kod girdiniz!");
    }
    return 0;
}
