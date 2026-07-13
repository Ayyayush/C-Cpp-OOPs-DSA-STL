#include <iostream>
using namespace std;

void q5();

int main()
{
    q5();

    return 0;
}

void q5()
{
    int n, m, i, L, P, sum, num, o, c;

    cout << "Enter the case" << endl;

    cin >> c;

    switch(c)
    {
        case 1:

            cout << "Enter the inputs" << endl;

            cin >> n >> m;

            L = n > m ? n : m;

            P = n * m;

            for(i = L; i <= P; i++)
            {
                if(i % n == 0 && i % m == 0)
                {
                    break;
                }
            }

            cout << "LCM is " << i << endl;

            break;

        case 2:

            cout << "Sum of digits" << endl;

            sum = 0;

            cin >> n;

            while(n)
            {
                sum = sum + n % 10;

                n = n / 10;
            }

            cout << "Sum of digits is " << sum << endl;

            break;

        case 3:

            cout << "Enter the length, breadth and height" << endl;

            cin >> n >> m >> o;

            cout << "Volume of cuboid is " << n * m * o << endl;

            break;

        case 4:

            cout << "Prime or not" << endl;

            cin >> n;

            num = n;

            if(n <= 1)
            {
                cout << "Not Prime" << endl;

                break;
            }

            for(i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    break;
                }
            }

            if(i == n)
            {
                cout << "Prime number" << endl;
            }
            else
            {
                cout << "Not prime" << endl;
            }

            break;

        default:

            cout << "Not valid case" << endl;

            break;
    }
}