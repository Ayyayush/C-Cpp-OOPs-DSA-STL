#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (int j = 2; j <= n; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }

        if (j == i)

            cout  << j << endl;

        
    }

    cout << endl;
    return 0;
}