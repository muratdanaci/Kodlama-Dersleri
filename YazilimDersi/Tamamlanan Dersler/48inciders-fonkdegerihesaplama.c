#include "stdlib.h"
#include "stdio.h"

/* Kullanici tarafindan girilen reel bir sayinin asagida verilen f fonksiyonuna gore f(x) degerini
 * hesaplayip donduren bir program yaziniz. f(x)=x^3 + 13x^2 + 47x + 5
 * Cikti: Bir reel x degeri girin: 2.43
 * >> f(2.430) = 210.323
 */


int main()
{
    float x;

    printf("Lutfen bir reel x degeri giriniz: ");
    scanf("%f",&x);

    printf(">> f(%.3f) = %.3f",x,x*x*x+13*x*x+47*x+5);



    return 0;
}