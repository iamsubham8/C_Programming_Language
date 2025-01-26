#include <stdio.h>
int main()
{
    int i = 2;
    if (i == (1, 2))
        printf("Hello");
    else
        printf("Ok");
    return 0;
}