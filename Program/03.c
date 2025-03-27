#include<stdio.h>  
int main()    
{    
 int i,fact=1,n;    
 printf("Enter a number: ");    
  scanf("%d",&n);   
do 
  {
    printf("Factorial of %d\n",fact);
    fact=fact*i;
    i++;
 }
while (i<=n);

 
  
}   