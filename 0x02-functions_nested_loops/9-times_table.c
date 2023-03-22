#include "main.h"
/**
  * times_table - print the 9 times table
  */
void times_table(void)
{
	int firstnum;
	int secondnum;
	int product;

	for (firstnum = 0; firstnum < 10; firstnum++)
	{
		for (secondnum = 0; secondnum < 10; secondnum++)
		{
			product = firstnum * secondnum;
			if (secondnum == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (product / 10));
				}
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
