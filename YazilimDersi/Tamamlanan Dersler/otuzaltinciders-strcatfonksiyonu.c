#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main()
{
    // Iki tane karakter dizisini birlestirir.
    char bos[100];
    strcpy(bos,"Benim");
    strcat(bos," adim");
    strcat(bos," Murat DANACI");

    printf("%s",bos);

    return 0;
}