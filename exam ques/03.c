#include<stdio.h>
int main()
{
    int x=3,y=2,z;
    
    z=++x*x++;
    printf("x=%d y=%d z=%d",x,y,z);
        
    return 0;


}