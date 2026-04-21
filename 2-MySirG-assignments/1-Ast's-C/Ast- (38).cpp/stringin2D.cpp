#include <iostream>
using namespace std;
int main()
{ int i;
    char colour[4][10]={ "Blue", "Red", " Orange" , " Yellow"};
    string num[5]={"one ", "two ", "Three" ,"four" , "five"};
    for( i=0;i<4;i++)
    {
    cout<<colour[i]<<"\n";
    cout<<num[i]<<endl;
    }
    return 0;
}