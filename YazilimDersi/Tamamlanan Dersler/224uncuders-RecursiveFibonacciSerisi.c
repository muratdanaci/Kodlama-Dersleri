#include <stdio.h>
#include <stdlib.h>

// Fibonacci dizisi nedir: Fibonacci dizisi 0 ve 1 ile baslayan ve her sayisinin kendisinden once gelen iki sayinin toplanmasi ile elde edildigi sayi dizisidir.
// Buna gore klavyeden kac adet fibonacci sayisi uretilecegi bilgisi girilerek sayilarin uretilmesini saglayan C programini recursive fonksiyon kullanarak yaziniz.

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return (fibonacci(n-2)+fibonacci(n-1));
}

int main()
{
    int sayi, i;

    printf("Kac adet sayi uretilecek: ");
    scanf("%d",&sayi);

    for(i = 0; i < sayi; i++)
    {
        printf("%d\n",fibonacci(i));
    }

    return 0;
}
