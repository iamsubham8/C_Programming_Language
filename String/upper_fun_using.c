#include<stdio.h>
void upper(char *ptr)
{
int i=0;
for(int i=0;ptr[i]!='\0';i++)
if(ptr[i]>='a'&&ptr[i]<='z')
ptr[i]-=32;
}

int main()
{
int i;
char str[100];
char *ptr=str;
printf("Enter the sring :");
gets(str);
upper(str);
printf("the string is : %s",ptr);
return 0;
}