#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*nums;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	nums = malloc(sizeof(int) * size);
	while (i < size)
	{
		nums[i] = min + i;
		i++;
	}
	return (nums);
}
