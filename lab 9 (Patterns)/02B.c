// Diamond Star Pattern 
 
//     * 
//    *** 
//   ***** 
//  ******* 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     *
#include <stdio.h>
int main()
{
  int n, j, i,k;

  printf("Enter number of rows :");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = i; j <= n; j++)
      printf(" ");

    for (k = 1; k <= 2*i-1; k++)
      printf("*");

    printf("\n");
  }

  for (i = n-1; i >0; i--)
  {
    for (j = i; j <= n; j++)
      printf(" ");

    for (k = 2*i-1 ; k >0; k--)
      printf("*");

    printf("\n");
  }

  return 0;
}