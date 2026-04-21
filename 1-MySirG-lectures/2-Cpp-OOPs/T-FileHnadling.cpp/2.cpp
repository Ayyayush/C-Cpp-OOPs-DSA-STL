#include <fstream>
#include <iostream>
using namespace std;

void writing()
{
    // ofstream predefined class h
    ofstream fout; // ye ofstream class ka object h

    // fout.open("file1.txt", ios::out); // by default yhi hota h
    // out ios class mein static variable h
    // ofstream ka object agar file ko call krta h par agar exist nhi krti h toh create hogi firr open hogi

    fout.open("file1.txt", ios::out); // File ko open karte hain write mode mein

    char str[] = "MysirG Education Services";
    cout << "Hello" << endl; // monitor pe isliye open hota h kyunki cout ek output stream ko represent krta h
    fout << "hello" << endl; // isme destination file1.txt h unlike cout
    fout << str << endl;
    fout.close(); // saare operation ho jaane ke baad
}

void reading()
{
    ifstream fin;
    char str[100];
    fin.open("file1.txt", ios::in); // agar iss naam ki file exist nhi krti toh ye nayi file nhi bnayega

    if (!fin)
    {
        cout << "File not found" << endl;
    }
    else
    {
        // fin >> str; // read kr rhe h
        // cout << str << endl; // read krke screen pe dikha rhe h
        // screen pe dikhane se hi confirm hoga read kr paye h ya nhi
        // ye string mein jaha pe space aayega usse pehle tak print karega

        cout << fin.gcount() << endl; // 0 hoga starting mein

        fin.getline(str, 100); // ye space ho ya na ho sabkuch print kar dega
        cout << str << endl;

        // fin >> ch; // ye pehla character read karega
        // cout << ch << endl;

        char ch;
        fin >> ch;
        while (!fin.eof())
        {
            cout << ch;
            fin >> ch;
            ch = fin.get();
        }
    }

    fin.close();
}

int main()
{
    writing(); // File mein likhne ke liye function call
    reading(); // File se padhne ke liye function call
    return 0;
}
