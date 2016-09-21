#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

// finds the day of the last month based on given parameters
int cycle_to_year(int month_indx, int first_day, int year, int end_year)
{
    string months[12] {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    string thirty_days[4] = {"apr", "jun", "nov", "sep"};
    int week_day = first_day; // day of week using numbers 0 to 6 to represent
    int sundays_on_first = 0; // this is what my goal is for Euler problem 19

    while (year <= end_year)
    {
        bool is_leap_year = false;
        int days = 0; // days in given month
        string month = months[month_indx]; // int month_indx parameter is set to a string month

        if (week_day == 6) sundays_on_first++;

        // checks whether current year is a leap year or not
        if (year % 4 == 0)
        {
            int last_two_digits = year % 100;
            if ((last_two_digits == 0 and year % 400 == 0) or last_two_digits != 0)
            {
                is_leap_year = true;
            }
        }

        // finds how many days are in month
        for (int i = 0; i < 4; i++)
        {
            if (month == thirty_days[i]) days = 30;
        }
        if (month == "feb")
        {
            if (is_leap_year) days = 29;
            else days = 28;
        }
        else if (days == 0) days = 31;

        // debug
        cout << "Days: " << days << endl
            << "Month: " << month << endl;


        // iterates through every day of month changing the week day as it goes
        for (days; days >= 1; days--)
        {
            if (week_day != 6) week_day++;
            else week_day = 0;
        }

        // debug
        cout << "Day of next month: " << week_day << endl << endl;

        // goes to next month and next year if end of December is reached
        if (month_indx != 11) month_indx++;
        else
        {
            year++;
            month_indx = 0;
        }
    }

    cout << "Last week day: " << week_day << endl;
    return sundays_on_first;
}

int main()
{
    cout << cycle_to_year(0, 0, 1900, 1900) << endl;
    cout << cycle_to_year(0, 1, 1901, 2000) << endl;

    getch();
    return 0;
}
