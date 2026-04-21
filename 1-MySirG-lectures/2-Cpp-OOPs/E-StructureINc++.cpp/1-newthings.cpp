#include <iostream>
using namespace std;
 
 /* 
  new things in structure in  c++
  1>  use of struct keyword is optional after defining ....agr use kiya to bhi koi problem nhi hai
2> structure ki body ke  andar function bana skte h
 3> access specifier use kr skte h 
  */

struct  Book
{ 
    // ye book se related properties h
   
    int bookid;
    char title[20];
    float price;
    // wo functions jinko apna kaam krne ke liye book ki properties ki jarurat h wo book ke functions kehlayenge
    // so inputbook aur displaybook book ki body ke andar banna chahiye issi se enncapsulation implement hoga
  // ab displaybook aur inputbook bhi member variable ban gye h
  
   
   void  inputBook() // no need of writing struct  
 {
    cout<<"Enter bookid title and price "<<endl;
   cin>>bookid; // bookid uski h jisne call kiya

  cin.ignore();
 cin.getline(title,20);
 cin>>price;  // price uska h jisne usko call kiya
 }

   

  void displayBook()
  {
 cout<<endl;
 cout<<bookid<<" "; // memeber functions book ke memebers ko directly access kar skte h ye b1 ya b2 kiske liye chalenge ye depend karega ki kisne call kiya hai
 cout<<title<<" ";
 cout<<price<<endl;
  }

}; 
 


int main()
{
    Book b1={ 1, "C in depth ", 225.0f}; //declare krte waqt initialise  ,,, f nhi lagayenge toh 8 byte representation hoga 4 ki jagah
     Book b2; // no need of writing struct
    // yaha pe b1 ko 28 bytes memory milegi
   
 
   b1.bookid; //ye memeber variable h isliye structure variable likha hona chahiye pehle
     b2.inputBook(); // input b2 mein hi hoga ab toh arguement dene ki jarurat nhi h
    b1.displayBook();//ye memeber variable h isliye structure variable likha hona chahiye pehle ye bina b1 ya b2 ke call hi nhi honge
     b2.displayBook();//ye memeber variable h isliye structure variable likha hona chahiye pehle ye bina b1 ya b2 ke call hi nhi honge
     cout<<endl;
     return 0;


}