#include <iostream>
using namespace std;

void q4();
int main()
{

   q4();
   return 0;
}
void q4()
{   cout<<"This is next function call "<<endl;
    char a;
    cout<<"Enter the character"<<endl;
    cin>>a;
    switch (a)
    {
     case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
        cout<<"Vowels"<<endl;
        break;
        case 'b' ... 'd' :
         case 'f' ... 'h' :
          case 'j' ... 'n' :
           case 'p' ... 't' :
            case 'v' ... 'z':
        case 'B' ... 'D' :
         case 'F' ... 'H' : 
         case 'J' ... 'N' :
          case 'P' ... 'T' :
           case 'V' ... 'Z':
        cout<<"Consonants"<<endl;
        break;
        
        default:
        cout<<"Special characters"<<endl;
        break;

    }
}