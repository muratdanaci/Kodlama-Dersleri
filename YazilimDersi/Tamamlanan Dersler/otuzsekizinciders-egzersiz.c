#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    /*
     *Iki adet karakter dizisi olusturun:birincisi "bonne" ikincisi "soiree"
     * strcpy ve strncpy kullanarak iki karakter dizisini birlestirin
     * elde ettigin karakter dizisini ekrana bastirin

    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);

    printf("%s",sonuc);

    */

    /* Iki boyutlu bir dizi olusturun
     * Dizinin elemanlari: bir, iki, uc, dort, bes
     * Dizinin 4.elemaninin 3.karakterini ekrana bastirin.
    */

    char murat[100][100]={"bir","iki","uc","dort","bes"};     //{'b','i','r','\0'};

    printf("Dizimin dorduncu elemani %s\n",murat[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri %c",murat[3][2]);


    return 0;
}