#include<stdio.h>
int main()
{
  	char str[100];
  	int i, vowels, consonants,digit,special;
  	 i = vowels = consonants = digit =special=0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
 		}
  		else if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            consonants++;
        }
        
    	else if (str[i]>=48 &&str[i]<=57)
        {   
			
            digit++;
        }
        else
        {   
            special++;
			
        }
        
    	i++;
	}
    printf("\n Number of Vowels in this String = %d", vowels);  
	printf("\n Number of Consonants in this String = %d", consonants);   
    printf("\n Number of Digits in this String = %d", digit);   	
    printf("\n Number of special symbol in this String = %d", special);   
  	return 0;
}