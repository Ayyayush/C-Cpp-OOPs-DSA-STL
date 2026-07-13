/**
 * ! APPLICATION OF POINTERS
 *
 * ! QUICK REVISION
 * Pointer is a variable that stores address of another variable.
 * Pointer size is independent of datatype.
 * Pointer generally points to same datatype variable.
 *
 * Example:
 * int *p;
 *
 * If:
 * p=&x;
 *
 * Then:
 * *p=x;
 *
 * --------------------------------------------------
 * ! POINTER ARITHMETIC
 * Pointer arithmetic means performing mathematical operations on pointers.
 *
 * Example:
 * int a;
 * int *p;
 *
 * p=&a;
 *
 * Suppose:
 * p=1000
 *
 * sizeof(int)=4
 *
 * Then:
 * p+1=1004
 * p+2=1008
 * p+5=1020
 *
 * Important:
 * Pointer moves according to datatype size.
 * Pointer does not move by 1 byte.
 *
 * ! POINTER DECREMENT
 * Suppose:
 * p=1000
 *
 * Then:
 * p-1=996
 * p-2=992
 *
 * ! INCREMENT OPERATOR
 * p++
 *
 * Same as:
 * p=p+1
 *
 * Example:
 * p=1000
 *
 * p++
 *
 * p=1004
 *
 * ! VALID OPERATIONS
 * p+1
 * p-1
 * p++
 * p--
 * q-p
 *
 * ! INVALID OPERATIONS
 * p+q
 * p*q
 * p/q
 * p*5
 * p/3
 *
 * Reason:
 * These operations have no logical meaning.
 *
 * ! POINTER SUBTRACTION
 * Example:
 *
 * p=1000
 * q=2000
 *
 * q-p
 *
 * =(2000-1000)/4
 *
 * =250
 *
 * Meaning:
 * Number of int locations between pointers.
 *
 * --------------------------------------------------
 * ! CALL BY REFERENCE
 * Call By Reference means sending address of variable to function.
 *
 * Original variable can be modified.
 *
 * Example:
 *
 * swap(&a,&b);
 *
 * Here:
 * Address of a and b is passed.
 *
 * ! WHY CALL BY REFERENCE ?
 *
 * Call By Value:
 * Copy is passed.
 * Original variable remains unchanged.
 *
 * Call By Reference:
 * Address is passed.
 * Original variable changes.
 *
 * ! SWAP USING POINTERS
 *
 * void swap(int *p,int *q)
 * {
 *     int temp;
 *
 *     temp=*p;
 *     *p=*q;
 *     *q=temp;
 * }
 *
 * Example:
 *
 * a=20
 * b=10
 *
 * swap(&a,&b);
 *
 * After swap:
 *
 * a=10
 * b=20
 *
 * 
 * 
 * ? Very Very important
 * ! WHY SCANF USES '&'
 *
 * Example:
 *
 * scanf("%d",&x);
 *
 * scanf must know where value should be stored.
 *
 * Therefore:
 * Address is required.
 * 
 scanf() uses '&' because it needs the memory address
 of the variable where the input value should be stored.
 '&' returns the address of the variable.
 Without the address, scanf cannot modify the original variable.


 scanf ("%d", &x)
 scanf mien & isliye lagate h taaki scanf address of x access kar sake
  aur usme vlaue rkah paye ya firr hcnages bhi kr sake
 *



 * --------------------------------------------------
 * ? 1
 * !   POINTERS AND ARRAYS
 *
 * Example:
 *
 * int a[5];
 *
 * Memory:
 *
 * a[0] -> 1000
 * a[1] -> 1004
 * a[2] -> 1008
 * a[3] -> 1012
 * a[4] -> 1016
 *
 * int *p;
 *
 * p=&a[0];
 *
 * p stores base address of array.
 *
 * ! IMPORTANT FORMULA
 *
 * a[i]
 *
 * =
 *
 * *(a+i)
 *
 * Very Important Interview Question.
 *
 * ! EXAMPLES
 *
 * a[0]
 * =*(a+0)
 *
 * a[1]
 * =*(a+1)
 *
 * a[2]
 * =*(a+2)
 *
 * ! POINTER INDEXING
 *
 * p[0]
 * =*(p+0)
 *
 * p[1]
 * =*(p+1)
 *
 * p[2]
 * =*(p+2)
 *
 * ! SURPRISING FACT
 *
 * a[2]
 *
 * =*(a+2)
 *
 * =*(2+a)
 *
 * =2[a]
 *
 * Therefore:
 *
 * a[2]==2[a]
 *
 * Valid C syntax.
 *
 * ! DIFFERENCE BETWEEN ARRAY AND POINTER
 *
 * Array Name:
 * Constant Address
 *
 * Pointer:
 * Variable
 *
 * Example:
 *
 * p++
 *
 * Valid
 *
 * Because p is variable.
 *
 * Example:
 *
 * a++
 *
 * Invalid
 *
 * Because array name is constant.
 *
 * ! IMPORTANT INTERVIEW POINT
 *
 * Array name behaves like a constant pointer.
 *
 * It stores base address.
 *
 * But it cannot be modified.
 *
 * Therefore:
 *
 * p=&a[0];  // valid
 *
 * p++;      // valid
 *
 * a++;      // invalid
 *
 * 
 * 
 * 
 * ? 2
 * ! POINTERS AND STRINGS
 * String is a character array terminated by '\0'.
 *
 * Example:
 * char str[]="Bhopal";
 * char *p;
 *
 * p=str;
 *
 * Meaning:
 * p stores address of first character.
 *
 * Therefore:
 * p=&str[0];
 *
 * ! STRING LENGTH USING ARRAY
 * int length(char s[])
 * {
 *     int i;
 *     for(i=0;s[i];i++);
 *     return i;
 * }
 *
 * ! STRING LENGTH USING POINTER
 * int length(char *p)
 * {
 *     int i;
 *     for(i=0;p[i];i++);
 *     return i;
 * }
 *
 * Important:
 * char s[] and char *p behave similarly
 * when receiving string.
 *
 * 
 * 
 * 
 * --------------------------------------------------
 * ! ARRAY OF POINTERS
 * Definition:
 * Array whose elements are pointers.
 *
 * Syntax:
 * int *ptr[4];
 *
 * Meaning:
 * ptr[0] -> pointer
 * ptr[1] -> pointer
 * ptr[2] -> pointer
 * ptr[3] -> pointer
 *
 * Array of 4 int pointers.
 *
 * Example:
 * int a[5];
 * int b[3];
 * int c[6];
 * int d[7];
 *
 * ptr[0]=a;
 * ptr[1]=b;
 * ptr[2]=c;
 * ptr[3]=d;
 *
 * Important:
 * ptr[0] stores base address of a.
 * ptr[1] stores base address of b.
 * ptr[2] stores base address of c.
 * ptr[3] stores base address of d.
 *
 * ! FUNCTION PARAMETER
 * void fun(int **p)
 *
 * Why double pointer?
 *
 * Because:
 * ptr itself stores addresses.
 * Therefore function receives pointer variables.
 *
 * Example:
 * p[0][2]
 *
 * Meaning:
 * Third element of first array.
 * 
 * 
 * 
 *
 * --------------------------------------------------
 * ! POINTER TO ARRAY
 * Most Important Interview Topic.
 *
 * Case 1:
 * int *p;
 *
 * Meaning:
 * p is pointer to int.
 *
 * Case 2:
 * int *p[4];
 *
 * Meaning:
 * p is array of 4 pointers.
 *
 * Case 3:
 * int (*p)[4];
 *
 * Meaning:
 * p is pointer to array of 4 integers.
 *
 * Important:
 * Brackets completely change meaning.
 *
 * Example:
 * int a[3][4];
 * int (*p)[4];
 *
 * p=a;
 *
 * Meaning:
 * p stores address of first row.
 *
 * p[0] -> first row
 * p[1] -> second row
 * p[2] -> third row
 *
 * Important Formula:
 * p[i][j]=a[i][j]
 *
 * Example:
 * p[1][2]=a[1][2]
 *
 * --------------------------------------------------
 * ! WILD POINTER
 * Definition:
 * Uninitialized pointer is called Wild Pointer.
 *
 * Example:
 * int *p;
 *
 * p contains garbage address.
 *
 * Therefore:
 * p is a wild pointer.
 *
 * Danger:
 * int *p;
 * *p=5;
 *
 * Illegal.
 *
 * Reason:
 * p points to unknown memory location.
 *
 * Solution:
 * Always initialize pointers.
 *
 * Example:
 * int *p=NULL;
 *
 * --------------------------------------------------
 * ! NULL POINTER
 * Definition:
 * Pointer containing NULL address.
 *
 * Example:
 * int *p=NULL;
 *
 * Meaning:
 * p is not pointing anywhere.
 *
 * Why use NULL pointer?
 *
 * - Prevents accidental memory access
 * - Makes program safer
 * - Easy to validate before use
 *
 * Example:
 * if(p!=NULL)
 * {
 *     *p=5;
 * }
 *
 * ! INTERVIEW DIFFERENCE
 * Wild Pointer:
 * Contains garbage address.
 *
 * NULL Pointer:
 * Contains known invalid address.
 *
 * --------------------------------------------------
 * ! DANGLING POINTER
 * Definition:
 * Pointer pointing to invalid memory location.
 *
 * ! CASE 1
 * Returning address of local variable.
 *
 * int* f()
 * {
 *     int a;
 *     return &a;
 * }
 *
 * Wrong.
 *
 * Reason:
 * Local variable gets destroyed after
 * function execution.
 *
 * Returned pointer becomes dangling.
 *
 * ! CASE 2
 * Scope ends.
 *
 * {
 *     int x;
 *     p=&x;
 * }
 *
 * x destroyed here.
 *
 * p becomes dangling pointer.
 *
 * Reason:
 * Lifetime of x ended.
 *
 * ! CASE 3
 * Dynamic memory released.
 *
 * int *p;
 *
 * p=(int*)malloc(sizeof(int));
 *
 * free(p);
 *
 * After free:
 * p becomes dangling pointer.
 *
 * Wrong:
 * *p=5;
 *
 * Good Practice:
 * free(p);
 * p=NULL;
 *
 * --------------------------------------------------
 * ! VOID POINTER
 * Definition:
 * Generic pointer having no datatype.
 *
 * Syntax:
 * void *p;
 *
 * Advantage:
 * Can store address of any datatype.
 *
 * Example:
 * int x;
 * float y;
 * char ch;
 *
 * void *p;
 *
 * p=&x;
 * p=&y;
 * p=&ch;
 *
 * All valid.
 *
 * Why called Generic Pointer?
 *
 * Because:
 * It can point to any datatype variable.
 *
 * Limitation:
 * Cannot be dereferenced directly.
 *
 * Example:
 * void *p;
 *
 * *p=5;
 *
 * Error.
 *
 * Reason:
 * Compiler does not know datatype.
 *
 * Solution:
 * Use Type Casting.
 *
 * Example:
 * int x;
 *
 * void *p=&x;
 *
 * *(int*)p=5;
 *
 * Valid.
 *
 * --------------------------------------------------
 * ! INTERVIEW QUICK REVISION
 * Pointer Arithmetic:
 * Pointer moves according to datatype size.
 *
 * Call By Reference:
 * Address is passed.
 *
 * a[i]=*(a+i)
 *
 * p[i]=*(p+i)
 *
 * a[2]=2[a]
 *
 * Array Name:
 * Constant.
 *
 * Pointer:
 * Variable.
 *
 * int *p[4]
 * -> Array of pointers
 *
 * int (*p)[4]
 * -> Pointer to array
 *
 * Wild Pointer:
 * Uninitialized pointer.
 *
 * NULL Pointer:
 * Pointer storing NULL.
 *
 * Dangling Pointer:
 * Pointer to invalid/deleted memory.
 *
 * Void Pointer:
 * Generic pointer.
 */