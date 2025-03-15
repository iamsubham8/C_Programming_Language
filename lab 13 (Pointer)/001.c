/*sum of array elements using pointers*/
#include <stdio.h>
int main()
{
   int i, n, sum = 0;
   printf("Enter size of array : ");
   scanf("%d", &n);
   int arr[n];
   int *ptr;
   printf("Enter elements in the aaray : ");
   for (i = 0; i < n; i++){
      scanf("%d", ptr + i);
   }
   //calculate sum of elements
   for (i = 0; i < n; i++){
      sum = sum + *(ptr + i);
   }
   printf("Sum of all elements in an array is = %d", sum);
   return 0;
}