#include<stdio.h>
int a();
int b();
int a(); 
int main()
{
  a();
  b();
  a();  
}

int a()
{
    printf("\nHELLO");
}
int b()
{
   printf("\nBYE");
}