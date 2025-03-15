//WAP to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];int len,temp;
printf("Enter the srting :");
gets(str);

strrev(str);

printf("The reverse sring is : %s",str);

return 0;
}
