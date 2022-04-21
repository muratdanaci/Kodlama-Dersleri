#include <stdlib.h>
#include "stdio.h"
#define YOL 450

/* Bir arabanin Ankara'dan Istanbul(450km)'a varis zamanini saat cinsinden girgi olarak alan
 * ve arabanin ortalama hizini hesaplayan bir C programi yaziniz.
 */

int main()
{
    float ort_hiz,saat;

    printf("Lutfen Ankara'dan Istanbul'a kac saatte gittiginizi giriniz: ");
    scanf("%f",&saat);

    ort_hiz=YOL/saat;

    printf("Aracinizin ortalama hizi: %.2f",ort_hiz);

    return 0;
}