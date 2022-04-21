#include "stdio.h"
#include "stdlib.h"

int main()
{
    char murat[]={'b','e','s','t','e','\0'};
    char dizim[]="beste";
    char kullanici[100];

    printf("%s",dizim);

    printf("Lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);

    printf("Girdiginiz karakter dizileri %s",kullanici);
    return 0;
}
