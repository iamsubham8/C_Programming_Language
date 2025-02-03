/* Write a program to swap two values where input and output statements are in calling
 (main) function. */

#include<stdio.h>
int swap(int x,int y)
 
 {
  int temp;
  temp = y ;
  y = x;
  x = temp;
     
}
    int main ()
    {
       int a, b;
  printf("Enter first number: ");
  scanf ("%d", &a);
  printf("Enter second number: ");
  scanf ("%d", &b);

  printf("\nBefore Swapping\n");
  printf("First number: %d\n", a);
  printf("Second number: %d\n\n", b);


  printf("\nAfter Swapping\n");
  printf("First number: %d\n", swap(a,b));
  printf("Second number: %d\n\n", a);

    }