#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *c[10] = {"Bir","Iki","Uc"}; 

    printf("%s\n",c[0]);
    printf("%d",*c[0]);
    
    return 0;
}