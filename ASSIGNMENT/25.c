/*Q25. Write a C-language program to print all prime numbers and their positions
in the given array using a pointer.*/

#include <stdio.h>
int main()
{
int n;
printf("enter the size of array : ");
scanf("%d", &n);
int arr[n];

int *ptr = arr;
printf("enter the elements of arry\n");
for (int i = 0; i < n; i++)
{
scanf("%d", (ptr + i));
}
printf("all prime numbers and their positions in the given array :-\n\n");
for (int i = 0; i < n; i++)
{
if (*(ptr + i) % 2 == 0)
{
printf("prime number = %d\nposition = %d \n\n", *(ptr + i), i);
}
}
return 0;
}
