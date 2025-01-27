// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a 
// C  program to convert this temperature into Centigrade degrees. 
// [ C = (F – 32) / 1.8 ] 
#include<stdio.h>
int main ()
{ 
 float f,c;
 printf("Enter the Fahrenheit :");
 scanf("%f",&f);
 c=((f-32)/1.8);
 printf("Fahrenheit=%f and centigrade=%f",f,c);
 
  
}