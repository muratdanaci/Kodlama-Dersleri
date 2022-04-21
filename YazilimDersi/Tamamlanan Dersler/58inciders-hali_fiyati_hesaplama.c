#include <stdio.h>
#include <stdlib.h>
#define BIRIM 40
#define ISCILIK 200

/* Bir ogrenci evinde ogrenciler salonu haliyla kaplatmak istemektedir. Dosenecek halinin
 * metrekaresi 40tldir. Ayrica halici salonu dosemek icin 200tl iscilik almaktadir.
 * Buna gore metrekareyi girdi olarak alan ve haliciya odenmesi gereken toplam tutari
 * hesaplayan bir C programi yaziniz.
 */

int main()
{
    float metrekare,ucret;

    printf("Lutfen salonun metrekaresini giriniz: ");
    scanf("%f",&metrekare);

    ucret=metrekare*BIRIM+ISCILIK;

    printf("Halinizin maaliyeti %.2f",ucret);

    return 0;
}