#include<stdio.h>
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

int main()
{
  int a, b,choice;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Enter your choice\n1 for addition \n2 for substraction \n3 for multiply \n4 for divide: ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
        printf("%d",add(a,b));
    break;
    case 2:
        printf("%d",subtract(a,b)); 
    break;    
    case 3:
        printf("%d",multiply(a,b));
    break;    
    case 4:
        printf("%d",divide(a,b));
    break;
    default:
        printf("invalid input");
    return 0;
  }
}  

int add(int n1, int n2)    
{
  return n1+n2;
}

int subtract(int n1, int n2)
{
  return n1-n2;
}

int multiply(int n1, int n2)
{
  return n1*n2;
}

int divide(int n1, int n2)
{
  return n1/n2;
}