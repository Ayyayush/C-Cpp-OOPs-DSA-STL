
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 5, 4, 53, 6, 7, 8, 9, 1};

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
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
/*#include <iostream>
using namespace std;

int main()
{
     int temp,n,i;
     cout<<"Enter the size of the array"<<endl;
     cin>>n;
    int array[n];
    cout<<"Enter the elements of the array "<<endl;
   for (i = 0; i<n; i++)
   cin>>array[i];
   {
   

   int max = array[n-2];
    int min=array[n-3];
   
    
   int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size - 1; i++)

    {
        for (int j = i + 1; j < size; j++)
        {
                temp = max;
                max = min;
                min = temp;
            
         }}
        
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
   }
       
    return 0;
}
