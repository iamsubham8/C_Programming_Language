#include<stdio.h>
int swap(int x,int y);
int main()
{   
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping X = %d,Y = %d",a,b);
    swap(a,b);

return 0;
}
int swap(int x,int y)
{
    int temp=y;
        y=x;
        x=temp;
        printf("\nAfter swapping X = %d,Y = %d",x,y);
}