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
    Test *p;                     // Object pointer

    p = new Test;                // new creates object in Heap & returns its address

    p->setData(100);
    p->showData();

    // If we end the program here without delete,
    // the Heap memory allocated by new remains unreleased.
    // This causes a Memory Leak.

    delete p;                    // Releases Heap memory

    // Good Practice:
    p = nullptr;                 // Pointer no longer points to deleted memory

    return 0;
}