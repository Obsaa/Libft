
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*pointer;
	size_t	i;

	i = -1;
	pointer = dst;
	while (++i < n)
	{
		*(pointer + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
