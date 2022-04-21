#include "stdlib.h"
#include "stdio.h"
#define PI 3.14

int main()
{
    float alan,yaricap;

    printf("Lutfen dairenin yaricapini girin: ");
    scanf("%f",&yaricap);

    alan=yaricap*yaricap*PI;

    printf("Dairenin alani: %.2f",alan);

    return 0;
}