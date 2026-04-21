// CPP program to concatenate 
// two integers into one 

#include <iostream> 
#include <string> 
using namespace std; 

// Function to concatenate 
// two integers into one 
int concat(int a, int b) 
{ 

	int rem=a/10;
	string s1 = to_string(rem); 
	string s2 = to_string(b); 


	// Concatenate both strings 
	string s = s1 + s2; 

	// Convert the concatenated string 
	// to integer 
	int c = stoi(s); 

	// return the formed integer 
	return c; 
} 

int main() 
{ 
	int a,b=0;
	cin>>a; 

	cout << concat(a, b) << endl; 

	return 0; 
} 


