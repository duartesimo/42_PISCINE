#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	sep_len = ft_strlen(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*string;
	char	*p_string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = total_length(size, strs, sep);
	string = (char *)malloc((total_len + 1) * sizeof(char));
	p_string = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(p_string, strs[i]);
		p_string += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(p_string, sep);
			p_string += ft_strlen(sep);
		}
		i++;
	}
	*p_string = '\0';
	return (string);
}
