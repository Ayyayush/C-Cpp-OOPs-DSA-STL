DOUBLY LINKED LIST :=
Isko padhne ke liye hume pehle singly linked list ki shortcomings pata honi chahhiye
SLL mein hum sirf ek hi direction mein ja skte h 
Agar hume kisi problem mein requirenent hai ki aage ke sath piche bhi move kr paye toh we need something new 
Here we need // doubly linked list :=

eg :
struct node  
{
    node *prev;               // isme previous node ka address hoga 
    int data;
    node *next;         // isme next node ka address hoga 
};
