#include "stdlib.h"
#include "stdio.h"

int main()
{
    int elma = 10;

    while (elma > 0)
    {
        printf("Cebimde %d tane elma var\n",elma);
        elma -= 1; //elma = elma - 1;
    }
    printf("Cebimde hic elma kalmadi.");
    return 0;
}