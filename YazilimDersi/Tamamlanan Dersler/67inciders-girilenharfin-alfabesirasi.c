#include "stdlib.h"
#include "stdio.h"

/* Ingiliz alfabesinden herhangi bir buyuk veya kucuk harfi ch degiskenine okuyan ve bu harfin
 * alfabede kacinci harf oldugunu bulan bir C programi yaziniz. (Ipucu: Buyuk harf icin
 * (int)ch-(int)'A'+1, kucuk harf icin (int)ch-(int)'a'+1 ifadelerini kullanabilirsiniz.
 * Ornek cikti>> Bir harf giriniz: D
 * >> D: 4. harftir.
 */

int main()
{
    char ch;
    int sira;

    printf("Lutfen karakter giriniz: ");
    scanf("%c",&ch);

    if ((ch>='A') && (ch<='Z'))
    {
        sira=(int)ch-(int)'A'+1;
    }
    else if ((ch>='a') && (ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    } else
    {
        printf("Lutfen karakter giriniz. Boyle bir karakter yok!");
    }
    printf("%c: %d. harftir.",ch,sira);

    return 0;
}