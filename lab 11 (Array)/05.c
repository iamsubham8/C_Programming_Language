//WAP to sort and merge two arrays and store it into third array.

#include <stdio.h>
int main()
{
   
    int arr1[5]={2,1,7,5,3};
    int arr2[5]={15,11,12,16,10},arr3[10];
    int i,j,temp,k=0;
    
    for(i=0;i<10;i++)
    {
     if(i>4)
     { arr3[i]=arr2[k];
     k++;
     }
    
    arr3[i]=arr1[i];
	}
     printf("Elements are :");
    for ( i = 0; i < 10; i++)
    {
        printf("%d  ",arr3[i]);
    }
    

     for(i=0; i<10-1; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr3[j]<arr3[i])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<10; i++)
    {
        printf("%d  ", arr3[i]);
    }
	      
}
