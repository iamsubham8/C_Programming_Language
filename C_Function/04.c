#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the secound number :");
    scanf("%d",&b);
    
    int s=sum(a,b);
    printf("The sum  is %d",s);  
}

int sum(int a, int b)
{
    return a+b;
}