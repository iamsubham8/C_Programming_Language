/*Q22. Write a program to do the following:
 a. To output the
question “Who is the father of computer ?”
b. To accept an answer.
c. To print out “Good” and then stop, if the answer is correct.
d. To output the message ‘ try again, if the answer is wrong.
e. To display the correct answer when the answer is wrong even at the third
attempt and stop.*/


#include <stdio.h>
#include <string.h>
int main()
{
int i;
char s[100];
char s1[] = "charles babbage";
printf("who is the father of computer?\n");
printf("enter the answer\n");
gets(s);
for (i = 0; i < 3; i++)
{
if (strcmp(s, s1) == 0)
{
printf("good");
break;
}
else
{
printf("try again\n");
if (i < 2)
{
gets(s);
}
}
}
if (i == 3)
printf("correct answer is: charles babbage");
return 0;
}