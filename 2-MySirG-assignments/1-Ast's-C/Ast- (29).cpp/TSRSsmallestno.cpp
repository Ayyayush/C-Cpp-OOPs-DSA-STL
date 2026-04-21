#include <iostream>
using namespace std;
int maxa(int);
int main()
{
    int n, maxelt;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    maxelt = maxa(n);
    cout << "Minimum element is " << maxelt << endl;
    return 0;
}

int maxa(int n)
{
    int i;
    int arr[n];
    // cin>>arr[];
    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < n; i++)

        cin >> arr[i];
    // double sum;
    {
        int size = sizeof(arr) / sizeof(arr[0]);
        int min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min)
            {

                min = arr[i];
            }
        }
        return min;
    }
}