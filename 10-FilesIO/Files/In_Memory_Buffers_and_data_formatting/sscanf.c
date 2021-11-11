/*
	Demo Sscanf() 
*/

#include <stdio.h>

int main()
{
	char str[50] = "Tuesday October 5 2021";

	char weekday[10], month[10];
	int day, year;

	sscanf(str, "%s %s %d %d", weekday, month, &day, &year);
	printf("Day: %d, Year: %d, Month : %s, %s", day, year, month, weekday);
}
