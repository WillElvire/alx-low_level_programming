# include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lower case
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	char a = 'a', z = 'z';
	

	for( int i=0;i<10;i++ )
	{

	  while( a<=z ) 
	  {
	     _putchar(a);
	     a++;	  
	  }
           _putchar('\n');	  
	  
	
	}

}
