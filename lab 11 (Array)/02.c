//WAP to sort an array.

#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the size of array : ");
    scanf("%d", &n);
   
    int arr[n];
    printf("Enter %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
	}

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
	      
}
