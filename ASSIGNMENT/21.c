/*21. Write a program, which reads your name from the keyboard and outputs a
list of ASCII codes, which represent your name.*/

#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("enter your name : ");
gets(str);
for (int i = 0; str[i] != '\0'; i++)
{
printf("%d\t", str[i]);
}
return 0;
}
