#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    
    Node(int val)              // constructor 
    {
      data=val;
      next=NULL;
    }


};

class List
{
    public:
    Node* head;
    Node* tail;
    List()                   // constructor 
    {
        head=NULL;
        tail=NULL;
    }


    void push_front(int val)
    {
      Node* newNode=new Node(val);
      if(head==NULL)
      {
        head=tail=newNode;
      }
      else
      {
        newNode->next=head;
        head=newNode;
      }
    }

    void push_back(int val)
    {
      Node* newNode=new Node(val);
       if(tail==NULL)
      {
        head=tail=newNode;
      }
     else{
        tail->next=newNode;
        tail=newNode;
     }
    }

    void printList()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<"->"<<endl;
    }
};

int main()
{
  List ll;
  ll.push_back(2);
  ll.push_front(5);
  ll.push_back(200);
  ll.push_front(500);
  
  ll.printList();
}
