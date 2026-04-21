STRUCTURE :: 
it can be a collection of dissimilar elements 
it is a way to group variables 
defining strucuture is creating custom data type 



Language mein Structure (Hindi-English)
Structure ek user-defined data type hota hai jo alag-alag type ke variables ko ek hi naam ke under group karne ki facility deta hai.
Yeh tab useful hota hai jab hume complex data ko ek sath handle karna hota hai, jaise ek student ka naam, roll number, aur marks ko ek jagah store karna.

Syntax of Structure
c
Copy code
struct StructureName {
    DataType member1;
    DataType member2;
    // Aur members bhi add kar sakte hain
};


struct: Yeh ek keyword hai jo structure banane ke liye use hota hai.

StructureName: Structure ka naam.

member1, member2: Variables ya members jo structure ke andar hote hain.



#include <stdio.h>

//Example: Structure ko Define aur Use karna
//1. Structure Define Karna

struct Student {
    char name[50];
    int rollNo;
    float marks;
};


// 2. Structure ka Variable Banana aur Access Karna
int main() {
    // Student type ka ek variable bana rahe hain
    struct Student s1;

    // Structure ke members mein values dalna
    printf("Name dijiye: ");
    scanf("%s", s1.name);

    printf("Roll Number dijiye: ");
    scanf("%d", &s1.rollNo);

    printf("Marks dijiye: ");
    scanf("%f", &s1.marks);

    // Structure ke members ka access aur print karna
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollNo);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}


Key Features of Structure::

Heterogeneous Data: Structure alag-alag type ke data ko ek jagah store kar sakta hai (int, float, char, etc.).

Memory Allocation: Structure ke har member ke liye alag memory allocate hoti hai.

Nested Structure (Structure ke andar Structure)
Structure ke andar ek aur structure rakha ja sakta hai.

struct Address {
    char city[30];
    int pin;
};

struct Employee {
    char name[30];
    int empId;
    struct Address addr;  // Nested Structure
};



// NOTE::
struct book
{
int bookid;
char title [20];
float price;
};

int main()
{
    struct book b1={1,"C in depth",350.0};
    struct book b2;
    b2.bookid=2;        // book id ko aise kr skte h kyunmi bookid address nhi h 
    strcpy(b2.title,"Java");            // yaha pe title address h kyunki array h aur array assignment ke left side nhi ho skte h isliye aise kr rhe h 
    b2.price=40.0;
    return 0;
    {
        /* data */
    };
    
    
}

