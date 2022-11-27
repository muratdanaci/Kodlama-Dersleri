#include <stdio.h>
#include <stdlib.h>

// Realloc fonksiyonu daha oncesinde bellekten ayrilmis olan alanimizda degisiklik yapmamizi saglar. Diger bir deyisle Malloc veya Calloc kullanarak bellekten ayirigimiz alan yetersizdir. Realloc dinamik olarak ayirdigimiz alani tekrardan guncellememizi saglar.
//  Eger bellekten yeterli alan ayrilmadiysa islem basarisiz olur ve geriye NULL dondurulmemesi icin Realloc kullanilir.

int main()
{
    int *ptr;
    int n = 5;
    int i;

    printf("Girdigimiz sayi degeri %d\n",n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Hafiza bolunmedi.\n");
        exit(0);
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            ptr[i] = i + 1;   //ptr = &ptr[0] //ptr[0] = 1
        }

        printf("Elemanlarim\n");

        for ( i = 0; i < n; i++)
        {
            printf("%d\n",ptr[i]);
        }
        n = 10;
        printf("\nGirdigimiz sayi degeri %d\n",n);

        ptr = realloc(ptr, n * sizeof(int));
        printf("Bellek basarili bir sekilde tekrar ayrildi.\n");

        for(i = 5; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        printf("Elemanlarim\n");
        for(i = 0; i < n; i++)
        {
            printf("%d\n",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}
