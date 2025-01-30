
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <stdio.h>

int main()
{
  int i,j,k,l,m,n;
  printf("enter the limit = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
        printf("*");
    for(k=i+1;k<=n;k++)
        printf(" ");
    for(k=i;k<n;k++)
        printf(" ");
    for(j=1;j<=i;j++)
        printf("*");
    printf("\n");
    
  }
  return 0;
}