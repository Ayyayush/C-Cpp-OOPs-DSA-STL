#include <iostream>
using namespace std;
template <typename S>

S sort(S a)
{
    int A[a],temp;
    for(int i=0;i<a;i++)
    cin>>A[i];

   
     for (int i = 0; i < a; i++)

    {
        for (int j = i + 1; j < a; j++)
        {
            if (A[i] > A[j])
            {
                 temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

   for(int i=0;i<a;i++)
  cout<<A[i]<<" ";
  
}
int main()
{
 int x;
 cin>>x;
 sort(x);
 return 0;
}