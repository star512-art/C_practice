#define _CRT_SECURE_NO_WARNINGS

  static int leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}
static int month_day(int year, int month)
{
	int day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && leap_year(year))
		return day[month] + 1;
	return day[month];
}
