#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin faktoriyelinin hesaplanmasini saglayan C programini recursive fonksiyon yardimiyla yaziniz.

// Cozum: https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Aint%20fakt%28int%20sayi%29%0A%7B%0A%20%20%20%20int%20sonuc%3B%0A%0A%20%20%20%20if%28sayi%20!%3D%200%29%0A%20%20%20%20%20%20%20%20sonuc%20%3D%20sayi%20*%20fakt%28sayi-1%29%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20sonuc%20%3D%201%3B%0A%0A%20%20%20%20return%20sonuc%3B%0A%0A%7D%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20n%3D5%3B%0A%0A%20%20%20%20printf%28%22%25d!%20%3D%20%25d%22,n,fakt%28n%29%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=33&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

int fakt(int sayi)
{
    int sonuc;

    if(sayi != 0)
        sonuc = sayi * fakt(sayi-1);
    else
        sonuc = 1;

    return sonuc;

}

int main()
{
    int n;

    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&n);

    printf("%d! = %d",n,fakt(n));

    return 0;
}