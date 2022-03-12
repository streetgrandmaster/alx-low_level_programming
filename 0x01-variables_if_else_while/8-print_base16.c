#include <stdio.h>
/**
 * main - prints all  numbers of base 16 in lowercase.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
int i;
char lower;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (lower = 'a'; lower <= 'f'; lower++)
{
putchar(lower);
}
putchar('\n');
return (0);
}
