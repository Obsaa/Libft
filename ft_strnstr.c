#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (*big && len)
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0')
			return ((char*)(big - i + 1));
		big++;
		len--;
	}
	return (NULL);
}