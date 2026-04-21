/*
FRIEND FUNCTION
ye kbhi member function nhi hoga
par dusre class ka member function ho skta h




Friend function ek special function hota hai jo kisi class ka private aur protected members ko access kar sakta hai, bina us class ka member bane.

📌 Important Points:
✔ Class ke bahar define hota hai lekin private members ko access kar sakta hai.
✔ friend keyword ka use karke declare kiya jata hai.
✔ Object ke bina bhi function call ho sakta hai (agar static nahi hai).



NOTE:: 
Agar freind function absolute non mmeber function h 
// toh hum usse normal functionname()....aise invoke kr skte h 

Agar wo kisi aur class ka member function h then
invoke it using . operator       eg :: objectname.functionname();

Freinf function class ke members ko directly access nhi kr skta
it needs a object to access it's properties or methods



VERY IMPORTANT ::
Jitne agrs hum member function mein dete h freind ke liye usse ek jyada dete h
 kyunki caller object bhi as arguement paas ho jata h


 Various operators such as  << and >> can be defined only using freind
*/


🔹Defining a Friend Function
📌 Syntax::

class ClassName 
{
    friend returnType functionName(arguments); // ✅ Friend function declaration
};



⚡// Friend function ko class ke andar sirf declare kiya jata hai, implement class ke bahar hota hai.


🔹 Example: Accessing Private Data Using Friend Function
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int roll) {
        name = n;
        rollNumber = roll;
    }

    // Friend function declaration
    friend void showDetails(Student s);
};

// Friend function definition
void showDetails(Student s) {
    cout << "Name: " << s.name << ", Roll No: " << s.rollNumber << endl;
}

int main() {
    Student s1("Amit", 101); // ✅ Object bana rahe hain
    showDetails(s1); // ✅ Friend function private data access kar raha hai

    return 0;
}

