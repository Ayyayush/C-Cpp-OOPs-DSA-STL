#include <iostream>
using namespace std;
int main()
{
    int n, i, dig = 0;
    cout<<"Enter a number"<<endl;
    cin >> n;
    for(n++;;n++)
    {
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;//ye iss for loop se bahar le jayega
        }
    }
//jab i ki value n-1 se jyada hui tab loop se bahar aaye....ab check karo i ki jo last value hui
        if (i ==n )
        {
            cout << "Next prime is " <<n<< endl;
            break;//ye pehle for loop se bahar le jayega
        }}
    
    return 0;
}