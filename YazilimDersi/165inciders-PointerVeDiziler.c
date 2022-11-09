#include "stdio.h"
#include "stdlib.h"

int main()
{
    char murat[100] = "danaci";
    char *p1;

    p1 = murat;

    printf("5. karakterim %c dir.\n",murat[4]);
    printf("4. karakterim %c dir.\n",*(p1+3));
    printf("2. karakterim %c dir.",*(p1+1));

    return 0;
}