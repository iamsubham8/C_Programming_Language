#include<stdio.h>
void fun(int count);
int main()
{
    fun(5);
    return 0;
}
void fun(int count)
{
    if(count==0)
    {
        return ;
        }
        printf("Hello world\n");
        fun(count-1);
}
