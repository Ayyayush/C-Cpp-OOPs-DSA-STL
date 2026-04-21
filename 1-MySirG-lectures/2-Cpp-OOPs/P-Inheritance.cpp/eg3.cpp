#include <iostream>
using namespace std;

// 🧑‍🎓 Base Class: Student
class Student {
protected:
    int rollno; // student's roll number

public:
    void get_roll(int r) {
        // roll number ko set kar rahe hain
        rollno = r;
    }

    void put_roll() {
        // roll number ko print kar rahe hain
        cout << "Roll Number = " << rollno << endl;
    }
};

// 🧪 Derived Class: Test (inherits Student)
class Test : public Student {
protected:
    float sub1, sub2; // 2 subjects ke marks

public:
    void get_marks(float m1, float m2) {
        // dono subjects ke marks ko set kar rahe hain
        sub1 = m1;
        sub2 = m2;
    }

    void put_marks() {
        // marks display kar rahe hain
        cout << "Marks in sub1 = " << sub1 << endl;
        cout << "Marks in sub2 = " << sub2 << endl;
    }
};

// 🏆 Derived Class: Result (inherits Test)
class Result : public Test {
    float total; // total marks

public:
    void display() {
        // total marks calculate kar rahe hain
        total = sub1 + sub2;

        // pehle roll number print hoga (Student class ka)
        put_roll();

        // phir subjects ke marks (Test class ka)
        put_marks();

        // last mein total marks
        cout << "Total = " << total << endl;
    }
};

// 📌 Driver Code
int main() {
    Result student1;

    // roll number assign
    student1.get_roll(111);

    // marks assign
    student1.get_marks(75.0, 59.5);

    // display all info
    student1.display();

    return 0;
}
