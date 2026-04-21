#include <iostream>
using namespace std ;

#define INVALID_CAPACITY 1
#define EMPTY_ARRAY 2
#define INVALID_INDEX 3

class Array
{   
    private :                                  // 1st ques
    int capacity,lastIndex,m;
    int *ptr;                  // jab hum stl padhenge toh ye bhi sikhenge ki kaise ye pointer ko generalize karien taaki ye kisi bhi type ke data ka Array rakh sake
   // int *A=new int[m];             // dynamically creating/allocating new Array
    // delete[] arr                     // deallocating Array 

                  
    


    public :

   Array(int );                  // paramterized constructor banana h par aisa krte h ki isko bahar define krte h
   void createArray(int cap);         // robust programming ke liye bana rhe h ye .....agar constrcutor se initialize na ka rske toh isse kar sake
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        ~Array();
        int find(int);


  
};


// membership label se bahar define karenge


Array::Array(int cap)
{ // INTERVIW MEIN HUME YE BHI DHYAAN RAKHNA HOGA KI KHI CONSTRCUTOPR KE ARGUEMENT MEIN KOI NON NEGATIVE VALUE NA PAAS KR DE ISKE LIYE TRY CATCH BLOCK USE KARENEG
  try         // iss baat kaq ab aainda hamesha dhyaan dena hoga
  {
        if(cap<1)
          throw INVALID_CAPACITY;                      // yha INVALID_CAPACITY ki jageh kuch aur naam bhi de skte the jaise invalid capacity
      
 capacity=cap;                   // taaki pata chale ki Array itne size ka hona chahiye
 lastIndex=-1;                    // kyunki Array mein abhi koi value nhi rakhi h 
 ptr=new int[capacity];            // yha pe hum dynamically Array ko memory allocate kar rhe h
}
   
  catch(int e)
  {
    cout<<"\nInvalid capacity";
    ptr=NULL ;             // ye isliye taaki throw chalegha toh ptr mein koi Array nhi aayerga
  }
}
void Array::createArray(int cap)
{
    if(ptr==NULL)
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];
    }
    else
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        delete []ptr;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];
    }
}


 // 3RD QUESTION 
 bool Array :: isEmpty()                    
    {
       // Ab ye bhi  isliye check kr rhe h kyunki throw block chala hoga toh lastIndex mein garbage value hogi
       // agar try catch nhi bhi lagate h toh wha lagayenge jo isempty function ko call karega...kyunki jo function call karega usko ye pata hona chahiye ki ye invalid cap[acity return kar skta h
      try
      {
         if(ptr==NULL)                  
      throw INVALID_CAPACITY;
      return lastIndex==-1;                   // -1 hoga toh true return karega nhi toh false kyunki assignment operator laga h
      }
  catch(int e)
  {
    cout<<"\nInvalid capacity";
    ptr=NULL ;             // ye isliye taaki throw chalegha toh ptr mein koi Array nhi aayerga
      }
    }
    

    // 4TH QUESTION 
    // isme create Array naam ka function banane ko bola nhi h kyunki hum constructor bana chuke h 
    
bool Array::isFull()
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if( capacity==lastIndex+1)
        return true;
    else
        return false;
}
void Array::append(int data)               // iss baat ka hamesha dhyaan rakhna hoga ki data kab kab entyer nhi ho skta
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(isFull())
        cout<<"\nArray Overflow";
    else
    {
        lastIndex++;
        ptr[lastIndex]=data;
    }
}
void Array::insert(int index,int data)
{
    int i;
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex+1)
        cout<<"\nInvalid Index";
    else if(isFull())
        cout<<"\nArray Overflow";
    else
    {
        for(i=lastIndex;i>=index ;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;
    }
}
void Array::edit(int index,int newData)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty Array";
    else
        ptr[index]=newData;
    
}
void Array::del(int index)
{
    int i;
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty Array";
    else
    {
        for(i=index;i<lastIndex ;i++)
            ptr[i]=ptr[i+1];
        lastIndex--;
    }
}

int Array::get(int index)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(lastIndex==-1)
        throw EMPTY_ARRAY;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}
int Array :: count()
{
   if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(lastIndex==-1)
        throw EMPTY_ARRAY;
   int i,count=0;
  for(i=0;i<lastIndex;i++)
  count++;
 return count;
}
Array::~Array()             // memory deallocate destructor ke through kara rhe h
{
    if(ptr!=NULL)
        delete []ptr;
}
int Array::find(int data)
{
    if(ptr==NULL)
        return -1;
    
    for(int i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}

int main()
{
    Array obj(4);
    obj.append(10);
    obj.insert(0,20);
    obj.insert(0,30);
    for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    obj.del(1);

    cout<<endl;
    for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    cout<<endl;
    return 0;
}




