#include <iostream>
using namespace std;
// deep copy perform krni h 
// jab constructor bana ke usme ussi class ka object paas krte h toh usse copy constructor bolte h
class array
{
     int m;
     cout<<"Enter the size of the array "<<endl;
      cin>>m;
   int *A=new int[m];             // dynamically creating / allocating new array
  

    public :

    array()                 // explicit constructor bana diya toh isse hi kehte h deep copy
    {
        int i;
        for(i=0;i<m;i++)
        cin>>A[i];
        cout<<"The values have been initialised "<<endl; 
        

    }

    void showData()
    {
        int  i;  
        for(i=0;i<m;i++)            
        cout<<A[i]<<" ";   
    }
    
    

};



  int main()
  {
    // complex c1(8,9),c2(4),c3(1,7);                     // constructor ko arguemnts aise hi dete  h
     //   complex c4=c1                                  ;  //  YE HAI COPY Constructor
                                                                   
    array a1,a2;
 
     // YHA c1 as an arguement paas hota h
     
    a1.showData();
  
    return 0;
  }
