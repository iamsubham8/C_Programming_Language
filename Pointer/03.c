#include<stdio.h>
int main ()
{
    int age = 20;
    int *ptr = &age;
  //value
    printf("%d\n",age);  //%p is hexadecimal value
    printf("%d\n",*ptr);
    printf("%d",*(&age));
    return 0;
}