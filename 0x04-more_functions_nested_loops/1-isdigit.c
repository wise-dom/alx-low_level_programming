#include <stdio.h>
#include "main.h"

/*
 * _isdigit(int c) chechs for a digit ( 0 through 0)
 *
 * return 1 if it is a digit , and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c>= 0 && c<= 9){
		return (1);
	}
	return (0);
}
