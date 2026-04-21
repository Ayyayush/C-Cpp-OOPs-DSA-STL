#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>

using namespace std;
void m1() {
    int a;
    cin >> a;

    // Create a vector of size 'a' to store strings
    vector<string> words(a);

    // Input strings into the vector
    for (int i = 0; i < a; i++) {
        cin >> words[i];
    }

    // Sort the vector in lexicographical order
    sort(words.begin(), words.end());

    // Output the indices
    for (int i = 0; i < words.size(); i++) {
        cout << i << " ";
    }
    cout << endl;

    // Output the sorted words
    for (const auto &x : words) {
        cout << x << " ";
    }
    cout << endl;

    /*
    auto

Automatically deduces the type of x from the container words.
Here, words is a vector<string>, so x is deduced as string.


const

Specifies that x is a read-only reference to the elements in the vector.
This prevents modifying the elements of the vector inside the loop. If you attempt to modify x, the compiler will throw an error.


& (Reference)

Instead of copying each element of the vector, & makes x a reference to the original element in the vector.
This avoids unnecessary copying, which can improve performance, especially for large elements like strings.


Why const auto&?

Efficiency: By using a reference (&), you avoid copying each element.
Safety: By adding const, you ensure the loop doesn’t accidentally modify the original elements.*/
}



void m2()
{
    list <int> l1={90,30,80,100,20,10,50,60,20,40};              // hum sidghe list ko sort nhi kr skte kyunki sort ko random access chahiye par list bidirectional hota hai 
    vector <int> v1;
    for(auto x:l1)                    // vector mein list ki values insert kr rhe h 
        v1.push_back(x);
    
    sort(v1.begin(),v1.end());
    l1.clear();            // ye list ko empty kr diya 
    l1.insert(l1.begin(),v1.begin(),v1.end());          // ab usme vector ke through sorted elemenst insert kra rhe h 
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
}


  int main() 
 {
m1();
m2();
return 0;

}
