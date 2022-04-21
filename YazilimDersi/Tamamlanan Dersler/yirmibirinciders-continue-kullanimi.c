#include "stdlib.h"
#include "stdio.h"

int main()
{
    //      CONTINUE KULLANIMI (ATLAMA)
   int i;

    for (i = 0; i < 10; ++i) {
        if (i==6)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
