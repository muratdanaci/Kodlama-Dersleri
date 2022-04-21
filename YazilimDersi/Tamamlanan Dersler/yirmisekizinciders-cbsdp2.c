#include "stdlib.h"
#include "stdio.h"

int main()
{
    int dizi1[3][4] = {{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int dizi2[3][4] = {{1,8,5,7},{1,2,4,6},{3,7,3,1}};
    int toplam[3][4];
    int i,j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            toplam[i][j] = dizi1[i][j] + dizi2[i][j];
        }
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}