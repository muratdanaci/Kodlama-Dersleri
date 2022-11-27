#include <stdio.h>
#include <stdlib.h>

/*
int m[3][4];

int **m=(int **)malloc(3 * sizeof(int *));
m[i] = (int *)malloc(4 * sizeof(int));
*/

/*
 -Ilki tamsayi pointerin pointeri icin yer ayirmaktadir.
 -Burada ayrilan veri tipi int degil int* biciminde matrisin her satirini temsil eden bir tamsayi pointeridir.
*/
/*
ikincisi her satirin kendi elemanlari icin yer ayirma int tipi icin olur.
*/

// Baska bir deyisle once 3 adet tamsayi gostericisi icin yer ayrilir. Sonra bu gostericinin 3 elemani olan gostericiler icin de 4 adet tamsayi yeri ayrilir.

/*
    int m[3][4];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            m[i][j] = i * 10 + j+1;
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
    return 0;
*/

int main()
{
    int i, j;
    int **m=(int **)malloc(3*sizeof(int *)); // satir icin
    
    for(i = 0; i < 3; i++)
    {
        m[i] = (int *)malloc(4*sizeof(int)); // satirdaki elemanlar icin
        for(j = 0; j < 4; j++)
        {
            m[i][j] = i * 10 + j + 1;
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
    free(m);
    
    return 0;
}