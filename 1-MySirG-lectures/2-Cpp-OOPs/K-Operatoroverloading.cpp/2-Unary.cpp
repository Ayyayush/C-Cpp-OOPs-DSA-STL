#include <iostream>
using namespace std;

class space {
    int x, y, z;

public:
    // 📥 Input lena: Teen variables set kar rahe hain
    void get_data(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    // 📤 Display function: Values print karne ke liye
    void display() {
        cout << "x = " << x << " ";
        cout << "y = " << y << " ";
        cout << "z = " << z << endl;
    }

    // ➖ Unary minus operator ko overload kar rahe hain
    void operator - () {
        // Har value ka sign reverse kar diya
        x = -x;
        y = -y;
        z = -z;
    }
};

// 🚀 Driver Code
int main() {
    space s;

    s.get_data(10, -20, 30); // Initial values set
    s.display();             // Pehle print karenge

    -s;                      // Unary minus apply (signs reverse)
    s.display();             // Reverse values print

    return 0;
}
