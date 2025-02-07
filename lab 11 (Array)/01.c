// WAP to find sum of all the elements in an array.

#include <stdio.h>
int main()
{
    int size, i, sum = 0;
    printf("Enter the size of arr :");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the %d element\n", size);
    for (i = 1; i <= size; i++)
    {
        scanf("%u", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of the all elements : %d", sum);
}