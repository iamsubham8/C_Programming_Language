/*. Write a program to input two matrices from the user. Perform the following functions 
on the matrices :
a) Addition.
b) Subtraction.
c) Multiplication.
Make the program menu driven with appropriate error handling*/

#include<stdio.h>
int main ()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum,n;
    printf("Enter\n1 for Addition\n2 for subtraction\n3 for multiplication ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:  
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
        c[i][j]=a[i][j]+b[i][j];
        }

        printf("The addition of two matrix is :\n");
        for(i=0;i<=2;i++)
        {  for(j=0;j<=2;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
        }
        break;

        
    case 2:
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
        break;
        
    case 3:
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
            sum=0;
         for(k=0;k<=2;k++)
        sum=sum+a[i][k]*b[k][j];
        c[i][j]=sum;
        }

        for(i=0;i<=2;i++)
        {for(j=0;j<=2;j++)
        printf("%d ",c[i][j]);
        printf("\n");}
        break;

     default:
        printf("your enter the wrong number");
        break;
        }
    
    }

 
