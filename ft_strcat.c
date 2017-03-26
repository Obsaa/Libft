#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	while (s2[i])
	{
		s1[l + i] = s2[i];
		i++;
	}
	s1[l + i] = 0;
	return (s1);
}