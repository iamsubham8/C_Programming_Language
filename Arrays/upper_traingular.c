// . WAP to find the upper triangular 
#include<stdio.h>
int main ()
{
int a[3][3],i,j;
printf("Enter the nine number for matrix :\n");
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
printf("The upper triangular is \n");
for(i=0;i<3;i++)
{
 for (j=0;j<3;j++) 
 
{if(i<=j)    
  printf("%d\t",a[i][j]);
  else 
  printf("\t");
}
  printf("\n");
}
 return 0;
}


