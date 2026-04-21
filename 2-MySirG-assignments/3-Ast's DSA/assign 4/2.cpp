#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class List
{
    Node* head;
    Node* tail;
    public:
    List()
    {
        head=NULL;
        tail=NULL;
    }



    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL) // If the list is empty
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void search(int val) {
        Node* temp = head; // Head se traverse karna shuru karte hain
        while (temp != NULL) { // Jab tak list ka end na aaye
            if (temp->data == val) { // Agar value milti hai
                cout << "Found: " << val << endl; // Value milne ka message
                return;
            }
            temp = temp->next; // Agle node par jaate hain
        }
        cout << "Value not found: " << val << endl; // Agar value nahi milti
    }


    // Delete the first node
    void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty. Nothing to delete.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) { // If the list becomes empty
            tail = NULL;
        }
    }


void deleteLastNode() {
    if (head == NULL) { // Agar list empty hai
        cout << "List is already empty." << endl; // Message print karte hain
        return; // Function terminate karte hain
    }

    if (head->next == NULL) { // Agar list mein sirf ek hi node hai
        delete head; // Head node ko delete karte hain
        head = NULL; // Head aur tail ko NULL set karte hain
        tail = NULL;
        return;
    }

    Node* temp = head; // Temporary pointer ko head par set karte hain
    while (temp->next != tail) { // Jab tak temp last se ek pehle node tak nahi pahunche
        temp = temp->next; // Agle node par move karte hain
    }

    delete tail; // Last node ko delete karte hain
    tail = temp; // Tail ko last se ek pehle node par shift karte hain
    tail->next = NULL; // Tail ka next NULL set karte hain
}



void deleteSpecificNode(int val) {
    if (head == NULL) { // Agar list empty hai
        cout << "List is empty. Cannot delete." << endl; // Message print karte hain
        return;
    }

    if (head->data == val) { // Agar node delete karne wali value head mein ho
        Node* temp = head; // Head ko temporary pointer mein store karte hain
        head = head->next; // Head ko next node par shift karte hain
        delete temp; // Purane head ko delete karte hain
        if (head == NULL) tail = NULL; // Agar list ab empty ho gayi, tail ko NULL set karte hain
        cout << "Node with value " << val << " deleted from the beginning." << endl;
        return;
    }

    Node* temp = head; // Temporary pointer head par set karte hain
    while (temp->next != NULL && temp->next->data != val) { // Jab tak value nahi milti ya list end nahi hoti
        temp = temp->next; // Agle node par move karte hain
    }

    if (temp->next == NULL) { // Agar value list mein nahi mili
        cout << "Node with value " << val << " not found." << endl;
        return;
    }

    Node* nodeToDelete = temp->next; // Node jisko delete karna hai
    temp->next = nodeToDelete->next; // Current node ke next ko delete hone wale node ke next par point karte hain
    if (nodeToDelete == tail) tail = temp; // Agar delete hone wali node tail thi, tail ko update karte hain
    delete nodeToDelete; // Node ko delete karte hain
    cout << "Node with value " << val << " deleted." << endl;
}


    void printList()

    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main()
{
List ll;
ll.push_back(5);
ll.push_back(2);
ll.push_back(8);
ll.push_back(6);
ll.search(6);

ll.printList();
ll.deleteFirst();
ll.printList();



ll.deleteLastNode();

ll.printList();

return 0;
}