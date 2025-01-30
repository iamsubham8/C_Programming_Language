// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <stdio.h>

int main()
{
  int i,j,k,l,m,n;
  printf("enter the limit = ");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    for(j=i;j>0;j--)
        printf("*");
    for(k=n;k>i;k--)
        printf(" ");
    for(k=n;k>i;k--)
        printf(" ");
    for(j=i;j>0;j--)
        printf("*");
    printf("\n");
    
  }
  return 0;
}