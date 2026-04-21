#include <iostream>
using namespace std;
int main()
{
    int cp,sp,profit=0,loss=0,profit_percent=0,loss_percent=0;
    cin>>cp>>sp;
    profit =sp-cp;
    loss=cp-sp;
    profit_percent=(profit*100)/cp;
    loss_percent=(loss*100)/sp;
    if(cp>sp)
    {
        cout<<"Loss percentage is "<<loss_percent<<" %"<<endl;

    }
    else{
        cout<<"Profit percentage is "<<profit_percent<<" %"<<endl;
    }
return 0;
}