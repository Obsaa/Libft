#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*constant;
	size_t		i;

	constant = (const char *)s;
	i = 0;
	while (i++ < n)
		if (*(constant + i) == (char)c)
			return ((void *)constant + i);
	return (NULL);
}