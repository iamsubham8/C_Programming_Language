//print to all number 1 to 10, except 6 
#include<stdio.h>
int main()
{
    int i;
    for (int i = 0; i <=10; i++)
    {
        if (i==6)
        {continue;   //Skip to next intreaction
          }
        printf("%d\n",i);
    }
    return 0;
}