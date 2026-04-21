// adress hamesha whole number hota h 
/* hum kbhi address kya  hoga  ye decide nbhi kr skte 
// REFRENCING
*/

A pointer C language ka ek special variable hota hai jo kisi aur variable ka memory address store karta hai.
 Yeh concept powerful hai kyunki pointers ke zariye hum memory ke saath directly interact kar sakte hain.



1. Pointer Ka Syntax aur Declaration

Pointer ko declare karne ke liye * (asterisk) symbol ka use hota hai.
Syntax:
DataType *pointerName;


Example:
c
Copy code
int *p;  // Yeh ek pointer hai jo integer type variable ka address store karega



2. Key Concepts of Pointers
Address-of Operator (&):
Kisi variable ka memory address nikalne ke liye & ka use hota hai.



Dereference Operator (*):
Pointer ke zariye us memory location ki value ko access karne ke liye * ka use hota hai.



3. Pointer Ka Example aur Working
Example:
c
Copy code
#include <stdio.h>

int main() {
    int x = 10;     // Normal integer variable
    int *p = &x;    // Pointer ko x ka address assign kar diya

    // Printing address and value
    printf("Address of x: %p\n", p);  // Pointer p ke andar x ka address hai
    printf("Value of x: %d\n", *p);  // Dereferencing: x ki value print karega

    return 0;
}


Working:
int x = 10;
Ek integer variable x banaya jiska value 10 hai.

int *p = &x;
Pointer p ko x ka address assign kiya (&x).
Ab p ke paas x ka address hai.

*p
Dereferencing ke zariye p ke address par jo value hai (10), usko access kiya.


Output::
Address of x: 0x7ffeeab38abc  (example memory address)  
Value of x: 10  



4. Null Pointer
Agar ek pointer ko kisi bhi valid memory address se initialize nahi kiya jata, toh usse NULL set karna chahiye to avoid garbage value.


Example:
c
Copy code
int *p = NULL;  // NULL pointer
if (p == NULL) {
    printf("Pointer is not pointing to any memory location.\n");
}




5. Pointer Arithmetic
Pointers par mathematical operations perform karne ke liye pointer arithmetic ka use hota hai:

Increment (++): Pointer ko agle memory location par shift karega.
Decrement (--): Pointer ko pichle memory location par shift karega.
Addition/Subtraction (+, -): Pointer ko specific number of memory blocks shift karega.
Example:
c
Copy code
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;  // Pointer ko array ke first element ka address diya

    printf("First element: %d\n", *p);
    p++;  // Pointer incremented
    printf("Second element: %d\n", *p);

    return 0;
}
Working:
Initially p array ke pehle element (arr[0]) ko point karta hai.
p++ pointer ko next memory location (second element) par shift karta hai.

Output:+
First element: 10  
Second element: 20  





6. Double Pointer (Pointer to Pointer)
Yeh ek pointer hota hai jo kisi aur pointer ka address store karta hai.

Example:
c
Copy code
#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;     // Pointer p x ka address rakhta hai
    int **pp = &p;   // Double pointer pp, p ka address rakhta hai

    printf("Value of x: %d\n", **pp);  // Dereferencing twice to get value of x

    return 0;
}
Working:
p me x ka address hai.
pp me p ka address hai.
**pp ke through x ki value access karte hain.
Output:
Value of x: 5 




7. Function Mein Pointers ka Use
(a) Pass by Reference:
Pointer ke zariye hum function ke andar directly variable ko modify kar sakte hain.

Example:
c
Copy code
#include <stdio.h>

void updateValue(int *p) {
    *p = 20;  // Dereferencing karke value update karenge
}

int main() {
    int x = 10;
    updateValue(&x);  // Function mein x ka address pass kiya
    printf("Updated value of x: %d\n", x);

    return 0;
}
Working:
updateValue function ko x ka address mila.
Function ne us address par jaake value ko 20 kar diya.
Output:
Updated value of x: 20 





8. Arrays aur Pointers
Array ka naam khud ek pointer ki tarah kaam karta hai jo first element ka address point karta hai.

Example:
c
Copy code
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, *(p + i));
    }

    return 0;
}


Working:
p array ke pehle element (arr[0]) ko point karta hai.
*(p + i) array ke ith element ki value dereference karke access karta hai.
Output:

mathematica
Copy code
Element 0: 10  
Element 1: 20  
Element 2: 30  



Summary of Pointers
Pointer Basics: Address store karta hai aur dereferencing se value access hoti hai.
Null Pointer: Uninitialized pointers ke liye NULL use karein.
Pointer Arithmetic: Memory blocks navigate karne ke liye.
Double Pointers: Ek pointer ke address ko store karte hain.
Functions with Pointers: Pass by reference ke liye.
