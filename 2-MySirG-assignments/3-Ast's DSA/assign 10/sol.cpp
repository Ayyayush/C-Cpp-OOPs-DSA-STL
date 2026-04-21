#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int capacity, front, rear;
    int *ptr;

public:
    Queue(int size)
    {
        capacity = size;
        front = -1;
        rear = -1;
        ptr = new int[size];
    }

    void insert(int val)
    {
        if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1) // First element insert kar rahe hain
            front = 0;

        ptr[++rear] = val; // Rear increment kar ke value insert kar rahe hain
    }

    void deletefront()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        front++; // Front ko aage badha rahe hain

        if (front > rear) // Queue empty ho gaya hai
        {
            front = rear = -1;
        }
    }

    int getfront()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return ptr[front];
    }

    int getback()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return ptr[rear];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear == capacity - 1);
    }
};

int main()
{
    Queue q(3); // Corrected initialization

    q.insert(1);
    q.insert(2);
    q.insert(3);

    while (!q.isEmpty())
    {
        cout << q.getfront() << " ";
        q.deletefront();
    }

    return 0;
}
