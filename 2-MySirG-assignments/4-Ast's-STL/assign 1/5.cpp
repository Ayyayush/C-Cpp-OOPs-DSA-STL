#include <iostream>
using namespace std;
template <typename M>
M max(M s)
{
    int A[s];

    for(int i=0;i<s;i++)
    cin>>A[i];
    int max=A[0];

    for(int i=0;i<s;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
           }
    }
    cout<<"The maximum element is "<<max<<endl;

}
int main()
{
  int size;
  cin>>size;
  max(size);
  return 0;
}