#include <iostream>
using namespace std;
void pfactor(int);
void pfactor(int n)
{
  int i, j, fact = 0;

  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      fact == i;
      for (j = 2; j < n - 1; j++)
      {
        if (fact % j == 0)
        {
          break;
        }
      }
      if (fact == j)
      {
        cout << "Prime factor " << j << endl;
      }
    }
  }
}
int main()
{
  int a, factor=0;
  cout << "Enter the number" << endl;
  cin >> a;
  pfactor(a);
  return 0;
}