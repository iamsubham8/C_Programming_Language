#include<stdio.h>
int fact(int);
int main()
{
int n;
printf("Enter the number for factorial :");
scanf("%d",&n);
if (n<=0)
{
 printf("Invalid Input");
}
printf("Factorial of %d is :",n,fact(n));
return 0;
}
int fact(int n)
{
    if (n==1)
    return 1;
else
   {
    return (n*fact(n-1));
   } 
}
