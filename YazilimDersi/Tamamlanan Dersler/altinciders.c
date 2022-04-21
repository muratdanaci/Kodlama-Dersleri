#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%d",&b);

    printf("Girdiginiz sayilarin bolum sonucu:%.2f",(float)a/b); /*    + - * / %     */
    return (0);
}