#include <stdlib.h>
#include <stdio.h>
#define T 18
#define B 17
#define S 19

/* Bir halici cocuklar icin 3 ayri tip hali satmaktadir. Bu halilarin tipi kodu ve metrekare
 * birim fiyatlari asagida verilmistir. Tweety (Kodu: T Metrekare birim fiyati: 18)
 * Bugs (Kodu: B Metrekare birim fiyati: 17) Spiderman (Kodu: S Metrekare birim fiyati: 19)
 */

int main()
{
    char kod;
    float ucret,alan;

    printf("Lutfen urunun kodunu giriniz(T, B, S): ");
    scanf("%c",&kod);
    printf("Lutfen alani giriniz: ");
    scanf("%f",&alan);

    if (kod=='T')
    {
        ucret=T*alan;
    }
    else if (kod=='B')
    {
        ucret=B*alan;
    }
    else if (kod=='S')
    {
        ucret=S*alan;
    } else
    {
        printf("Hatali kod girdiniz.");
    }

    printf("Odemeniz gereken ucret: %.2f",ucret);


    return 0;
}