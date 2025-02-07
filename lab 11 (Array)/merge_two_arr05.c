// WAP to sort and merge two arrays and store it into third array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i,j, k, merge[100],temp;
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    
     for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(merge[j]<merge[i])
            {
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<k; i++)
    {
        printf("%d  ", merge[i]);
    }
    getch();
    return 0;
}