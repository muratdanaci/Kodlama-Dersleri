#include <stdio.h>
#include <stdlib.h>

// int *ptr = (int *)calloc(5,sizeof(int)); #Kac birim icin ayirilacagini (5) yaziyoruz.
// float *ptr = (float *)calloc(5,sizeof(float));

int main()
{
    int *ptr;
    int n = 5;
    int i;

    printf("Girdigimiz sayi degeri %d\n",n);

    ptr = (int *)calloc(n, sizeof(int)); // malloctan calloca donuyor n * yerine n, koyuluyor.

    if (ptr == NULL)
        printf("Hafiza bolunmedi.\n");

    else
    {
        for(i = 0; i < n; i++)
        {
            ptr[i] = i + 1;   //ptr = &ptr[0] //ptr[0] = 1
        }

        printf("Elemanlarim\n");

        for ( i = 0; i < n; i++) //n+5 yaparsak 5 kadar yazdirdiktan sonra garbage value gelir.
        {
            printf("%d\n",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}

/*
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
*/