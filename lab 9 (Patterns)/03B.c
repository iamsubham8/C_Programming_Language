// Pyramid Star Pattern 

// 1 
// 222 
// 33333 
// 4444444 
// 5555555555

#include <stdio.h>

int main()
{ 
	int i,j,l,k,m=1;
	for(i=1;i<=5;i++)
	{
	  for(j=i;j<5;j++)
        {
            printf(" ");
        }
	   
	    for(k=1;k<=i;k++)
	    {
	        printf("%d",m);
	    }
	    for(l=1;l<i;l++)
	    {
        printf("%d",m);
	    }
	    m++;
        
	    printf("\n");
	}
}