#include <stdio.h>
#include <stdlib.h>
/*
 *3-print_alphabets.c
 */

int main(void)
{
	char alphabetUppercase = 'A';
	char alphabetLowercase = 'a';

	while(alphabetLowercase <= 'z')
	{
		putchar(alphabetLowercase);
		alphabetLowercase++;
	}

	while(alphabetUppercase <= 'Z')
        {       
                putchar(alphabetUppercase);
                alphabetUppercase++;
        }

	putchar('\n');
	return (0);
}
