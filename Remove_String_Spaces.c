#include <string.h>
#include <stdlib.h>

char *no_space(const char *str_in)
{
	int i, j, len = strlen(str_in);
	char *str_out = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
		if (str_in[i] != ' ')
			str_out[j++] = str_in[i];

	str_out[j] = '\0';

	return str_out;
}
