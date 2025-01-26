#include<stdio.h>
int main()
{
    int x=3;
    int y;
    y=++x*x++;
    printf("x=%d y=%d",x,y);
        
    return 0;


}