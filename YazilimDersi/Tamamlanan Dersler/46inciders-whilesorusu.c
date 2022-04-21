#include "stdlib.h"
#include "stdio.h"

/* While dongusunu kullanarak bu ciktiyi elde edin:
 * Lutfen bir sayi girin: 23
 * 23 22 21 20 19 ... 1
 */
int main()
{
    int a;
    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&a);

    while (a!=0)
    {
        printf("%d\t",a);
        a-=1;
    }
    return 0;
}