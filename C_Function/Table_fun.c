#include<stdio.h>
void table();
int main()
{
  int n;
  printf("Enter the Number :");
  scanf("%d",&n);
  table(n); //argument/actual parameter

  return 0;
}

void table(int n)    //parameter/formal parameter
{  
    
    for(int i=1;i<=10;i++)
    printf("%d\n",i*n);
}