#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;
class hotel
{
    int floor;
    int roomno;
    string roomtype;
    int price;

    public :
    hotel()   // constructor
    {
        floor=0;
        roomno=00;
        roomtype="null";
        price=0;
        cout<<"The member variables have been initialised "<<endl;
    }
  void enter()
  {
    cin>>floor;
    cin>>roomno;
    getline(cin,roomtype);
    cin>>price;
    cout<<"The values have been entered "<<endl;
  }
    void showchart()
    {
        cout<<"Displaying the details "<<endl;
        cout<<floor<<endl;
        cout<<roomno<<endl;
        cout<<roomtype<<endl;
        cout<<price<<endl;
    }


};
int main()
{
    hotel h;
    h.enter();
    h.showchart();
    return 0;
}