int min(int *array, int arrayLength)
{
  int i, min = array[0];

  for (i = 0; i < arrayLength; i++)
    if (min > array[i])
      min = array[i];

  return min;
}

int max(int *array, int arrayLength)
{
  int i, max = array[0];

  for (i = 0; i < arrayLength; i++)
    if (max < array[i])
      max = array[i];

  return max;
}
