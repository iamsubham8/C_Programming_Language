#include<stdio.h>
int main ()
{
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n",&age); //use %p for hexadecimal value
    printf("%d\n",_age);
    printf("%d\n",ptr);
    printf("%p",ptr);
    return 0;
}