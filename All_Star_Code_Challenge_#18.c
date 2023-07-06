#include <stddef.h>

size_t str_count(const char *str, char letter)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == letter)
			count++;
		str++;
	}
	if (count)
		return (count);

	return (0);
}
