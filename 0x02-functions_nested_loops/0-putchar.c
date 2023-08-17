#include <stdio.h>
#include "main.h"
/*
 * A program that prints _putchar
 *
 * Return 0 for success
 */

int main(void)
{
	char content[8] = "_putchar";

	for (int i = 0; i  < 9; i++)
		_putchar(content[i]);
	_putchar('\n');

	return (0);
}
