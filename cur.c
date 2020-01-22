#include<stdio.h>
#include<stdlib.h>
int
main ()				//currency
{
  int choice = 0;
  float indian_currency;
  float us_dollar, japaneese_yen;
  printf ("Currency Converter\n");
  printf ("1-Indian rupees to US dollar\n2-US dollar to Indian rupees\n");
  printf ("3-Indian rupees to Japaneese\n4-Japaneese Yen to Indian rupees\n");
  printf ("5-Exit\n");
  while (choice != 5)
    {
      printf ("Enter your choice\n");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  printf ("Enter rupees amount:\t");
	  scanf ("%f", &indian_currency);
	  printf ("Equivalent US dollar: \t %f\n", (indian_currency / 70.92));
	  break;
	case 2:
	  printf ("Enter US dollar amount:\t");
	  scanf ("%f", &us_dollar);
	  printf ("Equivalent Indian rupees: \t %f\n", (us_dollar * 70.92));
	  break;
	case 3:
	  printf ("Enter rupees amount:\t");
	  scanf ("%f", &indian_currency);
	  printf ("Equivalent Japaneese Yen: \t%f\n",
		  (indian_currency / 0.65));
	  break;
	case 4:
	  printf ("Enter Japaneese Yen amount:\t");
	  scanf ("%f", &japaneese_yen);
	  printf ("Equivalent Indian rupees: \t%f\n", (japaneese_yen * 0.65));
	  break;
	default:
	  break;
	}
    }
}

