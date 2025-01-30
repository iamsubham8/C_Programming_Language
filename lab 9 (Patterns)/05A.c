// Q5 Hollow Rhombus Star Pattern 

// ***** 
//  ***** 
//   ***** 
//    ***** 
//     ***** 
 
 

#include <stdio.h>

int main()
{ 
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        
        for(int k=1;k<=1;k++)
        printf("*");
        
        for(int l=1;l<5;l++)
        printf("*");
        
        printf("\n");
    }

    return 0;
}