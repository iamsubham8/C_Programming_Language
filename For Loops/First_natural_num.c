//print the sum of first n natural numbers.

#include<stdio.h>
int  main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    
    int sum=0;
    for ( int i = 1; i <= n; i++)
    {   sum = sum+i;//sum+=i
    }
    printf("sum of first natural number %d \n",sum);
    
    return 0;
}
