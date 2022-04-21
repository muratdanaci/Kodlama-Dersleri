#include "stdlib.h"
#include "stdio.h"

int main()
{
    float x,alan;

    printf("Lutfen karenin kenar uzunlugunu giriniz: ");
    scanf("%f",&x);

    alan=x*x;

    printf("Karenin alani= %.2f",alan);

    return 0;
}