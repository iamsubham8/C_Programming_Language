// Q27. Write a C-language program to print the median of an array using a
// pointer.
#include <stdio.h>
int main()
{
int i, j, a, n;
float meadian;
printf("enter the of size array\n");
scanf("%d", &n);
int num[n];
int *ptr = num;
float *pmeadian = &meadian;
printf("Enter the elements\n");
for (i = 0; i < n; i++)
{
scanf("%d", (ptr + i));
}
for (i = 0; i < n; i++)
{
for (j = i + 1; j < n; j++)
{
if (*(ptr + i) > *(ptr + j))
{
a = *(ptr + i);
*(ptr + i) = *(ptr + j);
*(ptr + j) = a;
}
}
}
printf("The numbers in ascending order is:\n");
for (i = 0; i < n; i++)
{
printf("%d\t", *(ptr + i));
}
if (n % 2 == 0)
{
*pmeadian = (*(ptr + n / 2) + *(ptr + n / 2 - 1)) / 2.0;
printf("meadian : %f", *pmeadian);
}
else
{
*pmeadian = *(ptr + n / 2);
printf("meadian : %f", *pmeadian);
}
return 0;
}
