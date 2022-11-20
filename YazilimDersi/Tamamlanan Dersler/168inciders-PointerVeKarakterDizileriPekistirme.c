#include "stdio.h"
#include "stdlib.h"

int main()
{
    char isim[20] = "merhaba"; //{'m', 'e', 'r', 'h', 'a', 'b', 'a', '\0'}
    char *murat;

    murat = isim;

    printf("%c",*(murat+2));

    return 0;
}