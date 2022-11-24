#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen iki tamsayinin carpimini carpim sembolu kullanmadan gerceklestiren C programini recursive fonksiyon yardimiyla yaziniz.

// Cozum: https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Aint%20carpim%28int%20sayi1,%20int%20sayi2%29%0A%7B%0A%20%20%20%20int%20sonuc%3B%0A%0A%20%20%20%20if%28sayi2%20%3D%3D%201%29%0A%20%20%20%20%20%20%20%20sonuc%20%3D%20sayi1%3B%0A%20%20%20%20else%7B%0A%20%20%20%20%20%20%20%20sonuc%20%3D%20sayi1%20%2B%20carpim%28sayi1,sayi2-1%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20return%20sonuc%3B%0A%0A%7D%0A%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%20%3D%203,%20b%20%3D%205%3B%0A%0A%20%20%20%20printf%28%22%25d%20*%20%25d%20%3D%20%25d%22,a,b,carpim%28a,b%29%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=28&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

int carpim(int sayi1, int sayi2)
{
    int sonuc;

    if(sayi2 == 1)
        sonuc = sayi1;
    else{
        sonuc = sayi1 + carpim(sayi1,sayi2-1);
    }

    return sonuc;

}


int main()
{
    int a, b;

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&a,&b);

    printf("%d * %d = %d",a,b,carpim(a,b));

    return 0;
}