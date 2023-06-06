char *strrev(char *string)
{
  int len = 0, i, j, tmp = 0;
  while (string[len] != '\0')
    len++;
  char rev_string[len];

  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    tmp = string[i];
    string[i] = string[j];
    string[j] = tmp;
  }

  return string;
}