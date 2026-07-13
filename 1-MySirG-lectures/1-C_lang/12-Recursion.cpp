/**
 * ! RECURSION
 * function calling itself is called recursion
 * 
 * recursive function khud ko hi call karta hai
 * 
 * recursive function ek choti problem solve karne ke liye
 * khud ki copy ko call karta hai
 * 
 * ! IMPORTANT
 * recursion mein ye ensure karna bahut important hai
 * ki recursion terminate ho
 * 
 * ! SMALLER PROBLEM MEANS ?
 * smaller problem ka matlab hota hai
 * data ki wajah se problem size kam hona
 * 
 * example:
 * 6 ka factorial
 * 5 ke factorial se bigger problem hai
 * 
 * kyunki data bada hai
 * 
 * ! LET'S SEE WITH AN EXAMPLE
 * factorial:
 * n! = n * (n-1)!
 * 
 * example:
 * 5! = 5 * 4!
 * 4! = 4 * 3!
 * 3! = 3 * 2!
 * 
 * ! WHAT IS BASE CASE ?
 * base case wo condition hoti hai
 * jaha recursion stop hota hai
 * 
 * base case recursion ko terminate karta hai
 * 
 * ! EXAMPLE OF BASE CASE
 * int fact(int n)
 * {
 *      if(n==0)
 *              return 1;
 * 
 *      return n*fact(n-1);
 * }
 * 
 * yaha:
 * if(n==0)
 * return 1;
 * 
 * ye base case hai
 * 
 * ! WHY DO WE NEED TO TERMINATE RECURSION ?
 * agar recursion terminate nahi hoga
 * toh function infinitely call hota rahega
 * 
 * aur stack overflow ho jayega
 * 
 * program crash bhi ho sakta hai
 * 
 * ! TYPES OF RECURSION
 * 1. Tail Recursion
 * 2. Non Tail Recursion
 * 
 * ! TAIL RECURSION
 * jis recursion mein
 * recursive call function ka last operation ho
 * usko tail recursion kehte hain
 * 
 * ! EXAMPLE
 * void fun(int n)
 * {
 *      if(n==0)
 *              return;
 * 
 *      cout<<n;
 * 
 *      fun(n-1);
 * }
 * 
 * recursive call last statement hai
 * isliye ye tail recursion hai
 * 
 * ! NON TAIL RECURSION
 * recursive call ke baad bhi
 * agar kuch work bacha ho
 * toh usko non tail recursion kehte hain
 * 
 * ! EXAMPLE
 * void fun(int n)
 * {
 *      if(n==0)
 *              return;
 * 
 *      fun(n-1);
 * 
 *      cout<<n;
 * }
 * 
 * yaha recursive call ke baad bhi cout chal raha hai
 * isliye ye non tail recursion hai
 * 
 * ! WHAT IS CALL STACK ?
 * jab bhi function call hota hai
 * uski information stack memory mein store hoti hai
 * 
 * isi ko call stack kehte hain
 * 
 * recursion mein multiple function calls
 * stack mein ek ke upar ek store hote hain
 * 
 * ! CALL STACK EXAMPLE
 * fact(3)
 * 
 * CALL STACK:
 * ┌────────────┐
 * │ fact(0)    │
 * ├────────────┤
 * │ fact(1)    │
 * ├────────────┤
 * │ fact(2)    │
 * ├────────────┤
 * │ fact(3)    │
 * └────────────┘
 * 
 * ! USES OF RECURSION
 * har recursive call
 * original problem ke slightly smaller version par kaam karta hai
 * 
 * kuch problems recursion se
 * iteration ke comparison mein zyada easy solve hoti hain
 * 
 * recursive code generally
 * iterative code se shorter hota hai
 * 
 * ! EXAMPLES WHERE RECURSION IS USED
 * factorial
 * fibonacci
 * tree traversal
 * binary search
 * backtracking
 * 
 * ! STORING A RECURSIVE FUNCTION IN A VARIABLE
 * recursion ko function pointer ya lambda mein bhi store kar sakte hain
 * 
 * ! WHAT IS RECURSION TREE ?
 * recursion tree ek diagrammatic representation hai
 * jo recursive calls ko tree structure mein show karta hai
 * 
 * ! RECURSION TREE OF FACTORIAL(4)
 * 
 * fact(4)
 * └── 4 * fact(3)
 *         └── 3 * fact(2)
 *                 └── 2 * fact(1)
 *                         └── 1 * fact(0)
 *                                 └── 1
 * 
 * ! HOW TO APPROACH A RECURSIVE PROBLEM
 * follow these 3 steps:
 * 
 * 1. Base Case
 * recursion kaha rukega
 * 
 * 2. Working of Function
 * current function kya kaam karega
 * 
 * 3. Recursive Call
 * smaller problem ke liye function ko dobara call karo
 * 
 * ! LET'S SEE WITH AN EXAMPLE
 * int fact(int n)
 * {
 *      //base case
 *      if(n==0)
 *              return 1;
 * 
 *      //working + recursive call
 *      return n*fact(n-1);
 * }
 * 
 */