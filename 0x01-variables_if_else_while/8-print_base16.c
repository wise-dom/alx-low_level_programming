#include <stdio.h>
#include <stdlib.h>
/*
 *8-print_base16.c
 */

int main(void)
{
        int digit = 0;
        char alphabetLowercase = 'a';

	while(digit<= 9)
        {
                putchar(digit);
                digit++;
        }

        while(alphabetLowercase <= 'f')
        {
                putchar(alphabetLowercase);
                alphabetLowercase++;
        }
       
        putchar('\n');
        return (0);
}
