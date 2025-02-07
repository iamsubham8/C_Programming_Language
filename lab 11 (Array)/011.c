// WAP to transpose a matrix.
#include<stdio.h>
int main ()
{
int a[3][3],i,j,trans[3][3],s=0;
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
for(i=0;i<=2;i++)
 {for(j=0;j<=2;j++)

 if (trans[i][j]!=a[i][j])
 s++;
 break;

 }
if(s==0)
  {  printf("\nThe matrices is symmetric");
     }
else
    { printf("\nThe matrices is Not symmetric");
        }

return 0;
}
