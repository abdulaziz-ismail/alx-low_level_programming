#include "main.h"

/**
 * 9_times_table - print the 9 times table
 */
void 9_times_tablee(void)
{
	int num, mult, prod;

	for (bum = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_put((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
