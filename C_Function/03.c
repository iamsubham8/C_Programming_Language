//write a function that prints Namaste if user is indian & Bonjour if the user is French.

#include<stdio.h>
void namaste();
void bonjour();
int main()
{
  printf("For indian press i\nfor french press f\n");
  char ch;
  scanf("%c",&ch);

  if(ch=='i')
  {
    namaste();
  }
else
    {
        bonjour();
    }
}

void namaste()
{
    printf("Namaste");
}
void bonjour()
{
    printf("Bonjour");
}