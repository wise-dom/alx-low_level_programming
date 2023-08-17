#include <stdio.h>
#include <stdlib.h>
/*
 *2-print_alphabet.c
 * */

int main(void)
{
	char alphabet = 'a';

	while(alphabet <= 'z')
	{

		putchar(alphabet);
		alphabet++;
	}
	
	putchar('\n');
	return (0);
}	
