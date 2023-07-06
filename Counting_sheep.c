#include <stdbool.h>
#include <stdio.h>

size_t count_sheep(const bool sheep[], size_t count)
{
	int sum = 0, i;

	for (i = 0; i < count; i++)
		sum += sheep[i];

	return (sum);
}
