#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @max: maximum number
 * @min: minmum number
 * Return: If malloc fails or min > max NULL, if not min
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
