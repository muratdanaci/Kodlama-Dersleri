#include <stdio.h>
#include "string.h"

/* Klavyeden girilen bir kelimenin harflerini bir harf arttirarak asagidaki gibi yazan program.
 * Kelime giriniz: murat
 * >> m
 *    m u
 *    m u r
 *    m u r a
 *    m u r a t
 */

int main()
{
    char kelime[100];
    int i=0,j=0;

    printf("Lutfen kelime giriniz: ");
    gets(kelime);

    while (i<strlen(kelime))
    {
        j=0;
        while (j<=i)
        {
            printf("%c ",kelime[j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}