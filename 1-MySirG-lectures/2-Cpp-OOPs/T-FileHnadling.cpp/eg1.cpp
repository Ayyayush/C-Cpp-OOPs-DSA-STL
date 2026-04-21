#include <bits/stdc++.h>
using namespace std;

void fileHandlingExample() {
    // Step 1: Write to file using ofstream
    ofstream outFile("sample.txt"); // File open in write mode

    if (!outFile) {
        cout << "File can't be opened for writing!\n";
        return;
    }

    outFile << "Hello, this is a test file.\n";
    outFile << "File handling in C++ is easy!\n";
    outFile.close(); // File close karna zaroori hai

    // Step 2: Read from file using ifstream
    ifstream inFile("sample.txt"); // File open in read mode

    if (!inFile) {
        cout << "File can't be opened for reading!\n";
        return;
    }

    string line;
    cout << "Reading from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

int main() {
    fileHandlingExample();
    return 0;
}
