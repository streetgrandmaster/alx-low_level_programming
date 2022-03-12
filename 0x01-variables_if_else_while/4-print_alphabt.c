#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabet in lowercase excluding q and e.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char  i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
