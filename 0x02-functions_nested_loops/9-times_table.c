#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');  /* Print the first digit */

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');  /* Print the separator */
			_putchar(' ');

			k = i * j;

			/* Print the tens digit */
			if (k < 10)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			/* Print the ones digit */
			_putchar((k % 10) + '0');
		}

		_putchar('\n');  /* Move to the next line */
	}
}

