/**
 * ! POINTERS
 * 
 * --------------------------------------------------
 * ! INTRODUCTION TO MEMORY ADDRESS
 * Memory is a collection of bytes where variables are stored during program execution.
 * Byte = smallest addressable unit of memory.
 * Every byte has a unique address.
 *
 * Example:
 * int x;
 *
 * Suppose x is stored at address 100.
 *
 * Address = 100
 * Value = data stored inside x
 *
 * Memory:
 * Address     Variable
 * 100         x
 *
 * ! ADDRESS
 * Address is the location number of a byte in memory.
 * Also called:
 * - Memory Address
 * - Reference
 * - Location
 *
 * Important Points:
 * - Address is always a whole number.
 * - Address is assigned by compiler/OS.
 * - We cannot decide address of a variable.
 * - We cannot change address of a variable.
 *
 * Example:
 * int x;
 * x may get address 1000.
 * We cannot force x to be stored at address 5000.
 *
 * 
 * --------------------------------------------------
 * ! REFERENCING OPERATOR (&)
 * '&' returns address of a variable.
 *
 * Also called:
 * - Address Of Operator
 * - Referencing Operator
 *
 * Type:
 * - Unary Operator
 *
 * ! UNARY OPERATOR
 * Operator that works on only one operand.
 *
 * Example:
 * int x = 5;
 *
 * x  = 5
 * &x = address of x
 *
 * Suppose:
 * address of x = 100
 *
 * Then:
 * x  = 5
 * &x = 100
 *
 * 
 * --------------------------------------------------
 * ! DEREFERENCING OPERATOR (*)
 * '*' accesses value stored at an address.
 *
 * Also called:
 * - Indirection Operator
 * - Dereferencing Operator
 *
 * Type:
 * - Unary Operator
 *
 * Example:
 * int x = 5;
 *
 * Suppose:
 * &x = 100
 *
 * Then:
 *
 * *(&x)
 *
 * Meaning:
 * Step 1 -> &x gives address 100
 * Step 2 -> * goes to address 100
 * Step 3 -> reads value stored there
 *
 * Output:
 * 5
 *
 * Important Identity:
 * *(&x) = x
 *
 * Because:
 * &x gives address
 * * accesses value at that address
 *
 * 
 * --------------------------------------------------
 * ! UNDERSTANDING VALUE VS ADDRESS
 *
 * int x = 5;
 *
 * Suppose:
 * x stored at address 1000
 *
 * Then:
 *
 * x      -> 5
 * &x     -> 1000
 * *(&x)  -> 5
 *
 * Memory:
 *
 * Address      Value
 * 1000         5
 *
 * x refers to value.
 * &x refers to address.
 * *(&x) again refers to value.
 *
 * 
 * --------------------------------------------------
 * ! WHY "&x = 7" GIVES ERROR ?
 *
 * Example:
 *
 * int x = 5;
 *
 * &x = 7;
 *
 * Error.
 *
 * Reason:
 * &x is not a variable.
 * It is only a representation of address.
 * &x is itself a constant and  ocnstant can't be on left of assignment = operator
 * 
 *
 * Suppose:
 * &x = 1000
 *
 * Compiler sees:
 *
 * 1000 = 7;
 *
 * which is invalid.
 *
 * ! CONSTANT
 * A fixed value that cannot be modified.
 *
 * Address behaves like a constant value here.
 *
 * Assignment operator requires variable on left side.
 *
 * Therefore:
 * &x = 7;
 * gives compilation error.
 *
 * 
 * 
 * --------------------------------------------------
 * ! POINTER
 *
 * Pointer is a variable that stores address
 * of another variable.
 *
 * Definition:
 * Pointer = Address Storing Variable
 *
 * Example:
 *
 * int x = 5;
 * int *p;
 *
 * p = &x;
 *
 * Suppose:
 *
 * x address = 1000
 * p address = 2000
 *
 * Memory:
 *
 * Variable    Address    Value
 * x           1000       5
 * p           2000       1000
 *
 * Here:
 * p stores address of x.
 *
 * Therefore:
 * p is a pointer variable.
 *
 * 
 * --------------------------------------------------
 * ! TYPES OF VARIABLES
 *
 * There are mainly two types of variables.
 *
 * 1) Ordinary Variables
 * 2) Pointer Variables
 *
 * 
 * --------------------------------------------------
 * ! ORDINARY VARIABLES
 * Ordinary variable stores actual data/value.
 * iska size datatype pe depend krta h 
 *
 * Example:
 *
 * int x = 5;
 *
 * x stores:
 * 5
 *
 * Hence called:
 * Value Type Variable
 *
 * 
 * --------------------------------------------------
 * ! POINTER VARIABLES
 * Pointer is a variable that stores address of another variable
 *
 * Example:
 *
 * int *p;
 *
 * p stores:
 * address of another variable
 *
 * Example:
 *
 * int x = 5;
 * int *p;
 *
 * p = &x;
 *
 * p stores address 1000
 * not value 5
 *
 * 
 * --------------------------------------------------
 * ! DECLARING A POINTER
 *
 * Syntax:
 *
 * datatype *pointer_name;
 *
 * Example:
 *
 * int *p;
 * char *q;
 * float *r;
 * double *s;
 *
 * Meaning:
 *
 * p -> stores address of int
 * q -> stores address of char
 * r -> stores address of float
 * s -> stores address of double
 *
 * 
 * --------------------------------------------------
 * ! ASSIGNING ADDRESS TO POINTER
 *
 * Example:
 *
 * int x = 5;
 *
 * int *p;
 *
 * p = &x;
 *
 * Process:
 *
 * Step 1:
 * x gets memory.
 *
 * Step 2:
 * &x returns address.
 *
 * Step 3:
 * Address stored inside p.
 *
 * Memory:
 *
 * x = 5
 * Address = 1000
 *
 * p = 1000
 *
 * 
 * --------------------------------------------------
 * ! RELATION BETWEEN POINTER AND VARIABLE
 *
 * int x = 5;
 *
 * int *p;
 *
 * p = &x;
 *
 * Then:
 *
 * p      -> 1000
 * &x     -> 1000
 *
 * *p     -> 5
 * x      -> 5
 *
 * Therefore:
 *
 * p == &x
 *
 * and
 *
 * *p == x
 *
 * Very Important Identity:
 *
 * *p ≅ x
 *
 * when:
 *
 * p = &x;
 *
 * 
 * --------------------------------------------------
 * ! INTERVIEW DEFINITIONS
 *
 * Address:
 * Location of data in memory.
 *
 * Reference:
 * Another name for memory address.
 *
 * Referencing:
 * Getting address using '&'.
 *
 * Dereferencing:
 * Accessing value using '*'.
 *
 * Pointer:
 * Variable that stores address of another variable.
 *
 * Ordinary Variable:
 * Variable storing actual value.
 *
 * Pointer Variable:
 * Variable storing address.
 *
 * Unary Operator:
 * Operator working on one operand.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! SIZE OF POINTER
 *
 * Important Interview Question:
 * Does pointer size depend on datatype?
 *
 * Answer:
 * No.
 *
 * Pointer stores address only.
 * Address size depends on architecture,
 * not on datatype.
 *
 * Example:
 *
 * int a;
 * int *p;
 *
 * char b;
 * char *q;
 *
 * double c;
 * double *r;
 *
 * Variable Sizes:
 *
 * int    -> usually 4 bytes
 * char   -> 1 byte
 * double -> 8 bytes
 *
 * Pointer Sizes (64-bit System):
 *
 * int*    -> 8 bytes
 * char*   -> 8 bytes
 * double* -> 8 bytes
 *
 * Important Point:
 * Whatever is the datatype of pointer,
 * pointer size remains same.
 *
 * 
 * 
 * --------------------------------------------------
 * ! WHY POINTER SIZE IS 8 BYTES ?
 * Pointer stores memory address.
 *
 * In a 64-bit machine:
 *
 * Address contains 64 bits.
 *
 * 64 bits = 8 bytes
 *
 * Therefore:
 *
 * sizeof(pointer) = 8 bytes
 *
 * 
 * --------------------------------------------------
 * ! POINTER SIZE IN DIFFERENT SYSTEMS
 * 16-bit System:
 *
 * Address Range:
 * 0 to 65535
 *
 * Total Addresses:
 * 2^16
 *
 * Pointer Size:
 * 2 Bytes
 *
 * 
 * --------------------------------------------------
 *
 * 32-bit System:
 *
 * Address Range:
 * 2^32
 *
 * Pointer Size:
 * 4 Bytes
 *
 * 
 * --------------------------------------------------
 *
 * 64-bit System:
 *
 * Address Range:
 * 2^64
 *
 * Pointer Size:
 * 8 Bytes
 *
 * 
 * --------------------------------------------------
 * ! BASE ADDRESS
 * Definition:
 * Base Address = Address of first byte
 * of a variable.
 *
 * Example:
 *
 * int a;
 *
 * Suppose:
 *
 * int occupies 4 bytes.
 *
 * Memory Layout:
 *
 * 1000
 * 1001
 * 1002
 * 1003
 *
 * Base Address:
 *
 * 1000
 *
 * because first byte starts there.
 *
 * 
 * --------------------------------------------------
 * ! ANOTHER EXAMPLE OF BASE ADDRESS
 *
 * char b;
 *
 * Memory:
 *
 * 2000
 *
 * Base Address:
 *
 * 2000
 *
 * 
 * --------------------------------------------------
 *
 * double c;
 *
 * Memory:
 *
 * 3000
 * 3001
 * 3002
 * 3003
 * 3004
 * 3005
 * 3006
 * 3007
 *
 * Base Address:
 *
 * 3000
 *
 * 
 * --------------------------------------------------
 * ! IMPORTANT RULE
 *
 * Pointer always stores
 * Base Address of variable.
 *
 * Example:
 *
 * int a;
 * int *p;
 *
 * p = &a;
 *
 * If:
 *
 * a starts from address 1000
 *
 * Then:
 *
 * p stores 1000
 *
 * not 1001
 * not 1002
 * not 1003
 *
 * Pointer always stores first address.
 *
 * 
 * --------------------------------------------------
 * ! DATATYPE OF POINTER
 *
 * Important Question:
 *
 * Why do we write:
 *
 * int *p;
 *
 * instead of:
 *
 * char *p;
 *
 * Answer:
 *
 * Pointer datatype should match
 * variable datatype.
 *
 * 
 * --------------------------------------------------
 * ! EXAMPLE
 *
 * int a;
 *
 * int *p;
 *
 * p = &a;
 *
 * Correct.
 *
 * Because:
 *
 * p is designed to store
 * address of int variable.
 *
 * 
 * --------------------------------------------------
 *
 * char b;
 *
 * char *q;
 *
 * q = &b;
 *
 * Correct.
 *
 * Because:
 *
 * q stores address of char variable.
 *
 * 
 * --------------------------------------------------
 * ! WHY DATATYPE MATTERS ?
 *
 * Compiler should know:
 *
 * 1. How many bytes to read.
 * 2. How to interpret data.
 * 3. How pointer arithmetic will work.
 *
 * Therefore:
 *
 * Pointer datatype is important.
 *
 * 
 * --------------------------------------------------
 * ! COMMON MISCONCEPTION
 *
 * char *q;
 *
 * Many beginners think:
 *
 * q stores a character.
 *
 * Wrong.
 *
 * q stores address of
 * a char variable.
 *
 * 
 * --------------------------------------------------
 *
 * int *p;
 *
 * p does NOT store integer.
 *
 * p stores address of integer.
 *
 * 
 * --------------------------------------------------
 * ! MULTI LEVEL POINTERS
 *
 * Pointer can store address
 * of another pointer.
 *
 * Types:
 *
 * Single Pointer
 * Double Pointer
 * Triple Pointer
 *
 * 
 * --------------------------------------------------
 * ! SINGLE POINTER
 *
 * int *j;
 *
 * Stores address of int variable.
 *
 * Example:
 *
 * int x = 5;
 *
 * j = &x;
 *
 * j contains address of x.
 *
 * 
 * --------------------------------------------------
 * ! DOUBLE POINTER
 *
 * int **k;
 *
 * Stores address of a pointer.
 *
 * Example:
 *
 * int x = 5;
 *
 * int *j;
 *
 * j = &x;
 *
 * k = &j;
 *
 * k stores address of j.
 *
 * 
 * --------------------------------------------------
 * ! TRIPLE POINTER
 *
 * int ***l;
 *
 * Stores address of double pointer.
 *
 * Example:
 *
 * int x = 5;
 *
 * int *j;
 * int **k;
 * int ***l;
 *
 * j = &x;
 * k = &j;
 * l = &k;
 *
 * 
 * --------------------------------------------------
 * ! MEMORY VISUALIZATION
 *
 * x = 5
 *
 * Address of x = 1000
 *
 * j stores:
 * 1000
 *
 * Address of j = 2000
 *
 * k stores:
 * 2000
 *
 * Address of k = 3000
 *
 * l stores:
 * 3000
 *
 * Address of l = 4000
 *
 * Memory:
 *
 * x -> 5
 *
 * j -> 1000
 *
 * k -> 2000
 *
 * l -> 3000
 *
 * 
 * --------------------------------------------------
 * ! DEREFERENCING MULTI LEVEL POINTERS
 *
 * x = 5
 *
 * j = &x
 *
 * k = &j
 *
 * l = &k
 *
 * Then:
 *
 * *j
 * -> value of x
 * -> 5
 *
 * **k
 * -> value of x
 * -> 5
 *
 * ***l
 * -> value of x
 * -> 5
 *
 * 
 * --------------------------------------------------
 * ! IMPORTANT IDENTITIES
 *
 * If:
 *
 * j = &x
 *
 * Then:
 *
 * *j = x
 *
 * 
 * --------------------------------------------------
 *
 * If:
 *
 * k = &j
 *
 * Then:
 *
 * **k = x
 *
 * 
 * --------------------------------------------------
 *
 * If:
 *
 * l = &k
 *
 * Then:
 *
 * ***l = x
 *
 * 
 * --------------------------------------------------
 * ! COMPLETE CHAIN
 *
 * x
 * *j
 * **k
 * ***l
 *
 * all represent same value.
 *
 * Example:
 *
 * x = 5
 *
 * *j = 5
 *
 * **k = 5
 *
 * ***l = 5
 *
 * 
 * --------------------------------------------------
 * ! INTERVIEW QUICK REVISION
 *
 * Pointer:
 * Variable storing address.
 *
 * Base Address:
 * Address of first byte of variable.
 *
 * Pointer Size:
 * Depends on architecture.
 *
 * 64-bit:
 * Pointer Size = 8 Bytes.
 *
 * Referencing:
 * '&' operator.
 *
 * Dereferencing:
 * '*' operator.
 *
 * Single Pointer:
 * Stores address of variable.
 *
 * Double Pointer:
 * Stores address of pointer.
 *
 * Triple Pointer:
 * Stores address of double pointer.
 *
 * Important Identity:
 *
 * *(&x) = x
 *
 * *p = x
 * when p = &x
 *
 * **k = x
 * when k = &p
 *
 * ***l = x
 * when l = &k
 */