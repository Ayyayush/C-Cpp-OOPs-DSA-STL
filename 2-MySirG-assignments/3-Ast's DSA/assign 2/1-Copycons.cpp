#include <iostream>
using namespace std;
// deep copy perform krni h 
// jab constructor bana ke usme ussi class ka object paas krte h toh usse copy constructor bolte h
class array
{
    new int=A[];
    cin>>n;
    cout<<"Enter the elements of the array "<<endl;

    public :
   array(array &);           //  deep copy krni hai .....copy constructor hai toh ussi class mein usi class ka reference 
    
//  COPY CONSTRUCTOR
   //  complex(complex C)
   // NOTE
    // YHA PE a BHI OBJECT H ISS LIYE ISKE LIYE BHI COPY CONSTRUCTOR CALL HO JAYEGA ISS LIYE KUCH AUR KRNA PADEGA KYUKNI YE INFINITE TIMES CHALEGA TOH ERROR 
    // ISS LIYE OBJECT MAT BANAO USKA REFERENCE DE DO

    /*array(array &c)     // c ke liye bhi copy constructor call na ho uske liye iska refernce de rhe h
    {
        
     //a=c1.a;     aise nhi likh skte kyunki c1 main function mein bana h
      // a variable c4 ka h
    
     a=c.a;
     b=c.b;

    }*/
    

} ;
array::array(array &arr)                // iska koi return type toh hai nhi 
{
capacity=arr.capacity;
lastindex=arr.lastindex;
if(arr.ptr==NULL)
ptr=NULL;             // agr arr.ptr mien null nhi hai toh deep copy hogi 
ptr=new int[capacity];
for(int i=0;i<=arr.lastindex;i++)
ptr[i]=arr.ptr[i];
}













  int main()
  {
    // complex c1(8,9),c2(4),c3(1,7);                     // constructor ko arguemnts aise hi dete  h
     //   complex c4=c1                                  ;  //  YE HAI COPY Constructor
                                                                   
    array a1,a2;
    array a3=a1;                                             // ye hai copy constructor 
     // YHA c1 as an arguement paas hota h
    a1.setData();
    a1.showData();
  
    return 0;
  }
