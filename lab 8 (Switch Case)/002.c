/*Consider an integer is input through keyboard. If character is 1 then perform addition of two 
numbers, if 2 then perform subtraction of two numbers and for all others perform multiplication 
of two numbers. WAP for the same.*/


#include <stdio.h>
int main()
{
  int n,a,b;
  printf("Enter your choice \n press 1 for addition of two number  \npress 2 for substraction of two number\npress other for muliplication\n ");
  scanf("%d",&n);
  printf("enter a number = ");
  scanf("%d",&a);
  printf("enter a number = ");
  scanf("%d",&b);
    switch(n)
    
    {
        case 1:
            printf("addition of %d and %d is %d",a,b,a+b);
            break;
        case 2:      
            printf("substraction of %d and %d is %d",a,b,a-b);
             break;
        default : 
             printf("multipication of %d and %d is %d",a,b,a*b);
            break;
    }
    return 0;
}