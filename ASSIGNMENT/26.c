/*Q26. Write a C-language program to find whether the given string is palindrome
or not using a pointer.*/

#include <stdio.h>
#include <string.h>
int main()
{
int i, l, count = 0;
printf("enter string : ");
char str1[100];
gets(str1);
char *ptr1 = str1;
l = strlen(str1);
char str2[100];
char *ptr2 = str2;
// for copy str1 to str2
for (i = 0; *(ptr1 + i) != '\0'; i++)
{
*(ptr2 + i) = *(ptr1 + i);
}
*(ptr2 + i) = '\0';
// for reverse str1
for (i = 0; i < l / 2; i++)
{
int temp = *(ptr1 + i);
*(ptr1 + i) = *(ptr1 + l - i - 1);
*(ptr1 + l - i - 1) = temp;
}
printf("reverse of string : ");
puts(str1);
// for check palindrome
for (i = 0; *(ptr1 + i) != '\0'; i++)
{
if (*(ptr1 + i) == *(ptr2 + i))
{
count++;
}
}
if (count == l)
{
printf("string is palindrome\n");
}
else
{
printf("string is not palindrome\n");
}
return 0;
}
