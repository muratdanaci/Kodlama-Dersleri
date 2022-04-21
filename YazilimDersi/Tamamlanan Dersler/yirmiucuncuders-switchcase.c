#include "stdio.h"
#include "stdlib.h"

int main()
{
    int day;
    printf("Lutfen bir gun giriniz: ");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("Pazartesi");
            break;
        case 2:
            printf("Sali");
            break;
        case 3:
            printf("Carsamba");
            break;
        case 4:
            printf("Persembe");
            break;
        case 5:
            printf("Cuma");
            break;
        case 6:
            printf("Cumartesi");
            break;
        case 7:
            printf("Pazar");
            break;
        default:
            printf("Gecersiz gun");
            break;
    }
     /*
    if (day==1)
    {
        printf("Pazartesi");
    } else if (day==2)
    {
        printf("Sali");
    } else if (day==3)
    {
        printf("Carsamba");
    } else if (day==4)
    {
        printf("Persembe");
    } else if (day==5)
    {
        printf("Cuma");
    } else if (day==6)
    {
        printf("Cumartesi");
    } else if (day==7)
    {
        printf("Pazar");
    } else{
        printf("Gecersiz gun.");
    } */

}
