#include<stdio.h>
int main()
{
    int i;
    for (int i = 0; i < 5; i++)
    {
        if (i==3)
        {continue;   //Skip to next intreaction
          }
        printf("%d\n",i);
    }
    return 0;
}