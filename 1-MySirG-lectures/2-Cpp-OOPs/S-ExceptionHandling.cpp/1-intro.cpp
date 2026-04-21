1. Syntax Errors
These errors occur when the rules of the C programming language (syntax) are violated. The compiler detects these errors during the compilation process.


Missing semicolons or mismatched braces.
Incorrect keywords or variable declarations.
// Syntax Error Example
#include <stdio.h>
int main()             // Main likhne pe linker error aa jayega 
 {
    printf("Hello, World!") // Missing semicolon
    return 0;
}
Error Message:
error: expected ';' before 'return'





2. Runtime Errors
These errors occur during the execution of the program. They happen due to invalid operations like dividing by zero, accessing invalid memory, or using uninitialized variables.

Examples:

Division by zero.
Accessing an array out of its bounds.
// Runtime Error Example
#include <stdio.h>
int main()
 {
    int a = 5, b = 0;
    printf("Result: %d\n", a / b); // Division by zero
    return 0;
}
Output:
Floating-point exception (core dumped)






3. Logical Errors
These errors occur when the program runs without crashing but produces incorrect results because the logic used in the code is flawed. Logical errors are the hardest to detect because they do not generate any compiler or runtime error messages.

Examples:

Using the wrong operator or incorrect formula.
c
Copy code
// Logical Error Example
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("Sum: %d\n", a - b); // Wrong operation (should be a + b)
    return 0;
}
Output:
Sum: -5 (Incorrect result)




Other Notable Types of Errors
Linker Errors
These occur when the compiler successfully compiles the code but cannot link the function calls to their definitions. This happens when libraries or main function definitions are missing.

Example:

c
Copy code
// Linker Error Example
#include <stdio.h>
int main() {
    myFunction(); // Function not defined
    return 0;
}
Error Message:
undefined reference to 'myFunction'



Semantic Errors
These occur when the meaning of the code is incorrect, even though the syntax is valid. These errors often result in unexpected behavior.

Example:
Assigning a value to a constant variable.

c
Copy code
// Semantic Error Example
#include <stdio.h>
int main() {
    const int x = 10;
    x = 20; // Trying to modify a constant
    return 0;
}
Error Message:
error: assignment of read-only variable 'x'









EXCEPTIONS ::
Exceptions are run time abnormal condition that a program encounters during it's execution 
There are two types of exception 
1.>Synchronous
2.>Asynchronous
eg' Beyond the program''s control like disc failure 


