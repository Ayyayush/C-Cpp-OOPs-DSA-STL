#include<iostream>
using namespace std;

class Test
{
    int x;

public:
    void setData(int a)
    {
        x=a;
    }

    void showData()
    {
        cout<<"x = "<<x<<endl;
    }
};

int main()
{
    Test obj;          // Object
    Test *p=&obj;      // Object pointer stores address of obj

    p->setData(10);    // Access member using ->
    p->showData();     // Calls member function using pointer

    return 0;
}