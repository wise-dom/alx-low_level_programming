#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * void _puts_recursion prints a string, follow by a new line.
 */

void _puts_recursion(char *s)
{
  for (int i = 0; i < int(strlen(s)); i++)
  {
    putchar(s[i]);
  }
  putchar('\n');
}
