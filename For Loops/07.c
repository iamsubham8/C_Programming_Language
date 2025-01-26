//print the sum of first n natural numbers.also print the reverse number of natural number.

#include<stdio.h>
int  main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    
    int i,j,sum=0;
    for ( i = 1,j=n; i <= n&&j>=1; i++,j--)
    {   sum = sum+i;//sum+=i
     printf(" %d\n",j);
     }
    
    printf("sum of first natural number : %d \n",sum);

    return 0;
}
