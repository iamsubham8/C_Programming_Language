// WAP to transpose a matrix.
#include<stdio.h>
int main ()
{
int a[3][3],i,j,trans[3][3];
printf("Enter the nine number for matrix :");
for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
{ scanf("%d",&a[i][j]);
}
printf("The matrix are \n");
for(i=0;i<=2;i++)
 {  for(j=0;j<=2;j++)
      {   printf("%d\t",a[i][j]);
          }
    printf("\n");
 }
for(i=0;i<=2;i++)
 {for(j=0;j<=2;j++)
{
 trans[i][j]=a[j][i];
}
 }
printf("The transpose of matrix is :\n");
for(i=0;i<=2;i++)
{   for(j=0;j<=2;j++)
    printf("%d\t",trans[i][j]);
     printf("\n");
    }


return 0;
}
