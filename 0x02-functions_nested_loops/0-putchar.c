#include <stdio.h>

/*
 *main prints _putchar, followed by a new line.
 *
 * The program should return 0
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
