#include<iostream>
using namespace std;
int
main ()				//nextdate problem
{
  int day, month, year, i, j, leap = 0, max_days;
  cout << "Enter month,day and year\n";
  cin >> month >> day >> year;
  if (year > 2019 || year < 1812 || month < 1 || month > 12)
    {
      cout << "invalid date\n";
      return 0;
    }
  if (year % 4 == 0 && year % 100 != 0)
    leap = 1;
  else if (year % 100 == 0 && year % 400 == 0)
    leap = 1;
  else
    leap = 0;
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
      month == 10 || month == 12)
    max_days = 31;
  else if (leap == 1 && month == 2)
    max_days = 29;
  else if (leap == 0 && month == 2)
    max_days = 28;
  else
    max_days = 30;
  if (day < 1 || day > max_days)
    {
      cout << "invalid date\n";
      return 0;
    }
  else
    {
      if (day + 1 > max_days)
	{
	  day = 1;
	  if (month + 1 > 12)
	    {
	      month = 1;
	      if (year + 1 > 2019)
		cout << "cannot print next day\n";
	      else
		year = year + 1;
	    }
	  else
	    month = month + 1;
	}
      else
	day = day + 1;
      cout << "next day\n";
      cout << month << " " << day << " " << year << "\n";
    }
  return 0;
}

