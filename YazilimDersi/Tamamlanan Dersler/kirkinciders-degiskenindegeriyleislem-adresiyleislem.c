#include "stdlib.h"
#include "stdio.h"

/*
int kare(int murat)
{
    int sonuc=murat*murat;
    return sonuc;
}


int main()
{
    int x=4,karesi;

    karesi=kare(x);
    printf("%d",karesi);

    return 0;
*/

void kare(int *sonuc,int *murat)
{
    *sonuc=*murat**murat;
}



int main()
{
    int x=4,karesi,sonucum;

    kare(&sonucum,&x);
    printf("%d",sonucum);
    return 0;
}