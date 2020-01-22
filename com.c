#include <stdio.h>
int isLeapYear (int year);
/* True if leap year */
int leapYears (int year);
/* The number of leap year */
int todayOf (int y, int m, int d);	/* The number of days since the
					   beginning of the year */
long days (int y, int m, int d);	/* Total number of days */
void calendar (int y, int m);
/* display calendar at m y */
int
main (void)
{
  int year, month;
  printf ("Enter the month and year: ");
  scanf ("%d %d", &month, &year);
  calendar (year, month);
  return 0;
}

int
isLeapYear (int y)		/* True if leap year */
{
  return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

int
leapYears (int y)		/* The number of leap year */
{
  return y / 4 - y / 100 + y / 400;
}

int
todayOf (int y, int m, int d)	/* The number of days since the
				   beginning of the year */
{
  static int DayOfMonth[] =
    { -1 /*dummy */ , 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
  return DayOfMonth[m] + d + ((m > 2 && isLeapYear (y)) ? 1 : 0);
}

long
days (int y, int m, int d)	/* Total number of days */
{
  int lastYear;
  lastYear = y - 1;
  return 365L * lastYear + leapYears (lastYear) + todayOf (y, m, d);
}

void
calendar (int y, int m)		/* display calendar at m y */
{
  const char *NameOfMonth[] = { NULL /*dummp */ ,
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November",
    "December"
  };
  char Week[] = "Su Mo Tu We Th Fr Sa";
  int DayOfMonth[] =
    { -1 /*dummy */ , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int weekOfTopDay;
  int i, day;
  weekOfTopDay = days (y, m, 1) % 7;
  if (isLeapYear (y))
    DayOfMonth[2] = 29;
  printf ("\n %s %d\n%s\n", NameOfMonth[m], y, Week);
  for (i = 0; i < weekOfTopDay; i++)
    printf (" ");
  for (i = weekOfTopDay, day = 1; day <= DayOfMonth[m]; i++, day++)
    {
      printf ("%2d ", day);
      if (i % 7 == 6)
#include<stdio.h>
#include<iostream>
	using namespace std;
#define locks 45 #define barrels 25
#define stocks 30 #define rifle 100
#define c1 0.1 #define c2 0.15
#define c3 0.2 #define limit1 1000
#define limit2 1800
      int main ()
      {
	float total, comm = 0;
	int l, b, s, r, i;
	cout << "enter the number of locks\n";
	cin >> l;
	cout << "enter the number of barrels\n";
	cin >> b;
	cout << "enter the number of stocks\n";
	cin >> s;
	cout << "enter the number of riffle\n";
	cin >> r;
	if (l > 1000 || l < 0 || b > 1000 || b < 0 || s > 1000 || s < 0
	    || r > 1000 || r < 0)
	  {
	    cout << "the given input is not with in the bounds\n";
	    return 0;
	  }
	total = (l * locks) + (b * barrels) + (s * stocks) + (r * rifle);
	cout << "Total amount is:" << total << "\n";
	if (total > limit2)
	  {
	    total = total - limit2;
	    comm = comm + total * c3;
	    total = limit2;
	  }
	if (total > limit1)
	  {
	    total = total - limit1;
	    comm = comm + total * c2;
	    total = limit1;
	  }
	if (total > 0)
	  comm = comm + total * c1;
	cout << "Total commission is:";
	cout << comm << "\n";
	return 0;
      }
      printf ("\n");
    }
  printf ("\n");
}

