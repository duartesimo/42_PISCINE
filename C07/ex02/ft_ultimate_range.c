#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*nums;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	nums = malloc(sizeof(int) * size);
	while (i < size)
	{
		nums[i] = min + i;
		i++;
	}
	*range = nums;
	return (size);
}
