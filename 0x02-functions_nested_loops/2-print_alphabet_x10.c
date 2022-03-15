# include "main.h"

/**
 * print_alphabet - Prints the alphabets in lower case
 *
 * Return: none
 */
void print_alphabet(void)
{
	char a = 'a', z = 'z';
	int i = 0;

	while(i>=9)
	{

	  while(a<=z)
	  {
	     _putchar(a);
	     a++;	  
	  }
           _putchar('\n');	  
	   i++;
	
	}

}
