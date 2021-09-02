#include <stdio.h>

/**
 * main - check in code.
 *
 * Return: Always 0.
 */
int main(void)
{
  char c;

  c = 'A';
  printf("%c: %d\n", c, isupper(c));
  c = 'a';
  printf("%c: %d\n", c, isupper(c));
  return (0);
}
