#include "main.h"
/**
 * main - prints _putchar followed by a newline
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
char str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
