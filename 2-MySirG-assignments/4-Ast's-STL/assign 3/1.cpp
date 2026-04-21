#include <iostream>
#include <array>
using namespace  std ;


int main()
{
    array <int ,5> a1;        // kis bhi class template ka object banane pe usme data type specify krna padta hai 
    a1={5,78,55,24,22};
    array <double ,2> a2={3.5,6.9};

    for(int i=0;i<a1.size();i++)          // yha subscript operator se access kiya 
    cout<<a1[i]<<" ";
    cout<<endl;
     for(int i=0;i<2;i++)              // yha   at() se kiya 
     cout<<a2.at(i)<<" ";


     for(auto x:a1)                     // ye implicit operator se kiya 
     cout<<x<<" ";
     cout<<endl;
      
                                                      
array <int,5> a3={50,40,10,70,60};                     // ye expliciti operator se kiya        
array<int,5>::reverse_iterator rit ;                   // reverse mien values ko print krega
for(rit=a3.rbegin();rit!=a3.rend();it++)
cout<<*it<<" ";





    cout<<endl;
     return 0;


}