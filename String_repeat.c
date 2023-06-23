#include <string.h>

char *repeat_str(size_t count, const char *src)
{
	int i, len = strlen(src);
	char *res;

	res = (char *)calloc((len * count + 1), sizeof(char));

	for (i = 0; i < count; i++)
		strcat(res, src);

	return res;
}
