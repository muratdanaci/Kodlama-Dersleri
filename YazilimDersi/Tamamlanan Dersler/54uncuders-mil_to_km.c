/*#include "stdlib.h"
#include "stdio.h"

int main()
{
    int mil,km;
    printf("Lutfen arabanin gittigi yolu mil cinsinden yaziniz: ");
    scanf("%d",&mil);

    km=1609;
    mil=mil*km;

    printf("Arac %dkm yol gitmistir.",mil);

    return 0;
}
*/
#include "stdio.h"
#include "stdlib.h"
#define MIL 1.609

int main()
{
    float mil,km;

    printf("Lutfen aracin gittigi yolu mil cinsinden giriniz: ");
    scanf("%f",&mil);

    km=mil*MIL;
    printf("Arac %fkm yol gitmistir.",km);

    return 0;

}