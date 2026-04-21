#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    int *ptr;                // dynamic memory allocation 

public:
    Stack() { // Default constructor
        capacity = 0;
        top = -1;
        ptr = NULL;
    }

    Stack(int size) { // Parameterized constructor
        capacity = size;
        top = -1;
        ptr = new int[size]; // Dynamically allocate memory for the stack
    }

    void createstack(int size) {
        if (ptr != NULL)
            delete[] ptr; // Free existing memory if any
        capacity = size;
        top = -1;
        ptr = new int[size]; // Allocate memory for the new stack
    }

    void push(int val) {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        top++;
        ptr[top] = val; // Assign value to the top index
    }

    int peek() {
        if (isEmpty()) {
            cout << "\nUnderflow";
            return -1; // Return an invalid value to indicate failure
        }
        return ptr[top]; // Return the value at the top
    }


    void pop() {
        if (isEmpty()) {
            cout << "\nUnderflow";
            return;
        }
        top--; // Decrement the top index
    }

    bool isFull() {
        return top == capacity - 1; // Check if the stack is full
    }

    bool isEmpty() {
        return top == -1; // Check if the stack is empty
    }


     void reverse()
    {
        while(!isEmpty())
        {
            cout << "Popping: " << peek() << endl;
            pop();
        }
    }

    void minelt()
    {
        int minimum=INT_MAX;
          while(!isEmpty())
        {
            minimum=min(peek(),minimum);
            pop();
        }

        cout<<minimum<<endl;

    }

    ~Stack() {
        if (ptr != NULL)
            delete[] ptr; // Free dynamically allocated memory
    }


   
   


};





int main() {
    // Create a stack of size 5
    Stack myStack(5);

    
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);


    // Display the top element
    cout << "Top element: " << myStack.peek() << endl;


    // Pop an element
    myStack.pop();


    // Display the top element again
    cout << "Top element after pop: " << myStack.peek() << endl;


    // Push another element
    myStack.push(40);


    // Check if the stack is full
    if (myStack.isFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;


   /* // Pop all elements
    while (!myStack.isEmpty()) {
        cout << "Popping: " << myStack.peek() << endl;
        myStack.pop();
    }

    // Check if the stack is empty
    if (myStack.isEmpty())
        cout << "Stack is empty" << endl;

       
*/
     //myStack.reverse();
     myStack.minelt();
    return 0;
}
