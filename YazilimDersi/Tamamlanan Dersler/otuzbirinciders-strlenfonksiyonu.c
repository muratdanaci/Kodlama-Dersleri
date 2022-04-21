#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    //Karakter dizisinin boyutunu bulmamizi saglar.

    char murat[]="Subat";

    printf("Karakter dizimizin boyutu %lu\n", strlen(murat));
    printf("Karakter dizimizin boyutu %lu", sizeof (murat));   //    \0 i da sayar.
    return 0;
}