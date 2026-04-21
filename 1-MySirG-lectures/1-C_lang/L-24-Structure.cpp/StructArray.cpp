

Array of Structures
Agar hume ek se zyada records store karna ho, toh structure ka array bana sakte hain.

struct Student students[5];  // 5 students ke liye structure array




Advantages of Structure
Data Organization: Alag-alag type ka related data logically organize karne ke liye useful.

Reusability: Ek baar structure define karke baar-baar use kar sakte hain.

Expandable: Agar zyada data store karna ho, toh naye members add karna easy hai.




Structure Initialization, Access, aur Use 

Structure ko banane ke baad hume usse initialize karna padta hai (members ko values dena) aur phir unhe access karke use karte hain.


1. Structure Initialization
Structure ko initialize karne ke do tareeqe hote hain:

(a) Direct Initialization
Structure ke members ko values define karte waqt hi assign karna.

c
Copy code
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s1 = {"Amit", 101, 89.5};  // Initialize directly              // dequence mein hi krna padta h 
    return 0;
}


(b) Member-wise Initialization
Structure variable banane ke baad ek-ek member ko value assign karna.

c
Copy code
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s1;

    // Member-wise initialization
    strcpy(s1.name, "Amit");  // Strings assign karne ke liye strcpy() use hoti hai
    s1.rollNo = 101;
    s1.marks = 89.5;

    return 0;
}


2. Accessing Structure Members
Structure ke members ko access karne ke liye dot operator (.) ka use hota hai. Syntax hai:

structureVariableName.memberName;

Example:
c
Copy code
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s1 = {"Amit", 101, 89.5};

    // Access and print members
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNo);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}


3. Using Structure with Array
Agar ek se zyada records (jaise multiple students) store karne hain, toh structure array ka use hota hai.

c
Copy code
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[2];  // Structure array for 2 students

    // Initialize first student
    strcpy(students[0].name, "Amit");
    students[0].rollNo = 101;
    students[0].marks = 89.5;

    // Initialize second student
    strcpy(students[1].name, "Priya");
    students[1].rollNo = 102;
    students[1].marks = 92.0;

    // Access and print data
    for (int i = 0; i < 2; i++) {
        printf("Student %d Details:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}



Pass by Value
Is method mein, structure ka ek copy function ko pass kiya jata hai.
Function us copy par kaam karta hai, lekin original structure variable change nahi hota.

Example:
c
Copy code
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

// Function jo structure ko value ke form mein leta hai
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {"Amit", 101, 89.5};

    // Function ko structure pass karna
    printStudent(s1);

    return 0;
}


Working Explanation:
struct Student s1 structure variable banaya aur initialize kiya.
printStudent(s1) ke andar s1 ki ek copy bani aur function ko pass hui.
Function s par kaam karta hai (copy of s1), lekin s1 ki original value change nahi hoti.
Limitation:
Agar aapko structure ke data ko modify karna hai, toh pass by value kaam nahi karega. Is case mein, pass by reference use hota hai.




2. Pass by Reference
Is method mein, structure ka memory address function ko pass kiya jata hai.
Function directly original structure ke members ko modify kar sakta hai.

Example:
c
Copy code
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

// Function jo structure ke pointer ko leta hai
void updateMarks(struct Student *s) {
    s->marks = 95.0;  // Pointer dereferencing ke through update
}

int main() {
    struct Student s1 = {"Amit", 101, 89.5};

    // Function ko structure ka address pass karna
    updateMarks(&s1);

    // Updated marks print karna
    printf("Updated Marks: %.2f\n", s1.marks);

    return 0;
}
Working Explanation:
struct Student s1 structure variable banaya aur initialize kiya.

updateMarks(&s1) ke andar s1 ka memory address function ko pass kiya gaya.

Function mein:

struct Student *s ek pointer hai jo s1 ko point karta hai.
s->marks ke through, directly s1.marks ko update karte hain.
Function ke baad, s1.marks ki updated value visible hoti hai.

Key Points of Pass by Reference
Memory Efficient: Copy banane ki zarurat nahi.
Direct Modification: Original structure ke members modify ho sakte hain.
Pointer Syntax: -> operator ka use hota hai.


Comparison of Pass by Value vs Pass by Reference
Aspect	Pass by Value	Pass by Reference
Data Modification	Original data change nahi hota	Original data modify hota hai
Performance	Zyada memory use hoti hai	Kam memory use hoti hai
Usage	Jab sirf data access karna ho	Jab data ko modify karna ho😊








Summary
Initialize karna: Direct ya member-wise.
Access karna: Dot operator (.) ka use.
Array mein use: Multiple records ke liye.
Functions ke saath: Pass by value ya pass by reference.








