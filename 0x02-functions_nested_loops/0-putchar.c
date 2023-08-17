#include <stdio.h>
#include "main.h"
/*
 * A program that prints _putchar
 *
 * Return 0 for success
 */

int main(void)
{
	char content[] = "_putchar";

	for (int i = 0; i  < strlen(content); i++)
		putchar(content[i]);
	putchar('\n');

	return (0);
}
