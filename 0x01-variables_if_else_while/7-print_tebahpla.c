#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabet in lowercase in reverse.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char  i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
