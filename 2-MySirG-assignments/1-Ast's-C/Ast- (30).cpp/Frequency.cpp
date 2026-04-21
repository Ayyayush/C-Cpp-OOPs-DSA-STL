#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 5, 4, 53, 6, 7, 8, 9, 1};
int c=1;
    int max = array[0];

    int size = sizeof(array) / sizeof(array[0]);
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

 for (int i = 0; i < size - 1; i++)

    {
        c=0;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                c++;
              break;
            }
        }
          cout<<"The frequency of " <<array[i] << " is " <<c+1<<endl;
    }
     

   
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
       
    }
    
    return 0;
} 
