// WAP to copy a string into another empty string.(WITH LIBRARAY FUNCTION)


#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter any string: ");
    gets(s1);
    printf("\nString 1 = %s", s1);
    strcpy(s2,s1);

    printf("\nString 2 = %s", s2);
    return 0;
}