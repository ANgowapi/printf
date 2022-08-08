#include "main.h"

/**
* _printf - prints anything
* @format: the format string
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
int a = 0;
int printedChar = 0;
va_list args;

va_start(args, format);
while (format[a])
{
while (format[a] == '%')
{
switch (format[a + 1])
{
case 'c':
printedChar += printsChar(args);
a += 2;
break;
case 's':
printedChar += printsString(args);
a += 2;
break;
case '%':
_putchar('%');
printedChar++;
a += 2;
break;
					

default:
_putchar(format[a]);
_putchar(format[a + 1]);
a += 2;
}
}

if (format[a])
{
_putchar(format[a]);
printedChar++;
}

a++;
}
va_end(args);

return (printedChar);
}
