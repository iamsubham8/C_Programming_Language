//WAP to changing string into lowercase
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int i;
 
    printf("Enter  the string : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)  
    {
        //ASCII vaule of A=65 ASCII value of Z=90
        // ASCII vaule of a=97 ASCII value of z= 122
        //Difference between = 32 
        if(s[i]>=65 && s[i]<=90) 
         s[i]+=32;
    }
    printf("string in lowercase = %s\n",s);
 
 
    return 0;
}