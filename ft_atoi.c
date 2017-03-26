#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int num;
	int neg;

	num = 0;
	neg = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		num *= 10;
		num += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}