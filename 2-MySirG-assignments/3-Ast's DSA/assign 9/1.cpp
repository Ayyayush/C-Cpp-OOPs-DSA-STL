#include <bits/stdc++.h> 
using namespace std;
template <class T>
class Node 
{
    public:
    T data;
    Node* next;

    Node(T val)
    {
        data=val;
        Node* next=NULL;
    }

};

template<class T>
class Stack
{
    public:
    Node<T>* head;
    

    Stack()
    {
        head=NULL;

    }


    void push(T val)
    {
        Node<T>* newNode=new Node<T>(val);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }

    

    void top()
    {
        if(head==NULL)
        {
        cout<<"Stack is Empty\n"<<endl;
        return ;
        }

      
        return head->data;
    }


     void pop()
    {
        if(head==NULL)
        {
        cout<<"Stack is Empty\n"<<endl;
        return ;
        }
          
      Node<T>* temp=head;
        delete temp->data;
        temp=NULL;
    }
      

      void reverseBrute()
      {
        //we will use one extra stack for reversing
        stack<int>stk;
        while(!=isEmpty)
        {
            stk.push(s.top())
            s.pop();
        }


      }
       
    void

     ~Stack()
     {
        delete Stack;
     }



};
