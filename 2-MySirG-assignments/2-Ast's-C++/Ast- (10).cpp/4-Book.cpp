#include <iostream>
using namespace std;

class Book {
private:
    string book_1, book_2;        // Do book names
    int bookid;                   // Book ID (int le rahe hain)
    string title;                 // Book Title
    float price;                  // Book price (float)

public:
    // Default constructor
    Book()
     {
        book_1 = "";
        book_2 = "";
        bookid = 0;
        title = "";
        price = 0.0;
        cout << "The member variables have been initialised" << endl;
    }

    // Function to set book data
    void setBook(string abc, string def, int id, string t, float p) {
        cout << "Storing the values of the member functions..." << endl;
        book_1 = abc;
        book_2 = def;
        bookid = id;
        title = t;
        price = p;
    }

    // Function to display book data
    void showBook() {
        cout << "Book 1: " << book_1 << endl;
        cout << "Book 2: " << book_2 << endl;
        cout << "Book ID: " << bookid << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: ₹" << price << endl;
    }
};

int main() {
    Book c1;

    string str1, str2;
    int id;
    string title;
    float price;

    cout << "Enter first book name: ";
    getline(cin, str1);

    cout << "Enter second book name: ";
    getline(cin, str2);

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();                            // Clear newline from input buffer

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Book Price: ";
    cin >> price;

    c1.setBook(str1, str2, id, title, price);
    c1.showBook();

    return 0;
}
