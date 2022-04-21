#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a,b;

    printf("Ilk sayinizi giriniz: ");
    scanf("%d",&a);

    printf("Ikinci sayinizi giriniz: ");
    scanf("%d",&b);

    if (a%2==1)
    {
        if (b%2==1)
        {
            printf("Iki sayiniz da tektir.\n");
        }
        else
        {
            printf("Ilk sayiniz tek, ikinci sayiniz cifttir.\n");
        }
    }
    else
    {
        if (b%2==1)
        {
            printf("Ilk sayiniz cift, ikinci sayiniz tektir.\n");
        }
        else
        {
            printf("Iki sayiniz da cifttir.\n");
        }
    }
    return 0;
}
