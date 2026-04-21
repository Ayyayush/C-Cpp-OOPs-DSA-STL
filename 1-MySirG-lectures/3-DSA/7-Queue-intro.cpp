#include <bits/stdc++.h>
using namespace std;

class Queue {
    int capacity;
    int front, rear;
    int *ptr;

public:
    Queue(int size) {
        capacity = size;
        front = rear = -1; // Queue initially empty
        ptr = new int[size];
    }

    void insert(int val) {
        // Queue full hone ka condition check karna h
        if (rear == capacity - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        
        if (front == -1) { // Pehla element insert ho raha h toh front bhi set karna padega
            front = 0;
        }
        
        ptr[++rear] = val; // Rear ko badhakar value store karna
    }

    void remove() { // Function name delete se change kiya kyunki delete keyword hai
        if (front == -1 || front > rear)     // When front exceeds rear, it means all elements have been removed, and the queue is empty
        { // Queue empty hai
            cout << "Queue Underflow" << endl;
            return;
        }
        front++; // Front ko aage badhao
    }

    int getfront() {
        if (front == -1 || front > rear)
         {       
            cout << "Queue is empty" << endl;
            return -1;
        }
        return ptr[front];
    }

    int getback() {
        if (rear == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return ptr[rear];
    }

    bool isFull() {
        return rear == capacity - 1; // Queue full condition
    }

    bool isEmpty() {
        return front == -1 || front > rear; // Queue empty condition
    }
};

int main() {
    Queue q(5); // Queue ka size 5 liya
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);
    
    cout << "Front: " << q.getfront() << endl;
    cout << "Rear: " << q.getback() << endl;
    
    q.remove();
    cout << "Front after deletion: " << q.getfront() << endl;
    
    return 0;
}