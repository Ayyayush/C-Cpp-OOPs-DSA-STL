#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack {
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {                 
        arr = new int[size];          
        capacity = size;              
        top = -1;                     
    }

    void push(int val) {             
        if (top == capacity - 1) {    
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;             
    }

    void pop() {                     
        if (isEmpty()) {              
            cout << "Stack is Empty\n";
            return;
        }
        top--;                        
    }

    void peek() {                    
        if (isEmpty()) {              
            cout << "Stack is Empty\n";
            return;
        }
        cout << arr[top] << endl;     
    }

    bool isEmpty() {                 
        return top == -1;             
    }

    void reverseBrute() {            
        stack<int> stk;               
        while (!isEmpty()) {          
            stk.push(arr[top]);       
            pop();                    
        }

        while (!stk.empty()) {        
            push(stk.top());          
            stk.pop();                 
        }
    }


    void reversebetter()
    {
        
    }





 
    ~Stack() {                       
        delete[] arr;                 
    }
};

int main() {
    Stack s(5);

    s.push(3);     
    s.push(2);     
    s.push(1);     

    cout << "Original Stack:" << endl;  
    while (!s.isEmpty()) {             
        s.peek();                       
        s.pop();                        
    }

    s.push(3);                         
    s.push(2);                         
    s.push(1);                         

    cout << "\nReversed Stack:" << endl; 
    s.reverseBrute();                 
    
    while (!s.isEmpty()) {             
        s.peek();                       
        s.pop();                        
    }

    return 0;                           
}
