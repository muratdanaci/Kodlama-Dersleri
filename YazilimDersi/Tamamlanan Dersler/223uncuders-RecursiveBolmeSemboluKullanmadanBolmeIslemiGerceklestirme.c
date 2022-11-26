#include <stdlib.h>
#include <stdio.h>

// Klavyeden girilen iki tamsayinin bolumu (A/B) bolme sembolu kullanmadan gerceklestirilen C programini recursive fonksiyon yardimiyla yaziniz.

// Cozum: https://pythontutor.com/render.html#code=%23include%20%3Cstdlib.h%3E%0A%23include%20%3Cstdio.h%3E%0A%0Aint%20bolum%28int%20bolunen,%20int%20bolen%29%0A%7B%0A%20%20%20%20if%28bolen%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%0A%20%20%20%20else%20if%28bolunen%20-%20bolen%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%201%3B%0A%20%20%20%20%0A%20%20%20%20else%20if%28bolunen%20%3C%20bolen%29%0A%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20return%20%281%20%2B%20bolum%28bolunen%20-%20bolen,%20bolen%29%29%3B%0A%7D%0A%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20int%20a%20%3D%2070,%20b%20%3D%2030%3B%0A%0A%0A%0A%20%20%20%20printf%28%22Bolum%20%3D%20%25d%5Cn%22,bolum%28a,b%29%29%3B%0A%20%20%20%20printf%28%22Kalan%20%3D%20%25d%22,a-%28bolum%28a,b%29*b%29%29%3B%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=40&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

int bolum(int bolunen, int bolen)
{
    if(bolen == 0)
        return 0;
    
    else if(bolunen - bolen == 0)
        return 1;
    
    else if(bolunen < bolen)
        return 0;
   
    else
        return (1 + bolum(bolunen - bolen, bolen));
}


int main()
{
    int a, b;

    printf("Bolunen sayiyi giriniz: ");
    scanf("%d",&a);
    printf("Lutfen bolen sayiyi giriniz: ");
    scanf("%d",&b);

    printf("Bolum = %d\n",bolum(a,b));
    printf("Kalan = %d",a-(bolum(a,b)*b));
    
    return 0;
}
