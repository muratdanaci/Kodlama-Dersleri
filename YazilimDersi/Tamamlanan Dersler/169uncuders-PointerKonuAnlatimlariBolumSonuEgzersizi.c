#include "stdio.h"
#include "stdlib.h"

/* Klavyeden girilen bir kelimenin pallindrom(tersten okundugu zaman da ayni olan kelimeler 'kabak' gibi) olup olmadigini kontrol eden programi yaziniz.
*/

int main()
{
    char cumle[100];
    char *p1, *p2;
    int kontrol;

    printf("Lutfen maksimum 100 karakterli bir cumle giriniz\n");
    gets(cumle);

    for(p2 = cumle; *p2; p2++);
    
    p2--;

    kontrol = 1;
    for(p1 = cumle; kontrol && p1 < p2; p1++, p2--)
    {
        if (*p1 != *p2)
        {
            kontrol = 0;
        }
        
    }

    if(kontrol)
        printf("Girilen %s bir palendromdur", cumle);
    else
        printf("Girilen %s bir palendrom degildir.", cumle);

    return 0;
}