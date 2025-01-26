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
   
   len1=strlen(s1);
   len2=strlen(s2); 
    for(i=0;len2!='\0';i++)  
    {
    	s1[i+len2]=s2[i];
	}
	
 
    printf("combined two strings ='%s'\n",s1); 
    return 0;
}