#include<stdio.h>
int main ()
{
    int age = 20;
    int *ptr = &age;
  //address
    printf("%p\n",&age);  //%p is hexadecimal value
    printf("%p\n",ptr);
    printf("%p",&ptr);
    return 0;
}