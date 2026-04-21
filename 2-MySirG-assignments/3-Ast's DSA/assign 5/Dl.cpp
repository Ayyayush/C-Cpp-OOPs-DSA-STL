#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    Node* next;
    Node* prev;
    int data;
    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class doubly
{
    public:
    Node* head;
    Node* tail;

    doubly()
    {
        head=NULL;
        tail=NULL;
    }



void push_front(int val) {
    Node* newNode = new Node(val);                   // Create a new node with the given value

    if (head == NULL) {                              // If the list is empty
        head = newNode;                              // Set the new node as the head
        head->next = NULL;                           // Set the next pointer of the head to NULL
        head->prev = NULL;                           // Set the previous pointer of the head to NULL
        return;                                      // Return since we've added the node
    }

    Node* temp = head;                               // Temporary pointer to traverse or manage the list

    if (head->next == NULL) {                        // If there's only one node in the list
        newNode->next = head;                        // Link the new node to the existing head
        newNode->prev = NULL;                        // Set the previous pointer of the new node to NULL
        head->prev = newNode;                        // Set the previous pointer of the existing head to the new node
        head = newNode;                              // Update head to point to the new node
        return;                                      // Return as we've added the node
    }

    if (head->next != NULL) {                        // If there are multiple nodes in the list
        head = head->next;                           // Move head to the next node
        head->prev = newNode;                        // Set the previous pointer of the current head to the new node
        newNode->next = head;                        // Link the new node to the current head
        head = newNode;                              // Update head to point to the new node
    }
}


void push_back(int val) {
    Node* newNode = new Node(val);                   // Create a new node with the given value

    if (head == NULL) {                              // If the list is empty
        head = newNode;                              // Set the new node as the head
        head->next = NULL;                           // Set the next pointer of the head to NULL
        head->prev = NULL;                           // Set the previous pointer of the head to NULL
        return;                                      // Return since we've added the node
    }

    Node* temp = head;                               // Temporary pointer to traverse the list

    if (head->next == NULL) {                        // If there's only one node in the list
        head->next = newNode;                        // Set the next pointer of the head to the new node
        newNode->next = NULL;                        // Set the next pointer of the new node to NULL
        newNode->prev = head;                        // Set the previous pointer of the new node to the head
        tail = newNode;                              // Update the tail pointer to the new node
        return;                                      // Return as we've added the node
    }

    if (head->next != NULL) {                        // If there are multiple nodes in the list
        while (temp->next != NULL) {                 // Traverse to the last node
            temp = temp->next;                       // Move to the next node
        }

        temp->next = newNode;                        // Link the new node to the last node
        newNode->prev = temp;                        // Set the previous pointer of the new node to the last node
        newNode->next = NULL;                        // Set the next pointer of the new node to NULL
        tail = newNode;                              // Update the tail pointer to the new node
        return;                                      // Return as we've added the node
    }
}


void search()
{
    int c=0,key;
    cin>>key;
    if(head==NULL)
    return;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)                // agar yha pe semicolon laga diya toh condtion check nhi hoga par andar ka code execute ho jayega 
        {
        c++;
        break;
        }
        temp=temp->next;
    }
    if(c>0)
    cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;
}


void insert(int val) 
{
    int c = 0, pos, size = 0;                   // Variable initialization
    cin >> pos;                                 // Input position
    Node* newNode = new Node(val);              // Create a new node

    Node* temp = head;                          // Temporary pointer for traversal

    // Calculate the size of the linked list
    while (temp != NULL) 
    {
        size++;
        temp = temp->next;
    }

    // Check if position is valid
    if (pos > size) 
    {
        cout << "Invalid position!" << endl;    // Error message for invalid position
        return;
    }

    // If the linked list is empty
    if (head == NULL) 
    {
        newNode->next = NULL;                   // Set newNode's next to NULL
        newNode->prev = NULL;                   // Set newNode's prev to NULL
        head = newNode;                         // Set head to newNode
        return;
    }

    temp = head;                                // Reset temp to head

    // If inserting at the head (position 0)
    if (pos == 0) 
    {
        newNode->next = head;                   // Point newNode's next to head
        head->prev = newNode;                   // Update head's previous to newNode
        head = newNode;                         // Update head to newNode
        return;
    }

    // Traverse to the (pos - 1)th node
    while (c < pos - 1) 
    {
        temp = temp->next;
        c++;
    }

    // Insert the new node at the desired position
    newNode->next = temp->next;                 // Link newNode's next to temp's next
    if (temp->next != NULL) 
    {
        temp->next->prev = newNode;             // Update the previous of temp's next
    }
    temp->next = newNode;                       // Link temp's next to newNode
    newNode->prev = temp;                       // Update newNode's previous to temp
}


void pop_front()
{
    if(head==NULL)
    return ;
     Node* temp=head;

    if(head->next==NULL)
    {
        delete temp;
        head=NULL;
    }
    else
    {
      head=head->next;
      head->prev=NULL;
      temp->next=NULL;
      delete temp;
    }
   
}


void del() 
{
    int c = 0, pos, size = 0;                   // Variable initialization
    cin >> pos;                                 // Input position

    Node* temp = head;                          // Temporary pointer for traversal

    // Calculate the size of the linked list
    while (temp != NULL) 
    {
        size++;
        temp = temp->next;
    }

    // Check if position is valid
    if (pos >= size || pos < 0)                 // Position must be within valid range
    {
        cout << "Invalid position!" << endl;    // Error message for invalid position
        return;
    }

    // If the linked list is empty
    if (head == NULL) 
    {
        cout << "List is empty!" << endl;       // Error message for empty list
        return;
    }

    temp = head;                                // Reset temp to head

    // If deleting the head node (position 0)
    if (pos == 0) 
    {
        head = head->next;                      // Update head pointer
        if (head != NULL)                       // If list is not reduced to empty
        {
            head->prev = NULL;                  // Update prev pointer of new head
        }
        temp->next = NULL;                      // Isolate the old head
        delete temp;                            // Delete the old head
        return;
    }

    // Traverse to the (pos - 1)th node
    while (c < pos - 1) 
    {
        temp = temp->next;
        c++;
    }

    // Node to delete
    Node* todel = temp->next;
    temp->next = todel->next;                   // Update next pointer of (pos - 1)th node

    if (todel->next != NULL)                    // If not deleting the last node
    {
        todel->next->prev = temp;               // Update prev pointer of the next node
    }

    todel->next = NULL;                         // Isolate the node to delete
    todel->prev = NULL;                         // Isolate the node to delete
    delete todel;                               // Delete the node
}


void rotate() 
{
    int size = 0, pos, c = 0;                // Initialize size, position, and counter
    cin >> pos;                              // Input the position where rotation is needed

    if (head == NULL)                        // If the list is empty, no rotation is possible
        return;

    Node* temp = head;                       // Temporary pointer for traversal

    // Calculate the size of the linked list
    while (temp != NULL) 
    {
        size++;                               // Increment size as we traverse the list
        temp = temp->next;                    // Move to the next node
    }

    // Check if position is valid (within range)
    if (pos >= size || pos < 0)              // Position should be within valid range
    {
        cout << "Invalid position!" << endl;  // Error message for invalid position
        return;
    }

    temp = head;                             // Reset temp to head

    // Traverse the list to find the (size - pos)th node
    while (c < (size - pos - 1))             // We stop just before the rotation point
    {
        temp = temp->next;                    // Move temp to the next node
        c++;                                  // Increment counter
    }

    Node* nhead = temp->next;                // The new head will be the (size - pos)th node
    temp->next = NULL;                       // Disconnect the last part of the list

    Node* last = nhead;                      // Pointer to find the last node of the rotated list
    while (last->next != NULL)                // Traverse to the last node of the new list
    {
        last = last->next;                    // Move last to the next node
    }

    last->next = head;                       // Now the last node's next points to the original head
    head = nhead;                            // Update head to the new head
}


void pop_back()
{
    if(head==NULL)
    return ;
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node* todel=temp->next;
    temp->next=NULL;
    delete todel;
}
  
    void print()
    {
          Node* temp=head;
          while(temp!=NULL)
          {
            cout<<temp->data<<"->";
            temp=temp->next;
          }
          cout<<"NULL\n";
    }




};



int main()
{
doubly dll;
dll.push_front(5);
dll.push_front(4);
dll.push_back(6);
dll.push_back(7);
dll.print();
dll.pop_back();
dll.print();
return 0;
}