#include <iostream>
using namespace std;
int maxa(int);
int main()
{
    int n, maxelt;
    cout << "Enter the size of the array" << endl;
    cin >> n;
     maxa(n);
    
    return 0;
}

int maxa(int n)
{
    int i;
    int array[n];
    // cin>>arr[];
    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < n; i++)

        cin >> array[i];
        int size = sizeof(array) / sizeof(array[0]);
    // double sum;
     for (int i = 0; i < size - 1; i++)

    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] >= array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout<<"The array elements in ascending order are "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<  array[i] << " ";
    }
    return 0;
}