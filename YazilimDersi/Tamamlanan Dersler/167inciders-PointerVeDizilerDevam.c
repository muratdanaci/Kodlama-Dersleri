#include "stdio.h"
#include "stdlib.h"

/*    int t[10]
    t ve &t[0] ayni seydir.
*/
// int tab[] ve int *tab aynidir. cunku dizimin ilk elemaninin adresi ayni zamanda dizimin de adresidir.

int main()
{
    int t[100];
    int i;
    int *pt;

    for(pt = t; pt < t+100; pt++)
    {
        *pt = 0;
        printf("%d\n",*pt);
    }


/*
    for(i = 0; i < 100; i++)
    {
        t[i] = 0;
        printf("%d\n",t[i]);
    }
*/
    return 0;
}