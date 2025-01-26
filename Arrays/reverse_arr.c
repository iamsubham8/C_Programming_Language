/*reverse a aaray */
#include <stdio.h>

void main()
{
   int i,n,a[100],temp;
   
    //    printf("\n\nRead n number of values in an array and display it in reverse order:\n");
    //    printf("------------------------------------------------------------------------\n");
   
   printf("Input the size of arr :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("%d\t",a[i]);
	 }
 
   printf("\n\nThe values store into the array in reverse are :\n");
  for (i = 0; i < n/2; i++)  
    {  
        temp = a[i]; 
        a[i] = a[n-1-i];  
        a[n-1-i] = temp;  
    }  
    
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}