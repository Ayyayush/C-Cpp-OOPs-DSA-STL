#include <iostream>
using namespace std;
int main()
{
    int n,table;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        table=n*i;
        cout <<n<<" * "<<i<< " = "<< table<<endl;
       }
    return 0;
}