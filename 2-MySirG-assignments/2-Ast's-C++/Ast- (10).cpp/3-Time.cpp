#include <iostream>
using namespace std;

class Time {
    int h;     // Hours
    int m;     // Minutes
    int s;     // Seconds

public:
    // Default constructor - sabko 0 se initialize kar rahe hain
    Time() {
        h = 0;
        m = 0;
        s = 0;
        cout << "The member variables have been initialised" << endl;
        cout << "Hours: " << h << ", Minutes: " << m << ", Seconds: " << s << endl;
    }

    // Function to take time input from user
    void SetTime() {
        cout << "Enter the input for the time (hours minutes seconds): ";
        cin >> h >> m >> s;
    }

    // Function to display the time in proper format
    void DisplayTime() {
        cout << "The time alloted is " << h << " hours, "
             << m << " mins and " << s << " seconds" << endl;
    }
};

int main() {
    Time t;               // Object bana, default constructor call hoga
    t.SetTime();          // User se time input le rahe hain
    t.DisplayTime();      // Time display kar rahe hain
    return 0;
}
