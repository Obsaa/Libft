#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	temp[n];

	ft_memcpy(temp, src, n);
	ft_memcpy(dst, temp, n);
	return (dst);
}
