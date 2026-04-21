#include <iostream>
using namespace std ;
strcut node 
{
    int data ;
    node* next;
};
class SLL
{
    private:
    node* start;

    public:
    SLL();
    void inserBt(int);
    void insertE(int);
    int search(int,int);
    void specified(int,int);
    void deleteB(int);
    void deleteE(int);
    void specidel(int,int);
    ~SLL();

    
};
SLL ::SLL()
{
    start==NULL;

}
void SLL::insertB(int value)
{
    if(ptr==NULL)
    throw ERROR1;
    node* newnode= new node();                   // naya node bana rahe h temp ki tarah 
    newnode->data=value;                          // iss naye node mein data ko rakh rhe h 
    newnode->next=start;                         // ?
    start=newnode;                              // start se uss naye node ko point kr rhe h 

}
void SLL::insertE(int value)
{
    if(ptr==NULL)
    throw ERROR1;
    node* newnode= new node();
    newnode ->data=value;
    newnode ->next=NULL;

}
int SLL::search(int data)
{

}
void SLL::specified(int position,int data)
{
 if(position<1)
 {
    cout<<"Wrong position "<<endl;
    return ;
 }
 if(position==1)
 {
    insertB(value)
    return ;
 }
    node* newnode= new node();
    newnode-> data=value;

    // AB YE SAB SE PEHLE JO POSITION BOLI H USSE EK NODE PEHLE TAK PAHUCHNA PADEGA 
     Node* temp = start;
        for (int i = 1; i < position - 1 && temp; ++i) {
            temp = temp->next;
        }

        // If the position is out of range, print an error message
        if (!temp) {
            cout << "Position out of range." << endl;
            delete newNode;
            return;
        }

        // Insert the new node at the desired position
        newNode->next = temp->next;
        temp->next = newNode;
    
}
void SLL::deleteB(int node)
{
if(!start)
{
cout<<"List is empty "<<endl;
return ;
}
node* temp=start;
start=start->start;
delete temp;
}
void SLL::deleteE(int node)
{

}
void SLL::specidel(int node)
{

}
SLL::~SLL()
{
    delete 
}

int main ()
{

}