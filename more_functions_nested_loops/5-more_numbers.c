#include "main.h"

/**
 * print_most_numbers - ecris les nombres
 * @i; variable
 * Return; les nombres sans 2 et 4
 */

void more_numbers(void)

{
	int loop10;
	for (loop10 = 0; loop10 < 10; loop10++)
		{
			int i, a;
			for (i = '0'; i <= '9'; i++)
			{
				_putchar(i);
			}
			for (a = '0'; a <= '4'; a++)
			{
				_putchar('1' + a);
			}
	_putchar('\n');
	}
}
