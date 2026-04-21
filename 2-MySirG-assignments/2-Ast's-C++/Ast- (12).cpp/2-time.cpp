#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    void setTime(int x, int y, int z)
    {
        hr = x;
        min = y;
        sec = z;
    }

    void showTime()
    {
        cout << endl
             << hr << ":" << min << ":" << sec;
    }

    //2nd question
    bool operator>(Time T)
    {
        if (hr > T.hr)
            return true;
        else if (hr < T.hr)
            return false;
        else if (min > T.min)
            return true;
        else if (min < T.min)
            return false;
        else if (sec > T.sec)
            return true;
        else
            return false;
    }

    //3rd question 
    Time operator++(int)
    { // Post increment
        Time temp = *this;
        sec++;
        min += sec / 60;
        sec = sec % 60;
        hr += min / 60;
        min = min % 60;
        return temp;
    }

    Time operator++()
    { // Pre increment
        sec++;
        min += sec / 60;
        sec = sec % 60;
        hr += min / 60;
        min = min % 60;
        return *this;
    }

    Time operator+(Time T)
    {
        Time temp;
        temp.hr = hr + T.hr;
        temp.min = min + T.min;
        temp.sec = sec + T.sec;
        temp.min += temp.sec / 60;
        temp.sec = temp.sec % 60;
        temp.hr += temp.min / 60;
        temp.min = temp.min % 60;
        return temp;
    }
};

int main()
{
    Time t1, t2, sum, post, pre;

    t1.setTime(2, 45, 50);
    t2.setTime(1, 30, 20);

    cout << "Initial Time 1: ";
    t1.showTime();

    cout << "\nInitial Time 2: ";
    t2.showTime();

    // Add two times
    sum = t1 + t2;
    cout << "\n\nAfter Addition: ";
    sum.showTime();

    // Post increment
    post = t1++;
    cout << "\n\nPost Increment t1 (old value): ";
    post.showTime();
    cout << "\nt1 after post increment: ";
    t1.showTime();

    // Pre increment
    pre = ++t2;
    cout << "\n\nPre Increment t2 (new value): ";
    pre.showTime();

    // Greater than check
    if (t1 > t2)
        cout << "\n\nt1 is greater than t2";
    else
        cout << "\n\nt2 is greater than or equal to t1";

    return 0;
}
