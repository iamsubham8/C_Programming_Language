// Q14. Write a program to check whether a given string is alphanumeric or not.

#include <stdio.h>
#include <string.h>
int main()
{
int a = 0, n = 0;
char str[100];
printf("enter the string\n");
gets(str);
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
{
a = 1;
}
if (str[i] >= '0' && str[i] <= '9')
{
n = 1;
}
}
if (a == 1 && n == 1)
{
printf("string is alphanumeric");
}
else
{
printf("string is not alphanumeric");
}
return 0;
}
