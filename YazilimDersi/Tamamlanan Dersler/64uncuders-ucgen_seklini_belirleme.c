#include "stdio.h"
#include "stdlib.h"

/* Bir ucgenin acilarini girdi olarak alan ve bu ucgenin esitkenar, ikizkenar veya cesitkenar
 * ucgen olup olmadigini belirleyen bir C programi yazin. Acilarin ucgen olusturup olusturmadi-
 * gini kontrol ediniz. Ornek cikti-> Uc aci giriniz: 30 45 105 >> Bu bir cesitkenar ucgendir.
 */

int main()
{
    int aci1,aci2,aci3;

    printf("Lutfen 1. aciyi giriniz: ");
    scanf("%d",&aci1);
    printf("Lutfen 2. aciyi giriniz: ");
    scanf("%d",&aci2);
    printf("Lutfen 3. aciyi giriniz: ");
    scanf("%d",&aci3);

    if (aci1+aci2+aci3==180)
    {
        if (aci1==60 && aci2==60 && aci3==60)
        {
            printf("Bu bir eskenar ucgendir.");
        }
        else if (aci1==aci2 || aci1==aci3 || aci2==aci3)
        {
            printf("Bu bir ikizkenar ucgendir.");
        } else
        {
            printf("Bu bir cesitkenar ucgendir.");
        }
    } else
    {
        printf("Bu olculer ucgen olusturmaz.");
    }
    return 0;
}