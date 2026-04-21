#include <iostream>
#include <cstring>				// strcpy() ke liye
using namespace std;

class Customer {
    int cust_id;				// Customer ID
    char name[50];				// Customer name
    char email[50];				// Customer email
    char mob[50];				// Customer mobile number

public:
    // Default Constructor
    Customer() {
        cust_id = 0;						// ID ko 0 se initialize kiya
        strcpy(name, "");					// name ko empty string se initialize
        strcpy(email, "");					// email ko empty string
        strcpy(mob, "");					// mobile bhi empty

        cout << "Customer instance variables have been initialised" << endl;
        cout << "Name: " << name << ", Email: " << email << ", Mobile: " << mob << endl;
    }

    // Parameterized Constructor
    Customer(int i) {
        cust_id = i;
        strcpy(name, "Not Provided");		// Default placeholder
        strcpy(email, "Not Provided");
        strcpy(mob, "Not Provided");

        cout << "Parameterized constructor called" << endl;
        cout << "Customer ID: " << cust_id << endl;
    }

    // Setter to update customer details
    void setData(const char* n, const char* e, const char* m) {
        strcpy(name, n);
        strcpy(email, e);
        strcpy(mob, m);
    }

    // Function to display customer details
    void showData() {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Mobile: " << mob << endl;
    }
};

int main() {
    Customer c1;							// Default constructor call
    Customer c2(245);						// Parameterized constructor call

    cout << "\nUpdating c1 details...\n";
    c1.setData("Amit", "amit@gmail.com", "9876543210");	// Setting data
    c1.showData();							// Showing updated data

    cout << "\nShowing c2 default data...\n";
    c2.showData();							// Showing default placeholder data

    return 0;
}
