#include<stdio.h>
int sum(int,int);
int main()
{
    int a=10,b=20,c;
    c=sum(a,b);
    printf("sum of a and b is %d",c);
    return 0;
}
int sum(int a,int b)

{
    return a+b;
}
