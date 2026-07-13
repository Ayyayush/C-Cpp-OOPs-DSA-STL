/**
 * ! OPERATORS IN C LANGUAGE
 * 
 * ! ARITHMETIC INSTRUCTION
 * 
 * arithmetic instruction ek aisi instruction hai
 * jisse hum data manipulation karte hain
 * 
 * it is an instruction used for manipulation of data
 * 
 * example:
 * 
 * 3 + 4
 * 
 * yaha + operator ki madad se
 * data ka manipulation hua
 * 
 * aur result aaya:
 * 7
 * 
 * 
 * ! OPERATOR PRECEDENCE
 * 
 * example:
 * 
 * 3 + 4 * 7
 * 
 * isme BODMAS rule exactly use nahi hota
 * 
 * C language mein operator precedence ka concept lagta hai
 * 
 * jo BODMAS se milta julta hota hai
 * 
 * multiplication ki precedence addition se zyada hoti hai
 * 
 * isliye:
 * 
 * 4 * 7 pehle solve hoga
 * 
 * phir:
 * 3 + 28
 * 
 * final answer:
 * 31
 * 
 * 
 * ! TYPES OF OPERATORS
 * 
 * 1. Unary Operators
 *    +  -  ++  --  sizeof
 * 
 * 2. Arithmetic Operators
 *    +  -  *  /  %
 * 
 * 3. Bitwise Operators
 *    &  |  ^  ~  <<  >>
 * 
 * 4. Relational Operators
 *    <  >  <=  >=  ==  !=
 * 
 * 5. Logical Operators
 *    &&  ||  !
 * 
 * 6. Conditional Operator
 *    ? :
 * 
 * 7. Assignment Operators
 *    =  +=  -=  *=  /=  %=
 * 
 * 
 * ! UNARY OPERATORS
 * 
 * unary operators ek operand par kaam karte hain
 * 
 * examples:
 * 
 * ++a
 * --a
 * sizeof(a)
 * 
 * 
 * ! ARITHMETIC OPERATORS
 * 
 * arithmetic operators mathematical calculations ke liye use hote hain
 * 
 * examples:
 * 
 * a + b
 * a - b
 * a * b
 * a / b
 * a % b
 * 
 * 
 * ! BITWISE OPERATORS
 * 
 * bitwise operators binary bits par kaam karte hain
 * 
 * examples:
 * 
 * a & b
 * a | b
 * a ^ b
 * 
 * 
 * ! RELATIONAL OPERATORS
 * 
 * relational operators comparison ke liye use hote hain
 * 
 * examples:
 * 
 * a > b
 * a < b
 * a == b
 * a != b
 * 
 * 
 * ! LOGICAL OPERATORS
 * 
 * logical operators conditions combine karne ke liye use hote hain
 * 
 * examples:
 * 
 * a > b && b > c
 * 
 * a > b || b > c
 * 
 * !(a > b)
 * 
 * 
 * ! CONDITIONAL OPERATOR
 * 
 * conditional operator ko ternary operator bhi kehte hain
 * 
 * example:
 * 
 * a > b ? a : b
 * 
 * agar condition true hogi
 * toh pehla value return hoga
 * warna doosra
 * 
 * 
 * ! ASSIGNMENT OPERATORS
 * 
 * assignment operators value assign karne ke liye use hote hain
 * 
 * examples:
 * 
 * a = 5
 * a += 2
 * a -= 3
 * 
 * 
 * ! sizeof OPERATOR
 * 
 * sizeof operator memory size batata hai
 * 
 * examples:
 * 
 * sizeof(int)
 * sizeof(char)
 * sizeof(float)
 * sizeof(double)
 * 
 * possible outputs:
 * 
 * sizeof(int)     -> 4 bytes
 * sizeof(char)    -> 1 byte
 * sizeof(float)   -> 4 bytes
 * sizeof(double)  -> 8 bytes
 * 
 * size compiler aur system ke according vary bhi kar sakti hai
 * 
 * 
 * ! REAL CONSTANT
 * 
 * real constant by default double type ka hota hai
 * 
 * example:
 * 
 * 3.5
 * 
 * ye by default double mana jayega
 * 
 * agar float banana ho toh:
 * 
 * 3.5f
 * 
 * likhenge
 * 
 * 
 * ! ASSOCIATIVITY
 * 
 * C language mein agar equal precedence ke operators hote hain
 * toh generally left to right solve hota hai
 * 
 * example:
 * 
 * 10 - 5 + 2
 * 
 * yaha - aur + ki precedence equal hai
 * 
 * toh left to right solve hoga
 * 
 * pehle:
 * 10 - 5 = 5
 * 
 * phir:
 * 5 + 2 = 7
 * 
 * 
 * ! OPERATORS BASED ON NUMBER OF OPERANDS
 * 
 * operand ki sankhya ke adhar par
 * operators 3 types ke hote hain:
 * 
 * 1. Unary Operator
 * 
 * ek operand par kaam karta hai
 * 
 * example:
 * ++a
 * 
 * 
 * 2. Binary Operator
 * 
 * do operands par kaam karta hai
 * 
 * examples:
 * a + b
 * a - b
 * 
 * 
 * 3. Ternary Operator
 * 
 * teen operands par kaam karta hai
 * 
 * example:
 * condition ? value1 : value2
 * 
 */