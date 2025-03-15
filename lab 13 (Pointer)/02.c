// WAP to sort an array using pointers.
#include <stdio.h>
int main()
{
   int i,j,tmp,n;
 	printf(" Input the number of elements to store in the array : ");
    scanf("%d",&n);
   int a[n];
   int *ptr;
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	   scanf("%d",ptr+i);
	  }
	  for(i=0;i<n;i++)
	  printf("%d\t  ", *(ptr + i));
    
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(ptr+j) < *(ptr+i))
       {
      tmp = *(ptr+i);
      *(ptr+i) = *(ptr+j);
      *(ptr+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf("%d \t",*(ptr+i));
	  }         
	printf("\n");
}