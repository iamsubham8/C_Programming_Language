#include <stdio.h>
int main()
{
int n, count = 0;
printf("enter the size of array : ");
scanf("%d", &n);
int arr[n];
printf("enter the elements of arry\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("inversions in an array : \n");
for (int i = 0; i < n; i++)
{
for (int j = i + 1; j < n; j++)
{
if (arr[i] > arr[j])
{
printf("(%d,%d)\t", arr[i], arr[j]);
count++;
}
}
}
printf("\nnumber of inversions in array : %d", count);
return 0;
}
