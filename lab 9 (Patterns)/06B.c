 
// Hollow Right Triangle Star Pattern 
 
// * 
// ** 
// * * 
// *  * 
// *****
#include <stdio.h>

int main()
{ 
	int i,j,n;
	printf("enter the limit = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        if(j==1 ||j==n ||j==i||i==n)
	        printf("*");
	        else 
	        printf(" ");
	        
	    }
	    printf("\n");
	}
}