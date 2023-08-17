#include <stdio.h>
#include <stdlib.h>
/*
 *9-print_comb.c
 * */

int main(void)
{
	int digit = 0;
	while(digit <= 9)
	{
		putchar(digit,', ');
		digit++;
	}
	return (0);
}
