#include<stdio.h>
int main()
{
char str[100];
int i=0;
printf("enter the sring :");
gets(str);
char *ptr=str;

while ((*ptr+i)!='\0')
    i++;

printf("%c\n",ptr);
// printf("%s\n",ptr);
// printf("%c\n",*ptr);
// printf("%s\n",*ptr);

return 0;
}