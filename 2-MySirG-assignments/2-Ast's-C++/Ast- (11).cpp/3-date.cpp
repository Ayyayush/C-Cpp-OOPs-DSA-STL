#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;


     public :
     void SetDate()
     {
        cout<<"Enter the input for the date"<<endl;
        cin>>day>>month>>year;
     }
      void DisplayDate()
      {
        cout<<"The alloted date is "<<day<<"-"<<month<<"-"<<year<<endl;
      }
}; // class definition ke baad ye lagta h
int main()
{
    Date d;
    d.SetDate();
    d.DisplayDate();
    return 0;
}