#include "stdlib.h"
#include "stdio.h"

int main()
{
    int murat[10];
    int i;

    /*
     int murat[5] = {1,3,5,7,9};

     printf("%d",murat[0])  ---> 1
     */

    for (i = 0; i < 10; ++i) {
        murat[i] = 2 * i;
        printf("%d\n",murat[i]);
    }
    return 0;
}