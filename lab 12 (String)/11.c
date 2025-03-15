/*11. Write a program to delete all vowels from a sentence. Assume that the sentence is not 
more than 80 characters long.*/

#include <stdio.h>
int main()
{
    char str[80];
    int i=0,j,len;
    gets(str);
    len = strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            j=i;
            for(;j<len;j++)
                str[j] = str[j+1];
            len--;
            printf("The new string is %s\n",str);
        }
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            continue;
        i++;
    }
   
   }
