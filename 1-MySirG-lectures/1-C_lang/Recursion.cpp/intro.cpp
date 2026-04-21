#include <iostream>
using namespace std;

void f2();
void f1();
void f1()
{
cout<<"Hello"<<endl;
f2();
cout<<"Bye"<<endl;
}
 void f2()
 {
    cout<<"Yupp"<<endl;
    // f1();  isse infinite loop chalega
 }
  int main()
  {
    f1();
    return 0;
  }