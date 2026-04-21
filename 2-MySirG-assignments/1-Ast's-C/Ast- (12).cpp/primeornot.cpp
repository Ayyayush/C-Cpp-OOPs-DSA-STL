#include <iostream>
using namespace std;
int main()
{
    int n, i, dig = 0;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
//jab i ki value n-1 se jyada hui tab loop se bahar aaye....ab check karo i ki jo last value hui
        if (i ==n )
        {
            cout << "No is prime" << endl;
        }
        else
        {
            cout << "No is not prime" << endl;
        }
    
    return 0;
}