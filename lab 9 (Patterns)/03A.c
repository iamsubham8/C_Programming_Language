
// Hollow Square Star Pattern with Diagonal 
 
//     ***** 
//    ***** 
//   ***** 
//  ***** 
// ***** 

#include <stdio.h>

int main()
{ 
int i,j,l,n;
printf("enter the limit :");
scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for( j=i;j<n;j++)
            printf(" ");
    
        for(l=1;l<=n;l++)
        printf("*");
        
        printf("\n");
    }

    return 0;
}