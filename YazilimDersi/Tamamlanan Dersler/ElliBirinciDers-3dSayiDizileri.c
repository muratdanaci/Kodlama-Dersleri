#include "stdio.h"
#include "stdlib.h"

/*Kullanicidan 2 adet 3e 2lik matris degerlerini aliniz bunlari bir 3 boyutlu sayi dizisine atayiniz hangi indexte hangi deger var bunlari consola bastiriniz.
*/

int main()
{
    int murat[2][3][2];
    int i, j, k;

    printf("Lutfen 12 adet deger giriniz: \n");

    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 2; k++)
            {
                scanf("%d",&murat[i][j][k]);
            }
            
        }
        
    }
    
    printf("Girdiginiz degerler \n");

    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 2; k++)
            {
                printf("murat[%d][%d][%d] = %d\n",i, j, k, murat[i][j][k]);
            }
            
        }
        
    }    

    return 0;
}