// print the numbers from 0ton,if is given by user

#include<stdio.h>
int  main()
{
    int n;
    printf("Enter the value :");
    scanf("%d",&n);

    int i=0; 
    while (i<=n)
    {
        printf("%d\n",i);
         i++;
    }
 
    return 0;
}
