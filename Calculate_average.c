#include <stdio.h>

double find_average(const double array[], unsigned length)
{
	if (length == 0)
		return (0);

	double sum = 0;

	for (int i = 0; i < (int) length; i++)
		sum += array[i];

	return (sum / length);
}

int main(void)
{
	double arr[] = {17, 16, 16, 16, 16, 15, 17, 17, 15, 5, 17, 17, 16};
	int len = 11;

	printf("%lf", find_average(arr, len));

	return (0);
}
