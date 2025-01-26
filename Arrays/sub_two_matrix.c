#include<stdio.h>
int main ()
{
int a[3][3],b[3][3],c[3][3],i,j,k,sum;
printf("Enter the nine number for first matrix :");
for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
{ scanf("%d",&a[i][j]);
}
printf("Enter the nine number for secound matrix :");
for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
{ scanf("%d",&b[i][j]);
}

for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
{
 c[i][j]=a[i][j]-b[i][j];
}

printf("The subtraction of two matrix is :\n");
for(i=0;i<=2;i++)
{   for(j=0;j<=2;j++)
    printf("%d\t",c[i][j]);
     printf("\n");
    }


return 0;
}
