#include "stdio.h"
#include "stdlib.h"

/* Kullanicinin girdigi 2 tam sayidan, ilkinin ikincisi ile karsilastirip esit olup olmadigini,
 * eger esit degilse ikincisinden buyuk mu yoksa kucuk mu oldugunu ekrana bastiran bir program yazin.


int main ()
{
    int a,b;

    printf("Lutfen iki adet tam sayi giriniz: \n");
    scanf("%d%d",&a,&b);

    if (a==b)   //if(a!=b) birbirine esit degil.
    {
        printf("Iki sayiniz da birbirine esittir.\n");
    }
    if (a>b)
    {
        printf("Girdiginiz sayilar birbirine esit degil ve %d sayisi %d den buyuktur.\n",a,b);
    }
    if (b>a)
    {
        printf("Girdiginiz sayilar birbirine esit degil ve %d sayisi %d den buyuktur.\n",b,a);
    }
    return 0;
    */

    /* Yazdiginiz programi birinci sayinin ikincinin kati olup olmadigini ekrana bastiracak
     * sekilde degistirin. Modulo (%) operatorunu kullanabilirsiniz.
     */
int main()
{
    int a,b;

    printf("Lutfen iki adet tam sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if (a%b==0)
    {
        printf("Girdiginiz %d sayisi, %d nin katidir.\n",a,b);
    } else{
        printf("Girdiginiz %d sayisi, %d nin kati degildir.\n",a,b);
    }

    return 0;
}
