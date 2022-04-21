#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    // Iki diziyi n karakter sayisina gore birlestiriyor.

    char murat[100];
    char beste[100];
    int a;

    printf("Lutfen bir yazi giriniz\n");
    gets(murat); //gets bosluklari da alir.

    printf("Lutfen ikinci yaziyi giriniz\n");
    gets(beste);

    printf("Birinci yazinin sonuna kac karakter eklemek istersiniz?\n");
    scanf("%d",&a);

    printf("Eklemeden once %s\n",murat);

    printf("Birlestirmeden sonra\n");
    strncat(murat,beste,a);

    printf("%s",murat);


    return 0;
}