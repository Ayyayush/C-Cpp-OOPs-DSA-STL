#include <iostream>
using namespace std;
int main()
{
    int a[] = {3, 5, 7, 4, 8, 4, 9};
    int i, j, temp = 0;
    int size = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}