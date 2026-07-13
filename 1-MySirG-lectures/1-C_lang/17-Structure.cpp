/**
 * ! STRUCTURES IN C LANGUAGE
 * 
 * Structure
 * Saurabh Shukla (MySirG)
 * 
 * ! AGENDA
 * 1. Introduction to Structure
 * 2. Primitive and Non Primitive Datatypes
 * 3. Defining Structure
 * 4. Declaring Structure Variable
 * 5. Initializing Structure Variable During Declaration
 * 6. Initializing Structure Members After Declaration
 * 7. Taking Input From User
 * 8. Structure Array
 * 9. Function Returning Structure
 * 10. Function Call By Passing Structure
 * 11. Structure Pointer
 * 
 * ---------------------------------------------------
 * ! INTRODUCTION TO STRUCTURE
 * ---------------------------------------------------
 * structure can be a collection of dissimilar elements
 * 
 * structure is a way to group variables
 * 
 * defining structure means creating custom datatype
 * 
 * ! DISSIMILAR ELEMENTS
 * dissimilar means different types of data
 * 
 * example:
 * int
 * char
 * float
 * 
 * ye sab ek hi structure ke andar ho sakte hain
 * 
 * ! WHY DO WE NEED STRUCTURE ?
 * array sirf similar type data store karta hai
 * 
 * example:
 * int arr[10];
 * 
 * real life entities mein different type ka data hota hai
 * 
 * example:
 * Student
 * Name -> string
 * Roll No -> int
 * Marks -> float
 * 
 * in sab ko ek group mein rakhne ke liye
 * structure use karte hain
 * 
 * ! REAL LIFE EXAMPLES
 * Student
 * Employee
 * Customer
 * Book
 * Account
 * 
 * ! BOOK EXAMPLE
 * Book Id
 * Book Name
 * Price
 * 
 * logically ye sab milkar
 * ek Book entity ko represent karte hain
 * 
 * ---------------------------------------------------
 * ! PRIMITIVE AND NON PRIMITIVE DATATYPES
 * ---------------------------------------------------
 * Primitive Datatypes:
 * int
 * char
 * float
 * double
 * 
 * ! PRIMITIVE DATATYPE
 * language ke built in datatypes
 * 
 * compiler inko directly samajhta hai
 * 
 * ! NON PRIMITIVE DATATYPE
 * user defined ya custom datatype
 * 
 * examples:
 * Book
 * Student
 * Employee
 * Customer
 * 
 * ! IMPORTANT
 * structure banakar hum khud ka datatype bana sakte hain
 * 
 * isliye structure ko:
 * custom datatype
 * user defined datatype
 * non primitive datatype
 * 
 * bhi bolte hain
 * 
 * ---------------------------------------------------
 * ! DEFINING STRUCTURE
 * ---------------------------------------------------
 * structure define karna matlab
 * datatype banana
 * 
 * Syntax:
 * 
 * struct Book
 * {
 *      int bookid;
 *      char title[20];
 *      float price;
 * };
 * 
 * ! EXPLANATION
 * struct -> keyword
 * Book -> structure name
 * 
 * bookid
 * title
 * price
 * 
 * ye sab member variables hain
 * 
 * ! MEMBER VARIABLES
 * structure ke andar declare variables ko
 * member variables kehte hain
 * 
 * ! IMPORTANT
 * structure define karne se memory allocate nahi hoti
 * 
 * structure definition sirf datatype create karti hai
 * 
 * ! INTERVIEW QUESTION
 * Does structure definition allocate memory?
 * 
 * Answer:
 * No
 * structure definition sirf datatype create karti hai
 * memory tab allocate hoti hai
 * jab structure variable create karte hain
 * 
 * ---------------------------------------------------
 * ! GLOBAL AND LOCAL STRUCTURE
 * ---------------------------------------------------
 * structure definition function ke bahar bhi ho sakti hai
 * aur function ke andar bhi
 * 
 * ! GLOBAL STRUCTURE
 * function ke bahar define kiya gaya structure
 * 
 * pure program mein accessible hota hai
 * 
 * ! LOCAL STRUCTURE
 * function ke andar define kiya gaya structure
 * 
 * sirf us function ke andar accessible hota hai
 * 
 * ---------------------------------------------------
 * ! DECLARING STRUCTURE VARIABLES
 * ---------------------------------------------------
 * struct Book
 * {
 *      int bookid;
 *      char title[20];
 *      float price;
 * };
 * 
 * struct Book b1,b2;
 * 
 * ! STRUCTURE VARIABLE
 * structure datatype ka object
 * structure variable kehlata hai
 * 
 * examples:
 * b1
 * b2
 * 
 * ! MEMORY ALLOCATION
 * int bookid      -> 4 bytes
 * char title[20] -> 20 bytes
 * float price    -> 4 bytes
 * 
 * total = 28 bytes
 * 
 * ! IMPORTANT
 * b1 aur b2 dono ke liye
 * alag memory allocate hogi
 * 
 * ---------------------------------------------------
 * ! STRUCTURE FEATURES
 * ---------------------------------------------------
 * structure heterogeneous data store kar sakta hai
 * 
 * heterogeneous means:
 * different datatype ka data
 * 
 * structure ke har member ke liye
 * alag memory allocate hoti hai
 * 
 * structure reusable hota hai
 * 
 * ek baar define karke
 * multiple variables create kar sakte hain
 * 
 * ---------------------------------------------------
 * ! EXAMPLE OF STRUCTURE
 * ---------------------------------------------------
 */


 #include<stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s1;

    printf("Name dijiye : ");
    scanf("%s",s1.name);

    printf("Roll Number dijiye : ");
    scanf("%d",&s1.rollNo);

    printf("Marks dijiye : ");
    scanf("%f",&s1.marks);

    printf("\nStudent Details\n");

    printf("Name : %s\n",s1.name);
    printf("Roll No : %d\n",s1.rollNo);
    printf("Marks : %.2f\n",s1.marks);

    return 0;
}


/**
 * ---------------------------------------------------
 * ! NESTED STRUCTURE
 * ---------------------------------------------------
 * structure ke andar structure bhi ho sakta hai
 * 
 * isko nested structure kehte hain
 * 
 * example:
 */

 struct Address
{
    char city[30];
    int pin;
};

struct Employee
{
    char name[30];
    int empId;
    struct Address addr;
};

/**
 * ! WHY NESTED STRUCTURE ?
 * jab ek entity ke andar
 * dusri entity ka data ho
 * tab nested structure use karte hain
 * 
 * ---------------------------------------------------
 * ! INITIALIZING STRUCTURE VARIABLE DURING DECLARATION
 * ---------------------------------------------------
 * structure variable create karte waqt hi
 * values assign kar sakte hain
 * 
 * ! DIRECT INITIALIZATION
 */

 struct Book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct Book b1={1,"C in Depth",350.0};

    return 0;
}

/**
 * ! IMPORTANT
 * initialization sequence mein hi hoga
 * 
 * bookid -> 1
 * title -> C in Depth
 * price -> 350.0
 * 
 * galat sequence mein values nahi de sakte
 * 
 * ---------------------------------------------------
 * ! INITIALIZING MEMBERS AFTER DECLARATION
 * ---------------------------------------------------
 */
#include<stdio.h>
#include<string.h>

struct Book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct Book b2;

    b2.bookid=2;
    strcpy(b2.title,"Java");
    b2.price=40.0;

    return 0;
}

/**
 * ! WHY strcpy() ?
 * b2.bookid=2;
 * 
 * ye valid hai
 * kyunki bookid normal int variable hai
 * 
 * lekin:
 * b2.title="Java";
 * 
 * invalid hai
 * 
 * kyunki title ek character array hai
 * 
 * arrays assignment operator ke left side
 * nahi aa sakte
 * 
 * isliye strcpy() use karte hain
 * 
 * ! strcpy()
 * string copy function
 * 
 * source string ko destination string mein copy karta hai
 * 
 * ---------------------------------------------------
 * ! ACCESSING STRUCTURE MEMBERS
 * ---------------------------------------------------
 * structure ke members access karne ke liye
 * dot operator use karte hain
 * 
 * Syntax:
 * structureVariable.memberName
 * 
 * examples:
 * b1.bookid
 * b1.price
 * b1.title
 * 
 * ! DOT OPERATOR
 * dot operator structure variable aur
 * uske member ko connect karta hai
 * 
 * ---------------------------------------------------
 * ! TAKING INPUT IN STRUCTURE
 * ---------------------------------------------------
 */
#include<stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s1;

    scanf("%s",s1.name);
    scanf("%d",&s1.rollNo);
    scanf("%f",&s1.marks);

    return 0;
}


/**
 * ---------------------------------------------------
 * ! ARRAY OF STRUCTURES
 * ---------------------------------------------------
 * agar multiple records store karne ho
 * toh structure array use karte hain
 * 
 * example:
 */
struct Student students[5];
/**
 * ! MEANING
 * students[0]
 * students[1]
 * students[2]
 * students[3]
 * students[4]
 * 
 * 5 alag Student records store kar sakte hain
 * 
 * ---------------------------------------------------
 * ! STRUCTURE ARRAY EXAMPLE
 * ---------------------------------------------------
 */

 struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

struct Student students[2];


/**
 * students[0].name
 * students[0].rollNo
 * students[0].marks
 * 
 * students[1].name
 * students[1].rollNo
 * students[1].marks
 * 
 * ---------------------------------------------------
 * ! FUNCTION CALL BY PASSING STRUCTURE
 * ---------------------------------------------------
 * structure ko function mein pass kar sakte hain
 * 
 * do ways:
 * 1. Pass By Value
 * 2. Pass By Reference
 * 
 * ---------------------------------------------------
 * ! PASS BY VALUE
 * ---------------------------------------------------
 * structure ki copy function ko pass hoti hai
 * 
 * original structure change nahi hota
 * 
 * memory zyada lagti hai
 * kyunki copy banti hai
 * 
 * example:
 */

 void printStudent(struct Student s)
{
    printf("%s",s.name);
}

/**
 * ! WORKING
 * printStudent(s1);
 * 
 * yaha s1 ki copy
 * parameter s mein jayegi
 * 
 * original s1 unchanged rahega
 * 
 * ---------------------------------------------------
 * ! PASS BY REFERENCE
 * ---------------------------------------------------
 * structure ka address pass karte hain
 * 
 * original structure modify ho sakta hai
 * 
 * memory efficient hota hai
 * 
 * pointer use hota hai
 * 
 * example:
 */
void updateMarks(struct Student *s)
{
    s->marks=95.0;
}



/**
 * ! ARROW OPERATOR (->)
 * pointer ke through structure members
 * access karne ke liye use hota hai
 * 
 * s->marks
 * same as:
 * (*s).marks
 * 
 * ! WORKING
 * updateMarks(&s1);
 * 
 * yaha s1 ka address pass hua
 * 
 * function directly original object ko modify karega
 * 
 * ---------------------------------------------------
 * ! PASS BY VALUE VS PASS BY REFERENCE
 * ---------------------------------------------------
 * Pass By Value
 * original data change nahi hota
 * copy banti hai
 * memory zyada lagti hai
 * 
 * Pass By Reference
 * original data change ho sakta hai
 * copy nahi banti
 * memory efficient hai
 * 
 * ---------------------------------------------------
 * ! STRUCTURE POINTER
 * ---------------------------------------------------
 * structure variable ka address store karne wala
 * pointer structure pointer kehlata hai
 * 
 * example:
 */
struct Book b1;

struct Book *ptr=&b1;
 


/**
 * ptr -> bookid
 * ptr -> title
 * ptr -> price
 * 
 * ! IMPORTANT
 * structure pointer large structures ke saath
 * efficient hota hai
 * 
 * kyunki poora structure copy nahi hota
 * 
 * sirf address pass hota hai
 * 
 * ---------------------------------------------------
 * ! ADVANTAGES OF STRUCTURE
 * ---------------------------------------------------
 * related data ko ek group mein rakh sakte hain
 * real world entities ko represent kar sakte hain
 * code more organized ho jata hai
 * reusability badh jati hai
 * maintainability improve hoti hai
 * 
 * 
 * 
 * 
 * 
 * 
 * ---------------------------------------------------
 * ! INTERVIEW QUESTIONS
 * ---------------------------------------------------
 * Q1. What is a structure ?
 * Q2. Why do we need structures ?
 * Q3. What is a member variable ?
 * Q4. Difference between structure and array ?
 * Q5. Is structure primitive or non primitive datatype ?
 * Q6. Does structure definition allocate memory ?
 * Q7. What is heterogeneous data ?
 * Q8. What is nested structure ?
 * Q9. What is a structure variable ?
 * Q10. What is dot operator ?
 * Q11. Why is strcpy() used for structure strings ?
 * Q12. What is structure array ?
 * Q13. What is pass by value ?
 * Q14. What is pass by reference ?
 * Q15. Difference between pass by value and pass by reference ?
 * Q16. What is structure pointer ?
 * Q17. What is arrow operator ?
 * Q18. Why is pass by reference memory efficient ?
 * Q19. Can structures contain arrays ?
 * Q20. Can structures contain other structures ?
 * 
 */