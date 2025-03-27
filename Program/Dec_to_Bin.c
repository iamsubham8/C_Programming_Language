#include<stdio.h>

int d_to_b(int n)
{
    int rem=0,bin=0,fin_bin=0,temp=n;

    while (temp>0)
    {
        rem = temp%2;
        temp = temp/2;
        bin = bin*10+rem;
    }
    while (bin>0)
    {
        rem=bin%10;
        fin_bin = fin_bin*10+rem;
        bin/=10;
    }
    return fin_bin;
    }
    

