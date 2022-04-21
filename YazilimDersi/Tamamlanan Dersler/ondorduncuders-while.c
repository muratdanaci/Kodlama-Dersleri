#include "stdlib.h"
#include "stdio.h"

int main()
{
    int a=42;
    while (a<100)
    {
        printf("%d\n",a);
        a=a+10;
    }
    return 0;
}