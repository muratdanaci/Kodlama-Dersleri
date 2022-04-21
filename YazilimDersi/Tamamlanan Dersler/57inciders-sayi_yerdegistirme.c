#include "stdlib.h"
#include <stdio.h>

/* A ve B degiskenlerine iki tamsayiyi girdi olarak alan ve yerini degistiren c prog yazin.
 */

int main()
{
    int a,b,c;

    printf("Lutfen A sayisini giriniz: ");
    scanf("%d",&a);
    printf("Lutfen B sayisini giriniz: ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("A sayisinin degeri: %d\n",a);
    printf("B sayisinin degeri: %d",b);

    return 0;
}