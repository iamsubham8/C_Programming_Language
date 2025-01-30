//  Rhombus Star Pattern 
 
//     ***** 
//    *   * 
//   *   * 
//  *   * 
// ***** 
 

#include <stdio.h>

int main()
{ 
int i,j,l,n;
printf("Enter the rows :");
scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for( j=i;j<n;j++)
            printf(" ");
         for(l=1;l<=n;l++)
         {
          if(i==1 ||i==n ||l==1 ||l==n)
            printf("*");
            else 
            printf(" ");
         }
        printf("\n");
    }

    return 0;
}