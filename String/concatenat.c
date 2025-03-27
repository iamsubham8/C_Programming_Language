#include<stdio.h>
#include<string.h>
void concatenat(char *s1,char *s2)
{
 int len1,len2;
 len1=strlen(s1);
 len2=strlen(s2);
 for(int i=0;i<=len2;i++)
{
    s1[i+len1]=s2[i];
}
printf("The marged two string is : %s",s1);
}
int main()
{
 char s1[100],s2[100];

 printf("enter 1st sring :");
 gets(s1);
 printf("enter 2nd sring :");
 gets(s2);
concatenat(s1,s2);
  return 0;
}