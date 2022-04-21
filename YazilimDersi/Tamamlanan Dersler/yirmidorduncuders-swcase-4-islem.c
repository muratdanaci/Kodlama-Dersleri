#include "stdlib.h"
#include "stdio.h"

int main()
{
    float a,b;
    char op;

    printf("Lutfen islem giriniz: ");
    scanf("%c",&op);

    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%f%f",&a,&b);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f",a,b,a+b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",a,b,a-b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",a,b,a*b);
            break;
        case '/':
            printf("%.2f / %.2f = %f",a,b,a/b);
            break;
        default:
            printf("Hatali giris yaptiniz!");
            break;
    }
}