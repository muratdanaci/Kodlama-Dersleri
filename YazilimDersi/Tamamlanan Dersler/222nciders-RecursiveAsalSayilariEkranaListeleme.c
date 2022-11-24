#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N pozitif tamsayisina kadar olan asal sayilarin ekrana listelenmesini saglayan C programini recursive fonksiyon yardimiyla yaziniz.

int asalmi(int sayi, int i)
{
    if(i == 1)
    {
        return 1;
    }
    else if(sayi % i == 0)
    {
        return 0;
    }
    else
    {
        asalmi(sayi, i-1);
    }
    return asalmi;
}

int main()
{
    int n, i, kontrol;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&n);

    for(i = 2; i <= n; i++)
    {
        kontrol = asalmi(i, i/2);
        if(kontrol == 1)
            printf("%d\n", i);
    }

    return 0;    
}