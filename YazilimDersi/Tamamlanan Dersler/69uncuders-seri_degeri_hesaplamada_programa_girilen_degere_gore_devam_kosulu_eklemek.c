#include "stdlib.h"
#include "stdio.h"
#include "math.h"

/* 68.dersteki verilen seri hesaplamasini birden fazla n ve x ciftleri icin hesaplacak sekilde
 * yeniden yazin. Programda her seri hesaplamasindan sonra kullaniciya devam edilip edilmeyecegi
 * sorulmalidir. Kullanici devam etmek istiyorsa evet anlaminda 'E' veya 'e' girmelidir. Diger
 * karakter girislerinde ise program sonlandirilmalidir.
 * Ornek cikti: Pozitif tamsayi: 3 Reel sayi=1.0 Seri= 9.00 Devam edecek misiniz: E
 * >> Pozitif tamsayi:2 Reel sayi:1.5 Seri= 1,04 Devam edecek misiniz:t >> Hoscakalin!
 */

int main()
{
    int i,n;
    float x,seri;
    char devam;

    do {
        printf("Pozitif sayi giriniz: ");
        scanf("%d", &n);
        printf("Reel sayi: ");
        scanf("%f %c",&x,&devam);

        seri=0;
        for (i = 1; i <= 2 * n - 1; i += 2) {
            seri += i / pow(x, i + 1);
        }

        printf("Seri= %f\n", seri);

    } while ((devam=='E') || (devam=='e'));
    printf("Hoscakalin!");
    return 0;
}