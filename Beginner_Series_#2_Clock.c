int past(int hours, int minutes, int seconds)
{
	return (seconds * 1000 + minutes * 1000 * 60 + hours * 1000 * 60 * 60);
}
