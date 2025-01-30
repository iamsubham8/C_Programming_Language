/*Consider a number is input through keyboard. If number is between 0 to 10 then square the 
number. If number is between 11 to 20 then cube the number and for all other conditions number 
will be as it is. WAP for the same. Without using if statement.*/

#include <stdio.h>
int main()
{
  int n;
  printf("enter a number = ");
 scanf("%d",&n);
    switch(n)
    {
        case 0 ... 10:
            printf("the square of %d is %d",n,n*n);
            break;
        case 11 ... 20:      
            printf("the cube of %d is %d",n,n*n*n);
             break;
        default :
            printf("%d",n);
            break;
 
    }
    return 0;
}