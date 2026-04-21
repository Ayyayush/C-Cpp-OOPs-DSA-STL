#include <iostream>
using namespace std;
int main()
{
  int a[3][3];
  int i, j, sum, k, temp;

  cout << "Enter the elements of array" << endl;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      cin >> a[i][j];

  for (i = 0, j = 1, k = 1; k <= 3; k++)
  {
    temp = a[i][j];
    a[i][j] = a[j][i];
    a[j][i] = temp;
    if (j - i == 1)
      j++;
    else
      i++;
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
   } 
 

  return 0;
}
