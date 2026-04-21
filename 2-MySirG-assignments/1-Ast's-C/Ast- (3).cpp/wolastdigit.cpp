#include <iostream>
using namespace std;
int main()
{
    int i, rem;
    cin >> i;
    {
      rem = i % 10;
    }
    i = i / 10;
    cout << i << endl;
    return 0;
}