// Hollow Square Star Pattern 
 
  
// ***** 
// ** ** 
// * * * 
// ** ** 
// ***** 
 
#include <stdio.h>

int main()
{ 
	int i,j,n;
	printf("enter the limit = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        if(i==1 ||i==n  ||j==1 || j==n ||j==i ||j==n-i+1)
	        printf("*");
	        else if(j%2==0)  
	        printf(" ");
	        else
	        printf(" ");
	        
	    }
	    printf("\n");
	}
}