//Find out the output/compilation error in following programs –

#include<stdio.h>
void main(){
 int i,a[5]={6,1,1,1,9};
 for(i=a[0];i<=a[4];i++)
 {
 if(a[1]>i)
printf("%d ",i);
 else
break;
 }
 printf("You Got Stuck in an Array");
}