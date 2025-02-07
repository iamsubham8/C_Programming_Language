// . WAP to check whether matrices is symmetric or not.
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

for (i=0;i<3;i++)
{
 for (j=0;j<3;j++) 
 
if(a[i][j]==a[j][i])    
   {  printf("\nThe matrices is symmetric");
     }
else
    { printf("\nThe matrices is Not symmetric");
        }
}
 return 0;
}


