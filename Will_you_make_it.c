#include <stdbool.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
	if ((fuel_left * mpg) >= distance_to_pump)
		return (true);
	else
		return (false);
}
