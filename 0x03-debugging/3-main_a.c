#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year.
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	orintf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	return (0);
}
