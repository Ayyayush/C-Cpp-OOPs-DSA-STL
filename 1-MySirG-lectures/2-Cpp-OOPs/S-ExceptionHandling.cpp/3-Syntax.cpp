#include <bits/stdc++.h>
using namespace std;

void f1()                 // try catch 
{
    int age, vote;
    try
    {
        cout << "Enter your age"<<endl;
        cin >> age;
        if (age < 18)
            throw 1; // yha pe  jo 1 likha h wo kisi bhi type ka ho skta hai
            // agar throw ho gya toh uske aage ka code nhi chlaega 

        cout << "\n Vote for your  favorite actor ";
        cout << "\n1.Amir khan";
        cout << "\n2.Shahrukh khan ";
        cout << "\n3.Akshay Kumar";
        cin >> vote;
        cout << "\nThank you for your vote ";
    }
    catch (int e)
    {
        cout << "You are not eligible to cast your vote " << endl;
    }
}


void f2()         // bina try ke catch 
{
 int balance=5000,amt;
 cout<<"Enter amount to withdraw";
 cin>>amt; 
 if(amt>balance)
 throw 1;                // bina try ke thorow likh skte h 
 // par catch likhne ke liye try blcok must h 
 // throw kiya h aur catch nhi kiya toh terminate ho jayega program 
 balance-=amt;
 cout<<"New balance is :"<<balance;

}

 // defining own exception class 
void f3()
{

}
int main()
{

    f1();
    try
    {

        int a, b;
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        if (b == 0)
            throw 1; // primitve non primitve kisi type ka data throw kr skte h ya object bhi
        int c = a / b;
        cout << "result is " << c << endl;
    }
    catch (int e)
    {
        cout << "Run time error" << endl;
    }

    int x, y;
    cout << "Enter two numbers " << endl;
    cin >> x >> y;
    int z = x + y;
    cout << "sum is " << z << endl;
    cout << endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

// Exception Handling using try-catch
void f1()
{
    int age,vote;

    try
    {
        cout<<"Enter your age : ";
        cin>>age;

        if(age<18)
            throw 1;          // Throw an exception.
                              // Code after throw is NOT executed.

        cout<<"\nVote for your favorite actor";
        cout<<"\n1. Amir Khan";
        cout<<"\n2. Shahrukh Khan";
        cout<<"\n3. Akshay Kumar";
        cout<<"\nEnter your choice : ";
        cin>>vote;

        cout<<"\nThank you for your vote"<<endl;
    }
    catch(int e)
    {
        // Control comes here if exception is thrown.
        cout<<"You are not eligible to cast your vote"<<endl;
    }
}

// Throwing exception without try
void f2()
{
    int balance=5000,amt;

    cout<<"Enter amount to withdraw : ";
    cin>>amt;

    if(amt>balance)
        throw 1;              // Exception can be thrown without try.

    // If exception is thrown,
    // remaining statements are skipped.

    balance-=amt;
    cout<<"New Balance = "<<balance<<endl;
}

// User-defined Exception Class
class InvalidAge
{
};

void f3()
{
    int age;

    cout<<"Enter age : ";
    cin>>age;

    if(age<18)
        throw InvalidAge();   // Throwing an object.

    cout<<"Eligible"<<endl;
}

int main()
{
    f1();
    try
    {
        int a,b;
        cout<<"\nEnter two numbers : ";
        cin>>a>>b;
        if(b==0)
            throw 1;          // Primitive type exception.
        cout<<"Result = "<<a/b<<endl;
    }
    catch(int e)
    {
        cout<<"Runtime Error : Division by Zero"<<endl;
    }

    try  // ! f2() has no try block.  Therefore, catch is written here.
    {
        f2();
    }
    catch(int e)
    {
        cout<<"Insufficient Balance"<<endl;
    }

    try  // !   Handling user-defined exception.
    {
        f3();
    }
    catch(InvalidAge)
    {
        cout<<"Invalid Age Exception"<<endl;
    }
    cout<<"\nProgram continues normally."<<endl;
    return 0;
}