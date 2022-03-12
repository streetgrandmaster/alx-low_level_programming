#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabet in lowercase.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char  i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
