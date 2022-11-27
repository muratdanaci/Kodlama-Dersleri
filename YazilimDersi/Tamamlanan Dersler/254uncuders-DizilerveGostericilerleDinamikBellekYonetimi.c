#include <stdio.h>
#include <stdlib.h>

// Diziler de aslinda bir gostericidir(pointer). Bir diziye gosterici gibi erismek veya bir gostericiye bir dizi gibi erismek mumkundur. Diziler, ozel bir soz dizimi ve erisim yontemleri bulunan birer gostericidir.

int main()
{
    int a[10];
    int *p = (int *)calloc(10,sizeof(int));

    a[3] = 5;
    p[3] = 5;

    printf("%d\n",a[3]);
    printf("%d\n",p[3]);

    free(p);

// Burada a ile p ayni seydir.

// a = &a[0]
// p = bellekteki ilk elemanin adresini tutar
    return 0;
}