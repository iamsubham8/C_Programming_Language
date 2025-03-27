#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[50], temp,*ptr; // define the size of str[] array  
    int i,len;  
    ptr=str;
    printf (" \n Enter a string to reverse order: ");  
    gets(str);
    len = strlen(str); // get the length of the string  
    // use for loop to store the reverse string  
    for (i = 0; i < len/2; i++)  
    {  
        temp = *(ptr+i);
        *(ptr+i) = str[len-1-i];  
        str[len-1-i] = temp;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  
}