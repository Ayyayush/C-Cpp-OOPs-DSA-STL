#include <iostream>
#include <string.h>                 // C style string functions ke liye
using namespace std;

class person 
{
private:
    char name[30];
    int age;

public:
    /*   person(char n[],int a)
    {
        strcpy(name,n);
        age=a;
        cout<<"The member variables have been initialized "<<endl;

    }   // ye toh simple ho gya
    */

   // hume name conflict wala case krna h this pointer ko use krke

   person(char name[], int age)
   {
        strcpy(this->name, name);      // this keyword se name conflict nhi aayega
        this->age = age;
   }

   void show()
   {
        cout << "Name: " << name << ", Age: " << age << endl;
   }
};  // ✅ class ke baad semicolon zaroori hota hai

int main()
{
    char n[] = "Amit";
    person p(n, 25);   // constructor ke through object bana rahe

    p.show();          // display karne ke liye function call
    return 0;
}
