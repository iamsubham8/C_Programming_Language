#include<stdio.h>
void main(){
int i,a[5]={1,2,3,4,5},b[5],j;
for(i=1,j=0;i<=5;)
b[j++]=i++;
b[0]=a[0];
for(i=0;i<5;i++)
printf("%d ",b[i]);
}