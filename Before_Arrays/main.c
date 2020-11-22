#include <stdio.h>
#include <stdlib.h>

int day_number, day, mon, year;
int day_of_year(int day, int mon, int year)
{

        day_number += day + 30 * (mon - 1);
        day_number += mon <=7 ? mon / 2 : mon % 2 == 0 ? mon / 2 : mon / 2 + 1;

        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))

            100ün katı ise 400'e tam bölünebilmeli.

        day_number = mon > 2 ? day_number - 1 : day_number;

        else
            day_number = mon > 2 ? day_number - 2 : day_number;

        return day_number;

}
int main()
{
    while(1)
    {


   printf (" Enter the day, month and year values:");
   scanf ("%d%d%d", &day, &mon, &year);
   printf("The date has been entered is the %d th day of the year :\n", day_of_year(day, mon, year));

   day_number = 0;

   getch();
   }
}
