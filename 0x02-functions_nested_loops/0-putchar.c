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
	int i;

	for (i = 0; i  < 8; i++)
		putchar(content[i]);
	putchar('\n');

	return (0);
}
