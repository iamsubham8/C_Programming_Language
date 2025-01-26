//Q28. Write a C-language program to swap two strings using a pointer.

#include <stdio.h>
#include <string.h>
int main()
{
int i, l1, l2, l;
char str1[100];
printf("enter the char string 1 : ");
gets(str1);
char *ptr1 = str1;
l1 = strlen(str1);
char str2[100];
printf("enter the char string 2 : ");
gets(str2);
char *ptr2 = str2;
l2 = strlen(str2);
if (l1 > l2)
{
l = l1;

}
else
{
l = l2;
}
for (i = 0; i < l; i++)
{
int a = *(ptr1 + i);
*(ptr1 + i) = *(ptr2 + i);
*(ptr2 + i) = a;
}
*(ptr1 + l2) = '\0';
*(ptr2 + l1) = '\0';
puts(str1);
puts(str2);
return 0;
}