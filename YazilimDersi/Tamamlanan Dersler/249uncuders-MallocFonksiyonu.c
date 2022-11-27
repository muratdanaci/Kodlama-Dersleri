#include <stdio.h>
#include <stdlib.h>

// int *ptr = (int *)malloc(5*sizeof(int));

// Malloc hafizadan belirli bir yer ayirmamiza yarar. Geriye void tipinde bir pointer dondurur. Voidin tipi olmadigindan istedigimiz degiskene Cast islemi yapabiliriz.
// Eger yeterli alan ayrilmadiysa geriye NULL pointer dondurur.

int main()
{
    int *ptr;
    int n = 5;
    int i;

    printf("Girdigimiz sayi degeri %d\n",n);

    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL)
        printf("Hafiza bolunmedi.\n");

    else
    {
        for(i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        printf("Elemanlarim\n");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}