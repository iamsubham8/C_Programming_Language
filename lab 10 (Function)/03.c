/* Write a program to find the greatest common divisor of two given numbers */

#include<stdio.h>
int gcd(int a,int b) ;
int main() 
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", & a, & b);
    printf("Greatest Common Divisor is %d", gcd(a, b));
 
    return 0;
 }
int gcd(int a, int b)
{
  int hcf;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}