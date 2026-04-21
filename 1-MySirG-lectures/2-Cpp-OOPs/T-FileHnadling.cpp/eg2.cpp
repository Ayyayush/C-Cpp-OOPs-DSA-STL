#include <iostream>
#include <fstream>      // File streams ke liye
#include <iomanip>      // setw() aur setprecision ke liye
using namespace std;

const char* filename = "BINARY"; // Binary file ka naam

int main() {
    // Step 1: Ek float array banaya with some data
    float height[4] = {175.5, 153.0, 167.25, 160.70};

    // Step 2: File open karna in write mode using ofstream
    ofstream outfile;
    outfile.open(filename, ios::binary); // Binary mode mein likhne ke liye

    // Check agar file open hui ya nahi
    if (!outfile) {
        cout << "Error in opening file for writing!" << endl;
        return 1;
    }

    // Step 3: Write the entire array to file in binary format
    outfile.write((char*) &height, sizeof(height)); // Array ko char* mein cast karke write kiya
    outfile.close(); // File close kar di after writing

    // Step 4: Array ko reset kar diya to verify ki read sahi se ho raha hai
    for (int i = 0; i < 4; i++)
        height[i] = 0;

    // Step 5: File open kiya in read mode using ifstream
    ifstream infile;
    infile.open(filename, ios::binary); // Binary mode mein read karne ke liye

    // Check agar file open hui ya nahi
    if (!infile) {
        cout << "Error in opening file for reading!" << endl;
        return 1;
    }

    // Step 6: Read kiya pura array file se
    infile.read((char*) &height, sizeof(height)); // Binary read with cast
    infile.close(); // File close

    // Step 7: Read kiya hua data print karna
    cout << "Heights read from binary file:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << left << setw(10) << fixed << setprecision(2) << height[i] << endl;
    }

    return 0;
}
