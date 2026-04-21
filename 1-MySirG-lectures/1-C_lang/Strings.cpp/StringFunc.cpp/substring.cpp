 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
     // syntax :: substring(position ,length)
    cout<< str.substr(1,4)<<endl;
    // length na dene pe ...sirf position dene pe poisition se end of the string print kar dega
    return 0;
 }