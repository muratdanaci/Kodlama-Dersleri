#include "stdio.h"
#include "stdlib.h"

/* Klavyeden girilen bir cumlenin harflerini alt alta yazdirilmasini saglayan program yaziniz */

int main()
{
    char cumle[100];
    int i;

    printf("Lutfen bir cumle giriniz: ");
    gets(cumle);

    for (i = 0; cumle[i] ; i++) {
        printf("%c\n",cumle[i]);
    }

    return 0;
}