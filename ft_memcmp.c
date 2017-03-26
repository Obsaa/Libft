#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tempstr1;
	unsigned char	*tempstr2;

	tempstr1 = (unsigned char*)s1;
	tempstr2 = (unsigned char*)s2;
	if (s1 == s2)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (n--)
	{
		if (*tempstr1 != *tempstr2)
			return (*tempstr1 - *tempstr2);
		tempstr1++;
		tempstr2++;
	}
	return (0);
}