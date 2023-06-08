#include <string.h>

void remove_exclamation_marks(const char *str_in, char *str_out)
{
  int i, j = 0, len = strlen(str_in);
  for (i = 0; i <= len; i++)
  {
    if (str_in[i] != '!')
    {
      str_out[j] = str_in[i];
      j++;
    }
  }
}