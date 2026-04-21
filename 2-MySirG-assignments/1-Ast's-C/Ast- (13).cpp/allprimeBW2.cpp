#include <iostream>
using namespace std;
int main()
{
    int n,m, i, j,L;
    cin >> n>>m;
    L=n>m?n:m;
    int S=n<m?n:m;
    for (int j = S; j <= L; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }

        if (j == i)

            cout << "Prime No " << j << endl;

        
    }

    cout << endl;
    return 0;
}