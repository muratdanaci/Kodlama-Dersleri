#include "stdlib.h"
#include "stdio.h"

/* Klavyeden girilen bir cumlenin kac karakterden olustugunu bulan strlen() fonksiyonunu
 * kullanmadan bulan C programi yaziniz.
 */

int main()
{
    char cumle[100];
    int i=0;

    printf("Lutfen cumlenizi girin: ");
    gets(cumle);

    while (cumle[i])
    {

        i++;
    }

    printf("Cumledeki karakter sayisi: %d\n",i);

    return 0;
}