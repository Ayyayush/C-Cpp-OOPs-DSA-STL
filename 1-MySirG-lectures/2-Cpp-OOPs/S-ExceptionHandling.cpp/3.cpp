NO IMPLICIT CONVERSION ::
For eg humne throw kiya int type ka error but catch float type ka ho toh yha pe koi conversion nhi hoga 

Implicit conversion doesn't happen for primitive data types 
eg:' Throwing a character constant will not be converted implicitly for catch and int type reciever 
If an exception is thrown but not caught program terminates abnormally 

eg::
void f2()
{
    int balance ==5000 ,amt;
    cout<<"Enter the amt"<<endl;
    cin>>amt;
    if(amt>balance)
    throw 1;
    balance -=amt;
    cout<<"New balance is "<<balance;

}
std::terminate() called by the c++ runtime when an exception is thrown and not caught 



DEFINING OWN EXCEPTION CLASS::
class Myexception:public exception
{
    public:
    const* char what() const throw()
    {
        return "This is my error mssg";
    }
};




#include <iostream>
#include <string>

using namespace std;

// Define a custom exception class
class MyException {
    string message;

public:
    // Constructor to initialize the exception message
    MyException(string msg) : message(msg) {}

    // Function to retrieve the exception message
    string what() const {
        return message;
    }
};

void checkAge(int age) {
    // Check conditions and throw exceptions using MyException
    if (age < 0) {
        throw MyException("Age cannot be negative!");
    } else if (age < 18) {
        throw MyException("You are not eligible, age must be 18 or above.");
    } else {
        cout << "You are eligible!" << endl;
    }
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        checkAge(age);
    } catch (const MyException &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}



