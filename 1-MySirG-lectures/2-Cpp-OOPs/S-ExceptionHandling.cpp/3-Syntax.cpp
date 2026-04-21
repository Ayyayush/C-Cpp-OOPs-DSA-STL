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