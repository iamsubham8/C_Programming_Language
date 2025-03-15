/*WAP to find sum of all the elements in an array using pointers.*/
#include <stdio.h>
int main()
{
   int i, n, sum = 0;
   printf("Enter size of array : ");
   scanf("%d", &n);
   
   int arr[n];
   printf("Enter elements in the aaray : ");
   for (i = 0; i < n; i++){
      scanf("%d",&arr[i]);
   }

   //calculate sum of elements
   int *ptr=arr;
   for (i = 0; i < n; i++){
      sum = sum + *(arr+ i);
   }
   printf("Sum of all elements in an array is = %d", sum);
   return 0;
}