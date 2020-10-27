#include "holberton.h"
#include <stdarg.h>

/**
 *print_char - print char
 *
 * @a: va_list a
 * Return: int
 */

int print_char(va_list a)
{
char chars = (char)va_arg(a, int);
_putchar(chars);
return (1);
}

/**
 *print_string - print strings
 *
 * @b: va_list b
 * Return: int
 */

int print_string(va_list b)
{
int i;
char *S = va_arg(b, char *);

if (S == NULL)
S = "(null)";

for (i = 0; S[i] != '\0'; i++)
{
_putchar(S[i]);
}
return (i);
}

/**
 *print_integer - print integer
 *
 * @n: va_list n
 * Return: int
 */

int print_integer(va_list n)
{
int ct = 0;
char ints = (char)va_arg(n, int);

if (ints < 0)
{
_putchar('-');
ints = -ints;
}
if (ints / 10)
{
print_integer(ints / 10);
ct++;
}
_putchar((ints % 10) + '0');
return (ct);
}
