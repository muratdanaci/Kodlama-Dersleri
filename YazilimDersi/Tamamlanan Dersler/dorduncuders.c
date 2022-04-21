#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    {
        int x=2;
        printf("%d",x);
    }
    return (0);
}