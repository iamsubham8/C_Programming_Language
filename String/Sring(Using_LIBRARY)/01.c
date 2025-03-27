#include<stdio.h>
#include<string.h>
int main()
{
 char s1[]="subham";
 char s2[]="kewat";
 char s3[55];
//  puts(strcat(s1,s2));
//  printf("the length of s1 is %d\n",strlen(s1));
//  printf("the length of s2 is %d\n",strlen(s2));
//  printf("The reverse string s1 is :");
//  puts(strrev(s1));
//  printf("The reverse string s2 is :");
//  puts(strrev(s2));
 printf("The copy string s1 to s2 is :");
 puts(strcpy(s1,s2));

return 0;
}
