#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("student.txt");   // Open file in write mode

    fout<<"Ayush"<<endl;
    fout<<"NIT Jamshedpur"<<endl;

    fout.close();                   // Close the file after writing

    ifstream fin("student.txt");    // Open file in read mode

    string name,college;

    fin>>name>>college;             // Read data from file

    cout<<"Name : "<<name<<endl;
    cout<<"College : "<<college<<endl;

    fin.close();                    // Close the file after reading

    return 0;
}2wd