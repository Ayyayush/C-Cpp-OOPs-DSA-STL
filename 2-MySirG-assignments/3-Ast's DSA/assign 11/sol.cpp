#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (rear == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue underflow\n";
            return;
        }

        Node *temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    int frontelt()
    {
        if (isEmpty())
        {
            cout << "Queue underflow\n";
            return -1;
        }
        return front->data;
    }

    int back()
    {
        if (isEmpty())
        {
            cout << "Queue underflow\n";
            return -1;
        }
        return rear->data;
    }

    bool isEmpty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.isEmpty())
    {
        cout << q.frontelt() << " -> ";
        q.pop();
    }
    return 0;
}
