#include<stdio.h>
int main()
{
     int x=3,y=4;
     
     if(x++>3||++y>4)
     printf("%d%d\n",x,y);
     else
     printf("All is not Well");
    return 0;


}