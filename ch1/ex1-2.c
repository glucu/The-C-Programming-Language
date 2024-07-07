#include <stdio.h>

/*
 * > gcc -Wall -W ex1-2.c
 *
 * warning: unknown escape sequence: '\c'
 *   |   printf("\c");
*/

int main()
{
  printf("\c");
}
