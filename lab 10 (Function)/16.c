// 16. WAP to displaying numbers from 1 to n.

#include<stdio.h>
int display(int);
int main()
{
    int limit;
    printf("enter the limit  : ");
    scanf("%d",&limit);
    display(limit);
    return 0;
}   
int display(int n) 
{
	if(n)
		display(n-1);
	else
	return 0;
	printf("%d\n",n);
 		
}