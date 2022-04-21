#include "stdio.h"
#include "stdlib.h"

/* Asagida belirtilen islemleri yapan bir C programi yaziniz.
 * Toplama(+) veya cikarma(-) operatoru giriniz.
 * '+' operatoru icin 1/a+1/b; '-'operatoru icin 1/a-1/b islemlerinin sonucunu basit kesir
 * cinsinden bulunuz.
 * Girilen a veya b degerlerinden biri 0 ise islemin yapilamayacagini bir mesaj ile belirtiniz.
 * Ornek cikti Isleminiz seciniz(+,-): +
 * Iki tam sayi giriniz: 5 8
 * 1/5+1/8=13/40
 */

int main()
{
    int a,b,sonuc;
    char op;

    printf("Lutfen operator seciniz(+,-): ");
    scanf("%c",&op);
    printf("Lutfen iki adet tam sayi giriniz: ");
    scanf("%d%d",&a,&b);

    if (a==0 || b==0)
    {
        printf("Islem yapilamaz!\n");
    } else
    {
        printf("1/%d %c 1/%d = ",a,op,b);

        switch (op) {
            case '+':
                printf("%d/%d",a+b,a*b);
                break;
            case '-':
                printf("%d/%d",a-b,a*b);
                break;
            default:
                printf("Yanlis operator girdiniz!\n");
        }
    }

    return 0;
}