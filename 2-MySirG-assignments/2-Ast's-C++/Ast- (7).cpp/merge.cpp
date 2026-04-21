#include <iostream>
using namespace std;
int main()
{
    int array1[] = {1, 2, 5, 4, 53, 6, 7, 8, 9, 1};
    int array2[] = {34, 6, 65, 45, 5, 42, 665, 54, 65, 4};
    int array3[20];

    int temp1, temp2;

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3);
    for (int i = 0; i < size1 - 1; i++)

    {
        for (int j = i + 1; j < size1; j++)
        {
            if (array1[i] >= array1[j])
            {
                temp1 = array1[i];
                array1[i] = array1[j];
                array1[j] = temp1;
            }
        }
    }
    for (int i = 0; i < size1; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
    // second array

    for (int i = 0; i < size2 - 1; i++)

    {
        for (int j = i + 1; j < size2; j++)
        {
            if (array2[i] >= array2[j])
            {
                temp2 = array2[i];
                array2[i] = array2[j];
                array2[j] = temp2;
            }
        }
    }
    for (int i = 0; i < size2; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;



    //printing third array
    cout << "The elements of the merged array are" << endl;

    for (int i = 0; i < 20; i++)
    {

        cout << array1[i] << " ";
        cout << array2[i] << " ";
    }
    return 0;
}