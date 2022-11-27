#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    // p = (int *)malloc(10 * sizeof(int));
    // p = (int *)malloc(40);
    p = (int *)calloc(10, sizeof(int));

    printf("%d\n",p[0]); // p[0] daki degeri basar, adresi degil!

    p[0] = 4;

    printf("%d\n", p[0]); // 4 degerini basar.
    free(p);

    return 0;
}