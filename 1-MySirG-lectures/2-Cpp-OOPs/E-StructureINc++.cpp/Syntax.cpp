#include <iostream>
using namespace std;

struct Book
{ 
    // inko memory tab milegi jab structure variable banaoge
    // bina structure variable ka naam likhe member variable likha toh dikkat hogi
    // syntax:: structureVariable.Member variable
    // ye teeno memers variables h 
    int bookid;
    char title[20];
    float price;
}; 

struct Book inputBook()
// struct Book inputBook( struct book &b) // refernce variable se aise karenge
{
    struct Book b; // refernce use karenge toh isko nhi banayenge
    cout << "Enter bookid title and price " << endl;
    // cin >> b2.bookid  aisa nhi likh skte kyunki b2 main function mein bana h aur hum yha call kr rhe h
    // call krne ke liye alag variable bana hona chahiye

    cin >> b.bookid;
    // cin >> b.title;  // ye char type h toh input mein dikkkat hogi isse sirf pehla word input lega
    cin.ignore();      // ye input buffer ko ignore krne ke liye hota  h fflush ke jaise
    cin.getline(b.title, 20); // we use this to store string
    cin >> b.price; 
    // ab ye saara data b mein b2 mein raakhne ke liye return karo
    return b; // refernce hone pe 
}

void displayBook(struct Book b)
{
    cout << endl;
    cout << b.bookid << " ";
    cout << b.title << " ";
    cout << b.price << endl;
}

int main()
{
    struct Book b1 = {1, "C in depth", 225.0f}; // declare krte waqt initialise  ,,, f nhi lagayenge toh 8 byte representation hoga 4 ki jagah
    struct Book b2;
    b2.bookid=2;
    // b2.title="Hello world" ;         ye galat h kyunki b2.title array[0] represent kr rha h aur address me3in value store nhi karate 
    strcpy(b2.title,"Hello world");

    // yaha pe b1 ko 28 bytes memory milegi
    // b1 ki datatype book h aur ye structure variable h
    // b2 banaya toh wo bhi 28 bytes lega
    b2 = inputBook();
    // refernce se aise karenge inputBook(b2);
    displayBook(b1);
    displayBook(b2);
    cout << endl;
    return 0;
}
