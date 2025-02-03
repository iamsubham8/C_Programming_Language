// WAP to determine whether a number is ‘even’ or ‘odd’.

#include <stdio.h>
int checkEvenOdd(int n);
int main()
{
int n;
printf("Enter The Number = ");
scanf("%d", &n);
checkEvenOdd(n);
}

int checkEvenOdd(int n)
{
if(n%2==0)
{
printf("It is Even\n");
}
else
{
printf("It is odd\n");
}
}