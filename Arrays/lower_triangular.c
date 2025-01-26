// . WAP lower triangular matrix.
#include<stdio.h>
int main ()
{
int a[3][3],i,j;
printf("Enter the nine number for matrix :");
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
  { scanf("%d",&a[i][j]); 
   }
}
printf("The matrix is\n");
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
  { printf("%d\t",a[i][j]); 
   }
printf("\n");
}
printf("The lower trangular :\n");
for(i=0;i<3;i++)
{
 for (j=0;j<3;j++) 
 
{if(i==j||i>j)    
  printf("%d\t",a[i][j]);}
  printf("\n");
}
 return 0;
}


