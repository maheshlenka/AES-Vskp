#include <stdio.h>

void main()
{
    int a = 4;
    if ((a&(a-1))==0)
    {
        printf("the bit is power of 2  \n");
    }
    else 
    {
        printf("the bit is not power of 2\n");
    }
}