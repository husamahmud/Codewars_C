#include <stddef.h>

int grow(size_t size, const int arr[size])
{
  int i, mult = 1;

  for (i = 0; i < size; i++)
  {
    mult *= arr[i];
  }

  return (mult);
}
