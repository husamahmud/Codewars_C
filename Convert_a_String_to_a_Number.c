#include <stdlib.h>

int string_to_number(const char *src)
{
  int check = 0, result = 0;
  if (*src == '-')
  {
    check++;
    src++;
  }

  while (*src >= '0' && *src <= '9')
  {
    int digit = *src - '0';
    result = result * 10 + digit;
    src++;
  }

  return check ? -result : result;
}
int string_to_number(const char *src)
{
  return atoi(src);
}
