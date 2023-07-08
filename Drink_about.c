const char *people_with_age_drink(int age)
{
	if (age <= 13)
		return ("drink toddy");
	else if (age <= 17)
		return ("drink coke");
	else if (age <= 18)
		return ("drink beer");
	else if (age <= 20)
		return ("drink beer");
	else
		return ("drink whisky");
}
