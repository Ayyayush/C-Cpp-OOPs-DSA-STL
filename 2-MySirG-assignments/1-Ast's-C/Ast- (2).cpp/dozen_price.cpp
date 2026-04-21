#include <iostream>
using namespace std;
int main()
{
    int cp,sp,profit,loss,tcp,tsp;
    cin>>cp>>sp;
    tcp=25*cp;
    tsp=25*sp;
    if(tsp>tcp)
    {
    profit=tsp-tcp;
    cout<< "Profit is"<<" "<<profit<<endl;
    }
    
   else if(tcp>tsp)
    {
    loss=tcp-tsp;
    cout<<"Loss is"<<" "<<loss<<endl;
    }
    return 0;
}