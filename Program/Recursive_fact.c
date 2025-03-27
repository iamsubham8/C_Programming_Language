#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter a Number to calculate factorial : ");
    scanf("%d", &num);
 
    // Negative Number check
    if(num <= 0)
    {
        printf("Error: Invalid Input, Try again\n");
        return 0;
    }
 
    // call the fact() function
    printf("Factorial of %d is : %d \n", num, fact(num));
 
    return 0;
}
 
int fact(int num)
{
    // base condition
    if(num == 1)
        return 1;
    else
    {
        // recursive call with 'num-1'
        return ( num * fact(num-1));
    }
}