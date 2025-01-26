//print the table of the number input by user.

#include<stdio.h>
int  main()
{
    int n;                           
   printf("Enter the number of table :");
   scanf("%d",&n);

   for (int i = 1; i <=10; i++)           //(i*n).....n*1,n*2,n*3......n*10
   {
    printf("%d\n",n*i);
   }
    return 0;
}
