// C++ program to reverse a string using the reverse()
// function
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Reverse the string using the reverse() function
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
// C++ Program to illustrate how to reverse the string using
// a loop
#include <algorithm> // for std::swap function
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Define a string
    string str = "Hello, World!";

    // Get the length of the string
    int n = str.length();

    // Loop through the first half of the string
    for (int i = 0; i < n / 2; ++i) {
        // Swap characters at position i and (n - i - 1)
        swap(str[i], str[n - i - 1]);
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
// C++ Program to illustrate how to reverse a string using
// reverse iterators
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Define a string
    string str = "Hello, World!";

    // Create a new string by using reverse iterators to
    // reverse the original string
    string reversed(str.rbegin(), str.rend());

    // Output the reversed string
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
