#include "stdio.h"
#include <stdlib.h>
#include "math.h"

/* Bir pozitif tamsayi olan n degeri ile bir reel sayi olan x degerini girdi olarak alan ve
 * 1/x^2+3/x^4+5/x^6+7/x^8+...+2n-1/x^2n serisini hesaplayan program yaziniz
 * Ornek cikti: Pozitif tamsayi: 3
 * Reel sayi:1.0
 * Seri=9.00
 */

int main()
{
    int i,n;
    float x,seri;

    printf("Lutfen pozitif bir sayi giriniz: ");
    scanf("%d",&n);
    printf("Lutfen reel bir sayi giriniz: ");
    scanf("%f",&x);

    for (i = 1; i <= 2*n-1; i+=2) {
        seri+=i/ pow(x,i+2);
    }

    printf("Seri= %.2f",seri);

    return 0;
}