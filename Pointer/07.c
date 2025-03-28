#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main ()
{
    int x=5 , y=8;
    swap(x,y);
    printf("x = %d & y = %d\n",x,y);

    _swap(&x,&y);
    printf("x = %d & y = %d",x,y);
    return 0;
}

//call by value
void swap(int a ,int b)
{
  int temp = a;
      a = b;
      b = temp;
   printf("a = %d & b = %d\n",a,b);
}

//call by reference
void _swap(int *a ,int *b)
{
  int temp = *a;
      *a = *b;
      *b = temp;
   printf("x = %d & y = %d\n",*a,*b);
}
