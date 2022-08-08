#include "main.h"

/**
* _printf - prints anything.
* @format:  is a character string.
*
* Returns: the number of characters printed.
*/
int _printf(const char *format, ...)
{
int a = 0;
int printed = 0;
  
while (format[a])
{
_putchar(format[a]);
printed++;
a++;
}
return (printed);
}
