#include <stdlib.h>
#include <stdio.h>

int main()
{
   /* float sayi=3.14;
    printf("Sayiniz: %.2f\n",sayi);
    */
    int tamsayi=1;
    char karakter='c';
    float ondaliksayi1=3.15;
    double ondaliksayi2=789.1512;

    printf("int bellekte %lu byte kadar yer tutar.\n", sizeof(int));
    printf("char bellekte %lu byte kadar yer tutar.\n", sizeof(char));
    printf("float bellekte %lu byte kadar yer tutar.\n", sizeof(float));
    printf("double bellekte %lu byte kadar yer tutar.\n", sizeof(double));
    return(0);
}