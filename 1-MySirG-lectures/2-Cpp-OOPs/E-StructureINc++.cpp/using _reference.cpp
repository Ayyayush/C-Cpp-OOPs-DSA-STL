#include <iostream>
using namespace std;



struct  Book
{  int bookid;
    char title[20];
    float price;
}; 
  
   void Book inputBook( struct book &b)  // return type ki jarurat nhi
 {
   struct Book b; // refernce use karenge toh isko nhi banayenge
    cout<<"Enter bookid title and price "<<endl;
   cin>> b.bookid;
 //   cin>>b.title; // ye char type h toh input mein dikkkat hogi
  cin.ignore(); // ye input buffer ko ignore krne ke liye ke liye hota  h fflush ke jaise;
 cin.getline(b.title,20);
 cin>>b.price; 
 
  // return b; // refernce hone pe iski jarurat nhi kyunki data directly b2 mein hi store hoga
 }


  void displayBook(struct Book b)
  {
 cout<<endl;
 cout<<b.bookid<<" ";
 cout<<b.title<<" ";
 cout<<b.price<<endl;
  }



int main()
{
    struct Book b1={ 1, "C in depth ", 225.0f}; //declare krte waqt initialise  ,,, f nhi lagayenge toh 8 byte representation hoga 4 ki jagah
    struct Book b2;
     b2=inputBook();
     // refernce se aise karenge inputBook(b2);
     displayBook(b1);
     displayBook(b2);
     cout<<endl;
     return 0;



return 0;
}