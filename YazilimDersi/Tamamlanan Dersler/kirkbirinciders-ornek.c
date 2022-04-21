#include "stdio.h"
#include "stdlib.h"

/* int ussunu_al(int x, int y) fonksiyonunu yaziniz. Fonksiyon x ve y degerlerini
 * parametre olarak aliyor ve x uzeri y degerini hesaplayip sonucu donduruyor.
 * x=4 ve y=5 oldugunda sonuc olarak 1024 dondurmesi gerekiyor ve sonucu 4 uzeri 5=1024
 * seklinde ekrana yazdiriniz.

 * Ayni soruyu bir de degiskenin adresiyle islem yaparak cozunuz. Bu durumda fonsiyonun
 * basligi void ussunu_al(int x, int y, int *r) seklinde olmalidir.
 */

/*
//1.
int ussunu_al(int a, int b)
{
    int i,sonucum=1;
    for (int i = 0; i < b ; ++i) {
        sonucum=sonucum*a;
    }
    return sonucum;
}


int main()
{
    int x=4,y=5,sonuc;
    sonuc=ussunu_al(x,y);

    printf("%d",sonuc);
    return 0;
}

*/
//return,donus degeri ve esittir olmayacak.

void ussunu_al(int a, int b, int *murat)
{
    int x;
    *murat=1;
    for (int i = 0; i < b; ++i) {
        *murat=*murat*a;
    }
}


int main()
{
    int x=4,y=5,sonuc;
    ussunu_al(x,y,&sonuc);
    printf("%d",sonuc);

    return 0;
}