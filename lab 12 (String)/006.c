/*Program To Concatenate Two Strings Using Standard Method*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s1[1000],s2[1000];  
    int i,len1,len2;
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
   strcat(s1,s2);
 
    printf("combined two strings ='%s'\n",s1); 
    return 0;
}