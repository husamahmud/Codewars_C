#include <stdbool.h>

bool is_uppercase(const char *source)
{
	while (*source)
	{
		if (*source >= 'a' && *source <= 'z')
			return (false);
		source++;
	}
	return (true);
}
