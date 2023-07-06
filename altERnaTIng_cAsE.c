#include <string.h>
#include <stdlib.h>

char *to_alternating_case(const char *s)
{
	size_t len = strlen(s), i;
	char *res = (char *) (malloc(len + 1));

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			res[i] = s[i] - 'a' + 'A';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			res[i] = s[i] - 'A' + 'a';
		else
			res[i] = s[i];
	}

	res[len] = '\0';

	return (res);
}
