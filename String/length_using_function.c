#include <stdio.h>
void fun()
 {
    char str[100];
    int l=0;
   while(str[l]!='\0')
    {
        l++;
    }
    
  printf("Length of the string is : %d\n\n",l);
 }
int main()
{
    char str[100]; /* Declares a string of size 100 */
    
	     
       printf("Input the string : ");
       gets(str);
      fun(str);
     
   
}