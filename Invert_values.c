#include <stddef.h>

void invert(int *values, size_t values_size)
{
  int i = 0;
  for (i = 0; i < values_size; i++)
    values[i] *= -1;
}