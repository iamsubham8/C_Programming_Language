#include<stdio.h>
int main()
{
int i;
char str[100];
printf("Enter the sring :");
gets(str);
char *ptr=str;
for(i=0;ptr[i]!='\0';i++)
if(ptr[i]>='a'&&ptr[i]<='z')
ptr[i]-=32;
printf("the string is : %s",ptr);
return 0;
}