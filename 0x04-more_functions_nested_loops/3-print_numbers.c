#include <stdio.h>
#include "main.h"
/*
 * void print_numbers(void) - prints the numbers from 0 to 9
 *
 * return 0 for success
 */

void print_numbers(void)
{
        char number = '9';

        for (int i = 0; i <= number; i++)
		_putchar(number);

	_putchar("\n");
	
	return (0);
}
