#include <iostream>
using namespace std;

class Distance 
{
private:
    int km, m, cm;    // Distance ko kilometers, meters aur centimeters mein represent kiya gaya hai

public:
    // Default constructor
    Distance() {
        km = m = cm = 0;
    }

    // Parameterized constructor (optional, for testing)
    Distance(int km, int m, int cm) {
        this->km = km;
        this->m = m;
        this->cm = cm;
        normalize();                    // Normalize krte hi values sahi format mein aa jati hain
    }

    void normalize() {
        m += cm / 100;                 // 100 cm = 1 m
        cm %= 100;

        km += m / 1000;               // 1000 m = 1 km
        m %= 1000;
    }

    Distance operator+(Distance d) {
        Distance temp;
        temp.km = km + d.km;
        temp.m = m + d.m;
        temp.cm = cm + d.cm;
        temp.normalize();             // Result ko normalize karna zaroori hai
        return temp;
    }

    Distance operator--() {           // Pre-decrement: --obj
        Distance temp;
        if (km == 0 && m == 0 && cm == 0) {
            temp.km = km;
            temp.m = m;
            temp.cm = cm;
        } else {
            if (cm == 0) {
                cm = 100;            // Borrow 1 meter
                if (m == 0) {
                    m = 999;         // Borrow 1 kilometer
                    --km;
                } else {
                    --m;
                }
            }
            temp.cm = --cm;          // Pehle cm ko decrement kiya, then assign
            temp.m = m;
            temp.km = km;
        }
        return temp;
    }

    Distance operator--(int) {        // Post-decrement: obj--
        Distance temp;
        temp.km = km;
        temp.m = m;
        temp.cm = cm;

        if (!(km == 0 && m == 0 && cm == 0)) {    // Semicolon hata diya - logic ka error tha
            if (cm == 0) {
                cm = 100;
                if (m == 0) {
                    m = 999;
                    --km;
                } else {
                    --m;
                }
            }
            cm--;
        }

        return temp;
    }

    void display() {
        cout << km << " km " << m << " m " << cm << " cm" << endl;
    }
};

int main() {
    Distance d1(2, 500, 150);        // 2km 500m 150cm => will be normalized to 2km 501m 50cm
    Distance d2(1, 800, 80);         // 1km 800m 80cm

    Distance sum = d1 + d2;
    cout << "After addition: ";
    sum.display();

    --sum;                           // Pre-decrement
    cout << "After pre-decrement: ";
    sum.display();

    sum--;                           // Post-decrement
    cout << "After post-decrement: ";
    sum.display();

    return 0;
}
