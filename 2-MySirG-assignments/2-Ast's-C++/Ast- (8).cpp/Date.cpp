#include <iostream>
using namespace std;

class Date
{
    int day;     // Day of the month
    int month;   // Month of the year
    int year;    // Year

    public :

    // Function to take input for date
    void SetDate()
    {
        cout << "Enter the date in DD MM YYYY format: " << endl;
        cin >> day >> month >> year;

        // Validation checks for valid date
        if (month < 1 || month > 12)
        {
            cout << "Invalid month! Month should be between 1 and 12." << endl;
            return;
        }

        if (day < 1 || day > 31)
        {
            cout << "Invalid day! Day should be between 1 and 31." << endl;
            return;
        }

        // Days validation based on month
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        {
            cout << "Invalid day! This month has only 30 days." << endl;
            return;
        }

        if (month == 2)
        {
            // Check for leap year for February
            bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
            if ((isLeap && day > 29) || (!isLeap && day > 28))
            {
                cout << "Invalid day! February has only " << (isLeap ? 29 : 28) << " days in this year." << endl;
                return;
            }
        }
    }

    // Function to display the date
    void DisplayDate()
    {
        cout << "The allotted date is: " << day << "-" << month << "-" << year << endl;
    }
};  // Class definition ke baad semicolon lagana zaroori hai

int main()
{
    Date d;  // Date class ka object create kiya
    d.SetDate();  // Date set karne ke liye function call
    d.DisplayDate();  // Date display karne ke liye function call
    return 0;
}
