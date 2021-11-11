/*
	Demo Sprintf()

	Note:
		1. Sscanf = ascii to int(*any)
		2. Sprinf = int(*any) to ascii
*/

#include <stdio.h>

int main()
{
	/*
	char str[50] = "Tuesday October 5 2021";

	char weekday[10], month[10];
	int day, year;

	sscanf(str, "%s %s %d %d", weekday, month, &day, &year);
	printf("Day: %d, Year: %d, Month : %s, %s", day, year, month, weekday);
	printf("Day: %d, Year: %d, Month : %s, %s", day, year, month, weekday);
	*/

	char str[50];

	sprintf(str, "value = %f\n", 12.25f);
	puts(str);
	
}
