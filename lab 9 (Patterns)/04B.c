// Inverted Right Triangle Star Pattern 
// a b c d e 
// f g h i 
// j k l 
// m n 
// o 

#include <stdio.h>

int main()
{ 
	int i,j;
	char c='a';
	for(i=5;i>=1;i--)
	{
	  for(j=1;j>5;j--)
        {
            printf(" ");
        }
	   
	    for(j=1;j<=i;j++)
	    {
	        printf("%c ",c++);
	    }
	    printf("\n");               
	}
}