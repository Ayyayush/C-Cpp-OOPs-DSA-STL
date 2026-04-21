/*
int a,b,*p,*q;
p=&a;
q=&b;


The following operations on address is not permitted
p+q;
p*q;
p/q;
p*5;
p/3;

PERMITTED
p+3;
q-2;
q-p; // ye tbhi possible h jab dono ek hi type ke ho

diffrence
p++ // isme mein ki value 1004 ho chuki h
p+1 // isme p ki value 1000 hi h 

formal arguement pe depend lrta h kki call by value h ya call by reference 
NOTE :=
function can't access variable of another function with help of name bcz name has a scope

With help of pointers we can access data acorss functions

We WRITE
 := scanf("%d ", &x)
 that;s why bcz scanf can access adress of x and change its value

*/