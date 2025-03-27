#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);

    temp=b;
    b=a;
    a=temp;

    
    printf("a=%d b=%d",a,b);
    return 0;

}