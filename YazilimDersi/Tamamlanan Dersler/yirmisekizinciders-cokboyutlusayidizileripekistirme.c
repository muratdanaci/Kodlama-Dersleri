#include "stdlib.h"
#include "stdio.h"

int main()
{
    int mat[10][10];
    int i,j;

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%4d",mat[i][j]);
            }
        printf("\n");
        }
    return 0;
}