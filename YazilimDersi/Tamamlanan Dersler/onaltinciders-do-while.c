#include "stdlib.h"
#include "stdio.h"

int main()
{
    int elma = 10;

    do {
        printf("Cebimde %d tane elma var.\n",elma);
        elma -= 1;
    } while (elma > 0);
    printf("Cebimde hic elma yok.");
}