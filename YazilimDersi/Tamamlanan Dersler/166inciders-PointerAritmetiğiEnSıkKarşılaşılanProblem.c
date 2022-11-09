#include "stdio.h"
#include "stdlib.h"

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;

    printf("%d\n", ptr); //466299200
    printf("%d", ptr+1); //466299204

    //ptr++ ile (ptr+1) birbirine esittir.

    return 0;
}