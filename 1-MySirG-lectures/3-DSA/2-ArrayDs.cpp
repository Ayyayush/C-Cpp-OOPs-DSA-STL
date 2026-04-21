ABOUT ARRAYS :=
it is linear collection of similar elements 
array elements are indexed
the name of the array is treated as a constant which represents address of the first byte of tha array
Accessing array elements is fast 
it takes constant time to access any item of the array if index is known 


int a[5];
a[2]=>*(a+2)
2[a]=>*(2+a)


WHEN TO USE :=
whenever group of related data is needed to be stored
when data is in a group of groups
jaisse aisa data store karo jo array type mein store hone ki wajeh se uspe operation perform krna easy ho jaye
jaise addtion hi perform krna h toh loop laga ke kr lenge


eg =:
to solve a problem to store marks of 100 students 


Suppose you have created  int a[100];  aur assume karo ki out of 100 tumne kuch store kr liye kyunki jaruri nhi ki saari values ek sath hi aaye store krne ke liye
NOW := 
1. How many elements are stored in the array......dekho hum count ++ se index toh count kr lete h par kitne values rakhe h ye pata nhi chalta 

2. If suppose 10 elements are stored and then i want to store one more element at index 2 can we do it as a[2]=data ? ; .......par ho skta h ki index 2 pe pehle se value raakhi hui ho aur jo value rakhi hui h wo ye kaise pata chalega ki garbaage value h ya user value h
3. How to guard against overflow or underflow
4. How to know that whether a value at a given index is valid or garbage
5. How to delete an element...........delete keyword se nhi hoga kyunki delete keyword memory release krta h element nhi 
// it becomes clear after this that array is not sufficient to handle this problem 
// Ye saari facilities paane ke liye hume array ko thoda modify krna padega code ke through


SOLUTION :=
instead of a[100];
class
{
    int a[100];
    int capacity;
    int count;
}

CONCLUSION :=
. Normal array is not good enouggh to efficiently handle such situations
. we need to keep extra information like capacity of arrat , index of last filled block , (assuming elementas are filled from left to right ) to track no of elts present in array  as well as where are the valid values and where are the garbage values 
. we need to create a array data structure in c++ 
. define a class array with appropriate numbers of variables and functions

class array
{
    int capacity;
    int lastindex;
    int *ptr;
  
}

abstract data type 
. properties 
capacity
lastindex
ptr 
                            // Array should be created dyanmically ...ptr= new int[size];
. methods 
create array()
append ()
insert ()
del() 
edit()
search ()
constructor 
destructor 