/*Q17. Write a function using pointers to exchange the values stored in two
locations in the memory.*/

#include <stdio.h>
void swap(int *a, int *b);
int main()
{
int a, b;
printf("enter the value of a & b\n");
scanf("%d%d", &a, &b);
printf("before swaping a : %d & b : %d", a, b);
swap(&a, &b);
printf("\nafter swaping a : %d & b : %d", a, b);
return 0;
}
void swap(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
