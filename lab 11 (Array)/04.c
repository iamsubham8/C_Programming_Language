//wap to find greatest elements in an array.....

#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter the size of array :");
  scanf("%d",&n);

  int arr[n];
  printf("Enter the elements an array\n");
  for (int i = 0; i < n; i++)
  {
	scanf("%d",&arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
	 
		if(arr[0]<arr[i])
	{  
		arr[0]=arr[i];
	}
  }
  printf("The greatest element is : %d",arr[0]);
  


return 0;
}