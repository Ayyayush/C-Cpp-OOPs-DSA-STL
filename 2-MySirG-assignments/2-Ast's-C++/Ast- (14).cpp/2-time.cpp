#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    void setTime(int a, int b, int c) {
        hr = a;
        min = b;
        sec = c;
    }

    void showTime() {
        cout << "\n" << hr << ":" << min << ":" << sec;
    }

    // Friend function for output stream (cout << time)
    friend ostream& operator<<(ostream&, Time);

    // Friend function for input stream (cin >> time)
    friend istream& operator>>(istream&, Time&);

    // Assignment operator overloading
    Time operator=(Time T) {
        hr = T.hr;
        min = T.min;
        sec = T.sec;
        return *this;                    // current object return kar rahe hain
    }
};

// << operator overloading (output)
ostream& operator<<(ostream &dout, Time T) {
    dout << "\n" << T.hr << ":" << T.min << ":" << T.sec;
    return dout;                         // cascading ke liye return
}

// >> operator overloading (input)
istream& operator>>(istream &din, Time &T) {
    din >> T.hr >> T.min >> T.sec;
    return din;                          // cascading ke liye return
}

int main() {
    Time t1, t2;

    cout << "Enter time (hr min sec): ";
    cin >> t1;                            // operator>> call hoga

    cout << "Entered time is: ";
    cout << t1;                           // operator<< call hoga

    t2 = t1;                              // assignment operator overload call hoga

    cout << "\nAfter assignment, time in t2 is: ";
    cout << t2;

    return 0;
}
