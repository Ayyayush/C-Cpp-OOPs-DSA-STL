#include <iostream>
using namespace std;
 
struct  Book
{ 
//  by default saare public hote h   
 private :

    int bookid;
    char title[20];
    float price;
   
   
   
public :

   void  inputBook()
 {
    cout<<"Enter bookid title and price "<<endl;
   cin>>bookid;

  cin.ignore();
 cin.getline(title,20);
 cin>>price;  
 }

   
  void displayBook()
  {
 cout<<endl;
 cout<<bookid<<" ";
 cout<<title<<" ";
 cout<<price<<endl;
  }

}; 
 


int main()
{
    Book b1={ 1, "C in depth ", 225.0f}; 
     Book b2; 
    
   
 
    // b1.bookid;   ye likhna invalid ho gya kyunki memeber variables ab private h
     b2.inputBook();
    b1.displayBook();
     b2.displayBook();
     cout<<endl;
     return 0;


}