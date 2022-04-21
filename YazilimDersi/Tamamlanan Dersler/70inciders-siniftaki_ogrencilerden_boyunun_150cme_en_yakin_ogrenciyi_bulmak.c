#include "stdio.h"
#include "stdlib.h"
#define tam 150
/* Bir sinifta bulunan ogrencilerden hangisinin boyunun 150cm'ye yakin oldugunu hesaplayan bir
 * program yaziniz. Bu program ogrenci numaralarini ve santimetre cinsinden boy uzunluklarini
 * girdi olarak almalidir. Ogrenci numarasi negatif bir sayi girilinceye kadar veri girisi devam
 * etmelidir. Ornek cikti: Ogrenci no: 124 Ogrenci boy: 167 Ogrenci no: 7570 Ogrenci Boy: 154
 * Cikti: 7570 numarali ogrenci 154 cm boyuyla 150 cm ye en yakindir.
 */

int main()
{
    int no,boy,fark,minboy,minno;

    printf("Lutfen Ogrencinin Numarasini Giriniz: ");
    scanf("%d",&no);
    printf("Lutfen Ogrencinin Boyunu Giriniz: ");
    scanf("%d",&boy);

    minno=no;
    fark= abs(boy-tam);

    while (no>0)
    {
        printf("Lutfen Tekrar Ogrenci Numarasini Giriniz: ");
        scanf("%d",&no);
        printf("Lutfen Tekrar Ogrenci Boyunu Giriniz: ");
        scanf("%d",&boy);

        if (abs(boy-tam)<fark)
        {
            fark= abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }

    printf("%d numarali ogrenci %dcm boyuyla %dcm'ye en yakin ogrencidir.",minno,minboy,tam);

    return 0;
}