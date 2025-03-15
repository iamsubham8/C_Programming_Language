/* WAP to that creates dynamic array and find greates
 element in an array using pointers.*/
#include<stdio.h>
#include<string.h>
int main ()
{
	int n,i;
	printf("enter size = ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
		
	
	for(i=0;i<n;i++)
		if(*(ptr+0) < *(ptr+i))
		*(ptr+0)=*(ptr+i);
	
	printf("largest element = %d",*(ptr+0));
}