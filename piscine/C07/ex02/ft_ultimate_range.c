#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	if(min >= max)
	{
		*range = NULL;
		return(0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if(!(*range))
		return (-1);
	i = 0;
	while(i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

int     main(void)
{
	int     *array;
	int     size;
	int     i;

	// Cas normal
	size = ft_ultimate_range(&array, 3, 7);
	printf("size: %d\n", size);
	i = 0;
	while(i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	// Cas min >= max
	size = ft_ultimate_range(&array, 7, 3);
	printf("size: %d, array is %s\n", size, array == NULL ? "NULL" : "not NULL");

	// Cas min == max
	size = ft_ultimate_range(&array, 5, 5);
	printf("size: %d, array is %s\n", size, array == NULL ? "NULL" : "not NULL");

	return (0);
}
