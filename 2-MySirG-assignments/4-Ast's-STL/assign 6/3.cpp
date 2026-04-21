#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>

using namespace std;


void m1()
{
    // Create a vector to store str
    vector<string> str = {"561", "2", "388"};

    
    // Sort the str
    sort(str.begin(), str.end());

cout<<"Max is "<<str[2]<<endl;
}

   
void m2()

{
    list<int>l1={40,70,60,20,10,30};
    cout<<"Greatest element is "<<*max_element(l1.begin(),l1.end());           // stl mein function h max element 
    cout<<endl;
}

  int main() 
 {
m1();
m2();

}
