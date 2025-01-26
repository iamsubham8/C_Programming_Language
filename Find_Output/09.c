#include <stdio.h>
int main()
{
    int i = 1, j = 0;
    if (i-- == j)
        printf("i = %d", --i);
    else
        printf("j = %d", ++j);
    return 0;
}