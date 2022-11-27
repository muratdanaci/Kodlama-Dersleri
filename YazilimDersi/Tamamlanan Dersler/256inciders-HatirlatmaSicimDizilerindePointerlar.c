#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *c[10] = {"Bir","Iki","Uc"}; // '*' c[10][3] dizisindeki her bir karakteri yani 3 temsil eder.

    for(i = 0; i < 3; i++)
    {
        printf("String: %s\n",c[i]);
    }

    // *c[0] = ilk elemanin adresi
    // c[0] = ilk elemanin degeri
    
    return 0;
}