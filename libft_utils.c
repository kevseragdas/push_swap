#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

long long	ft_atoi(const char *nptr)
{
	int	i;
	long long	num;
	int	opt;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	opt = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			opt *= -1;
		i++;
	}
	num = 0;	
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (opt * num);
}
