/*18. Calculate the sum of two numbers which are passed as arguments using
the call by reference method.*/

#include <stdio.h>
void add(int *a, int *b, int *c);
int main()
{
int a, b, c = 0;
printf("enter the value of a & b\n");
scanf("%d%d", &a, &b);
add(&a, &b, &c);
printf("the sum of a + b = %d", c);
return 0;
}
void add(int *a, int *b, int *c)
{
*c = *a + *b;
}