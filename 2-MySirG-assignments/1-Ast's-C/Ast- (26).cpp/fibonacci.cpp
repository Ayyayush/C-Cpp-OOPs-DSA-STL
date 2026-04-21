#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int x;
    cout << "Enter the term" << endl;
    cin >> x;
    cout << endl;
    fibonacci(x);
    return 0;
}

void fibonacci(int n)
{
    int i, a = -1, b = 1, c, fact = 1;

    if (n > 0)
    {

        for (i = 1; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
   fibonacci(n - 1);
        cout << c << "\n";
       
    }
}