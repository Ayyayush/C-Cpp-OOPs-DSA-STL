Advanced Concepts of Pointers in C: Base Address aur Extended Concepts
Pointers ke basic concepts ko samajhne ke baad, kuch advanced topics hain jo pointers ko aur bhi powerful aur flexible bana dete hain. In topics mein base address, pointer to array, pointer to structure, function pointers, aur dynamic memory allocation included hain.

1. Base Address and Pointers
Base Address
Base address ka matlab hai kisi array ya block of memory ka starting address. Jab hum kisi array ya data structure ka pointer banate hain, toh wo base address ko point karta hai.


Base address pointer ko array ya structure ke starting element ka memory location diya jata hai.
Example: Agar hum arr ko pointer se access karte hain, toh arr ka naam khud base address hai jo pehle element (arr[0]) ka address rakhta hai.
Example:
c
Copy code
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;  // Base address of array

    printf("Base address of array: %p\n", p);  // Print base address
    printf("Value at base address: %d\n", *p); // Dereferencing to get first element

    return 0;
}

Working:
Jab int *p = arr; likha jata hai, toh pointer p ko array ke pehle element (arr[0]) ka address diya jata hai.
p ke paas base address hai.
*p dereference karke array ke first element (10) ki value print karta hai.
Output:

less
Copy code
Base address of array: 0x7ffee42e3b28  (Example Address)  
Value at base address: 10  






2. Pointers to Arrays
Arrays aur pointers ka ek bahut gehra connection hai. Array ka naam apne aap base address ko point karta hai. Isliye arrays ko pointers ke saath operate karna easy ho jata hai.

Example:
c
Copy code
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;  // Array ka base address

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, *(p + i));  // Pointer arithmetic
    }

    return 0;
}
Working:
Array arr ka base address p ko assign kiya gaya hai.
*(p + i) pointer arithmetic ke zariye array ke ith element ki value ko dereference kar ke print karta hai.
Output:

mathematica
Copy code
Element 0: 10  
Element 1: 20  
Element 2: 30  
3. Pointer to Structure
Hum structures ko bhi pointers ke through access kar sakte hain. Structure ka pointer ek structure ke memory address ko store karta hai aur hum us pointer ko dereference karke structure ke members ko access karte hain.

Example:
c
Copy code
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s1 = {"Amit", 101, 89.5};
    struct Student *p = &s1;  // Pointer to structure

    // Accessing structure members through pointer
    printf("Name: %s\n", p->name);
    printf("Roll Number: %d\n", p->rollNo);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
Working:
struct Student *p = &s1; pointer p ko structure s1 ka address diya gaya hai.
p->name aur p->rollNo ke through structure ke members ko access kiya jata hai.
-> operator pointer ke through structure ke members ko access karne ke liye use hota hai.
Output:

yaml
Copy code
Name: Amit  
Roll Number: 101  
Marks: 89.50  








4. Function Pointers
Function pointers C mein ek advanced concept hai jisme hum functions ko pointers ki tarah treat karte hain. Function pointer ko use karke hum dynamically functions ko call kar sakte hain.

Example:
c
Copy code
#include <stdio.h>

// Function definition
void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)();  // Function pointer declaration
    funcPtr = greet;    // Function pointer ko greet function ke address se assign karna

    // Function pointer ko dereference karke function call karna
    funcPtr();

    return 0;
}
Working:
void (*funcPtr)(); yeh function pointer hai jo koi bhi function address store kar sakta hai jiska return type void ho.
funcPtr = greet; pointer ko greet function ka address diya gaya.
funcPtr(); pointer ko dereference karke greet function ko call kiya gaya.
Output:

Copy code
Hello, World!








5. Dynamic Memory Allocation using Pointers
C mein pointer ko dynamically memory allocate karne ke liye malloc(), calloc(), realloc(), aur free() ka use hota hai.

malloc(size): Memory allocate karta hai lekin initial values nahi deta.
calloc(count, size): Memory allocate karta hai aur initial values ko zero set karta hai.
realloc(ptr, size): Already allocated memory ko resize karta hai.
free(ptr): Memory ko free karta hai jab use nahi ho.
Example of malloc:
c
Copy code
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*) malloc(3 * sizeof(int));  // Dynamic memory allocation

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    for (int i = 0; i < 3; i++) {
        printf("Value at p[%d]: %d\n", i, p[i]);
    }

    free(p);  // Memory free karna
    return 0;
}
Working:
malloc(3 * sizeof(int)) 3 integers ke liye memory allocate karta hai.
Hum pointer p ke through dynamically allocated memory ko access kar rahe hain.
Memory use hone ke baad free(p) se memory ko release kiya gaya.
Output:

less
Copy code
Value at p[0]: 10  
Value at p[1]: 20  
Value at p[2]: 30  
Summary of Advanced Pointer Concepts:
Base Address: Array ka first element ka address pointer ke through access hota hai.
Pointer to Array: Arrays ko pointer ke through manipulate kar sakte hain.
Pointer to Structure: Structure ke members ko pointer ke zariye access kar sakte hain.
Function Pointers: Functions ko dynamically call karne ke liye function pointers ka use hota hai.
Dynamic Memory Allocation: Pointers ke zariye memory ko dynamically allocate aur deallocate kiya jata hai.