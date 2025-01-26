/* C Program to Count Vowels and Consonants in a String */
 
#include <stdio.h>
 
int main()
{
  	char str[100];
  	int i=0, vowels=0, consonants=0;
  	 //i = vowels = consonants = 0;
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	for (int i = 0; str[i]!='\0'; i++)
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
 		}
  		else
    		consonants++;
    
	}
    printf("\n Number of Vowels in this String = %d", vowels);  
	printf("\n Number of Consonants in this String = %d", consonants);   	
  
  	return 0;
}