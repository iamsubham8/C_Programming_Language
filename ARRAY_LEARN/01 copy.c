#include <stdio.h>
int main()
{
    int size,i;
    printf("enter the size of array :");
    scanf("%u",&size);

    int arr[size];
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}