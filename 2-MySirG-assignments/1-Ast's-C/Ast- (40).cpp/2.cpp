#include <bits/stdc++.h>
using namespace std;

bool search(char *str, char c)
{
    // Iterate through the string using a pointer
    while (*str != '\0')
    { 
        if (*str == c)
        {                // Check if the current character matches
            return true; // Character found
        }
        str++; // Move the pointer to the next character
    }
    return false; // Character not found
}


int main()
{
    // Input: string and character
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr); // Read the entire line as input

    char c;
    cout << "Enter a character to search for: ";
    cin >> c; // Read the character to search

    // Convert the string to a C-style character array
    char *str = &inputStr[0];

    // Call the search function and store the result
    bool found = search(str, c);

    // Output the result
    if (found)
    {
        cout << "Character '" << c << "' found in the string." << endl;
    }
    else
    {
        cout << "Character '" << c << "' not found in the string." << endl;
    }

    return 0;
}
