#include <stdio.h>
int fact(int n);

int main()
{
	int n,factorial;
 
  	printf("Enter a number to calculate it's factorial : ");
  	scanf("%d",&n);
    printf("Factorial of the num(%d) = %d",n,fact(n));
}

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}