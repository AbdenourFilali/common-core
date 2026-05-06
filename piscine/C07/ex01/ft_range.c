#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	count;
	int	i;

	i = 0;
	count = min;
	if(min >= max)
		return (NULL);
	range = max - min;
	array = malloc(sizeof(int) * range);
	if(!array)
		return (NULL);
	while(count < max)
	{
		array[i++] = count++;
	}
	return (array);
}

int     main(void)
{
	int     *array;
	int     i;

	array = ft_range(3, 7);
	i = 0;
	while(i < 4)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}
