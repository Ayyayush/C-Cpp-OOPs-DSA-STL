#include <iostream>
using namespace std;
void q3();

int main()
{
   q3();
 
   return 0;
}
void q3()
{
    
    char x;
    cout<<"Enter the character"<<endl;
    cin>>x;
    switch (x)
    {
        case 'A' ... 'Z' :
        cout<<"Uppercase"<<endl;
        break;
     case 'a' ... 'z' :
        cout<<"Lowercase"<<endl;
        break;
        case '0' ... '9' :
        cout<<"Digits"<<endl;
        break;

      default:
        cout<<"Special characters"<<endl;
        break;



    }
    cout<<endl;

}