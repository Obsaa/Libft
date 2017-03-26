#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		end;

	i = 0;
	while (s1[i])
		i++;
	end = i;
	while (s2[i - end] && i - end < n)
	{
		s1[i] = s2[i - end];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}