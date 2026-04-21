 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    string str;
    
    cout<<"Enter the string"<<endl;
    getline(cin,str);
      str.reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
 }