#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main()
{
    //"n" lerde bos karakter atanmali yoksa hata verir.
    char murat[]="Benim adim Murat DANACI";
    char beste[100]="";

    strncpy(beste,murat,4);
    printf("%s",beste);

    return 0;
}