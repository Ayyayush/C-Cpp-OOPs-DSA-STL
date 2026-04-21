#include <iostream>
using namespace std;

class Time
{
    int hr;       // Hours ko store karega
    int min;      // Minutes ko store karega
    int sec;      // Seconds ko store karega

    public :

    // Function to take input for time
    void SetTime()
    {
        cout << "Enter the time in HH MM SS format: " << endl;
        cin >> hr >> min >> sec;

        // Validation check: Minutes aur seconds 60 se jyada nahi hone chahiye
        if (min >= 60 || sec >= 60)  
        {
            cout << "Invalid time input! Minutes and Seconds should be less than 60." << endl;
            return;
        }
    }


    // Function to display time in proper format
    void DisplayTime()
    {
        cout << "The allotted time is: ";
        cout << hr << ":" << min << ":" << sec << endl;  
    }
};  // Class definition ke baad semicolon lagana zaroori hota hai


int main()
{
    Time t;  // Time class ka object create kiya
    t.SetTime();  // Time set karne ke liye function call
    t.DisplayTime();  // Time display karne ke liye function call
    return 0;
}
