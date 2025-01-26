#include <stdio.h>
#define NULL 0
int main()
{
    if (printf("0") == NULL)
        printf("inside if block");
    else
        printf("inside else block");
    return 0;
}