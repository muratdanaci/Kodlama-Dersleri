#include <stdio.h>
#include <stdlib.h>

// Free fonksiyonu malloc ve calloc fonksiyonlariyla hafizadan ayrilan yeri serbest birakmamiza yarar. 
// Gereksiz bellek kullaniminin onune gecer.
// Bellekte ayrilan alan kullanim bittikten sonra kesinlikle serbest birakilmali. Aksi taktirde programin calistigi makina bellegi gereksiz yere dolmus olur. #memory leak (bellek sizintisi)

int main()
{
    int *ptr, *ptr1;
    int n = 5;
    int i;

    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n, sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Bellekten ayirma islemi basarisiz.\n");
        exit(0); // programin sonlanmasini saglayacak.
    }
    else
    {
        printf("Malloc kullanarak basarili bir sekilde ayirma islemini yaptiniz.\n");
        free(ptr);
        printf("Malloc icin ayrilan yer serbest birakildi.\n\n");

        printf("Calloc kullanarak basarili bir sekilde ayirma islemini yaptiniz.\n");
        free(ptr1);
        printf("Calloc icin ayrilan yer serbest birakildi.\n");
    }
    
    return 0;
}