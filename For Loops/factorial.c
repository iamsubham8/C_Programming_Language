// print the odd numbers from 5 to 50

#include<stdio.h>
int main()
{ 
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
        
    printf("the factorial of number is : %d\n",fact);
    return 0;
}