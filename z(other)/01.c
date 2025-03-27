#include <stdio.h>

int main()
{ 
    char ch;
    printf("enter the charecter : ");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    
    printf("your enter the vowel");
    else if  (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
    printf("your enter the consonant");
    }
    return 0;
}