#include <stdio.h>
#include <stdlib.h>

// Klavyeden 0 degeri girilinceye kadar kullanicidan surekli olarak sayi girilmesini isteyen C programini recursive fonksiyon yardimiyla yaziniz.

void sayiiste()
{
    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi == 0)
    {
        printf("Dogru sayiyi buldunuz!");
        exit(0);
    }
    else
        sayiiste();
    
}


int main()
{
    sayiiste();
    
    return 0;
}