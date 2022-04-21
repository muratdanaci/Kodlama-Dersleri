#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main()
{
    //Bir dizinin icerigini diger bir karakter dizisinin icine atamaya yarar.

    char murat[]="Benim adim Murat DANACI";
    char beste[100];

    strcpy(beste,murat);
    printf("%s",beste);

    return 0;
}