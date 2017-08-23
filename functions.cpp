#include "Declarations.h"
#include <cassert>


int fib_i(int num_i)
{
	if (num_i == 0)
	{
		return 0;
	}
	else
	{
		if (num_i < 0)
		{
			assert(num_i < 0);

		}
		else{
		if (num_i == 1)
		{
			return 1;
		}
		else
		{
			return fib_i(num_i - 1) + fib_i(num_i - 2);
		}
	}
}

	return 0;
}

int fact_i(int num_i)
{
	if (num_i == 0 )
	{
		return 0;
	}
	else
	{
		if (num_i < 0)
		{
			assert(num_i < 0);
		}
		else{
			if (num_i == 1)
			{
				return 1;
			}
			else
			{
			return num_i * fact_i(num_i - 1);	
			}
		}
	}
	return 0;
}

int col_i(int num_i)
{
	if (num_i == 0)
	{
		return 0;
	}
	else
	{
		if (num_i < 0)
		{
			assert(num_i < 0);
		}
		else
		{
			
			if (num_i % 2 == 0)
			{
				return num_i / 2;
			}
			else
			{
				return (3 * num_i) + 1;
			}
		}
	}
	return 0;
}
