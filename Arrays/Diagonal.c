// . sum of diagonal matrix.
#include<stdio.h>
int main ()
{
int a[3][3],i,j,sum=0;
printf("Enter the nine number for matrix :");
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
  { scanf("%d",&a[i][j]); 
   }
}
for (i=0;i<3;i++)
{
  for (j=0;j<3;j++) 
   {  if (i==j || i+j==2)
    sum+=a[i][j];
   }
}   
printf("the sum of diagonal element of array is %d",sum);

 return 0;
}


