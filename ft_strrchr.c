#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = (int)ft_strlen(s) + 1;
	while (i)
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	return (NULL);
}