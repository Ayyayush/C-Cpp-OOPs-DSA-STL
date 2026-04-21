#include <bits/stdc++.h>
using namespace std;
string convert(char *str)
{
    string result; // To store the converted string
    while (*str != '\0')
    { // Loop until the null terminator
        if (*str >= 'A' && *str <= 'Z')
        {                        // Check if the character is uppercase
            result += *str + 32; // Convert to lowercase
        }
        else
        {
            result += *str; // Append as is for non-uppercase characters
        }
        str++; // Move to the next character
    }
    return result;
}

int main()
{
    string st;
    cout << "Enter a string: ";
    getline(cin, st); // Read the entire string input

    char *str = &st[0];      // Get pointer to the string
    string s = convert(str); // Convert the string to lowercase

    cout << "Converted string: " << s << endl; // Output the result
    return 0;
}
