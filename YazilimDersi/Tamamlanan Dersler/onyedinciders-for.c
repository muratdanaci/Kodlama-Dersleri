#include "stdio.h"
#include "stdlib.h"

int main()
{
    /*        FOR KULLANIMI

    for (initialisation;condition;action)
    {
        statements
    }

              WHILE KULLANIMI

    initialisation;
    while (condition)
    {
        statements
        action
    }*/

    /*int i;

    for (i=0; i<10; i++)
    {
        printf("%d\n",i);
    }*/


    /*int i=0;
    while (i<10)
    {
        printf("%d\n",i);
        i++;
    }*/

    int i=0;

    do {
        printf("%d\n",i);
        i++;
    } while (i<10);
}