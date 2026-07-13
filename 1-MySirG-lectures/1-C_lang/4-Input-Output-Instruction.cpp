/**
 * ! ABOUT C LANGUAGE
 * 
 * 1. C is a block structure programming language
 * block matlab curly braces {}
 * 
 * 2. A C program can have any number of blocks
 * 
 * 3. Usually outermost blocks are functions
 * 
 * 4. Functions have some name for identification
 * 
 * 5. Even the smallest C program has a function
 * 
 * 6. All function names in C must be different
 * 
 * 7. If there is only one function
 * it must be main
 * 
 * 8. If there are more than one functions
 * one function name must be main
 * 
 * 
 * ! STATEMENTS IN C
 * 
 * statements are of two types:
 * 1. Declaration Statements
 * 2. Action Statements
 * 
 * declaration statements compiler ke liye hote hain
 * 
 * declaration statements ke alawa
 * saari lines action statements hoti hain
 * 
 * declaration statements .exe file mein nahi pahunchte
 * 
 * 
 * ! VARIABLE SCOPE
 * 
 * agar function ke andar declaration statement yani variable declare kara
 * toh uska scope local hota hai
 * 
 * agar function ke bahar variable declare kara
 * toh uska scope global hota hai
 * 
 * C mein local aur global variables hote hain
 * 
 * 
 * 9. You can write declaration statements
 * inside a block or outside all functions
 * 
 * 10. C mein local and global variables hote hain
 * 
 * 11. Action statements can reside inside the block (function)
 * 
 * 12. C is a case sensitive language
 * a != A
 * 
 * example:
 * int a;
 * A = 5;   // error
 * 
 * 
 * ! STANDARD INPUT AND OUTPUT DEVICES
 * 
 * Keyboard  -> Standard Input Device
 * Monitor   -> Standard Output Device
 * 
 * 
 * ! VERY VERY IMPORTANT CONCEPTS
 * 
 * ! OUTPUT INSTRUCTION
 * 
 * printf() is a predefined function
 * 
 * ye bahut important hai yaad rakhna
 * 
 * printf() is used to print some text on the monitor
 * 
 * printf() mainly 2 cheezon ke liye use karenge:
 * 1. To print data
 * 2. To print value of a variable or an expression
 * 
 * ye function pehle se bana hua hai
 * isliye hum iska naam change nahi kar sakte
 * 
 * define bhi nahi kar sakte
 * 
 * ye function hai
 * aise bhi confirm hota hai
 * kyunki function ko call karte hain
 * aur yaha hum printf() ko call hi kar rahe hain
 * 
 * printf() ke andar hum arguments pass karte hain
 * 
 * hum ek hi program mein printf() ko kai baar likhte hain
 * iska matlab ye nahi ki define kar rahe hain
 * 
 * hum usko multiple times call kar rahe hain
 * 
 * We can call a function any number of times
 * but define only once
 * 
 * 
 * ! WRITE A PROGRAM TO PRINT WELCOME ON THE SCREEN
 * 
 * kyunki humne padha ki main() function toh hoga hi hoga
 * 
 * toh agar sirf:
 * 
 * main()
 * {
 *     printf()
 * }
 * 
 * aise likh diya
 * toh pura sahi nahi hai
 * 
 * kuch compilers is program ko run kar sakte hain
 * par ye recommended tarika nahi hai
 * 
 * VS Code pe error aayega:
 * implicit declaration of library function printf
 * 
 * latest standards ke hisaab se isme galtiyan hain:
 * 
 * 1. main() ka return type nahi likha
 * standard mein int hota hai
 * 
 * 2. kyunki function ka return type int hai
 * toh last mein return 0; likhna compulsory hai
 * 
 * 3. printf() predefined function hai
 * toh predefined function ko use karne ke liye
 * uska declaration include karne wali header file include karni padti hai
 * 
 * woh aise karenge:
 * #include <stdio.h>
 * 
 * 
 * ! PREPROCESSOR WORKING
 * 
 * humne padha tha software banane mein
 * first step source file banana hota hai
 * 
 * uske baad jo first component chalega
 * woh hai preprocessor
 * 
 * preprocessor sirf unhi lines ko dekhega
 * jisme # laga hoga
 * 
 * # ke baad include likha hai
 * toh ye preprocessor ke liye command hai
 * 
 * usko pata chala ki include karna hai
 * 
 * kya include karna hai ?
 * stdio.h file ko
 * 
 * ab preprocessor iss ek line ko hata kar
 * stdio.h ki saari lines yaha le aayega
 * 
 * humne shayad sirf 4 lines likhi hongi
 * par compiler 400+ lines read karega
 * 
 * printf() ki definition stdio.h mein nahi hoti
 * 
 * isme sirf declaration hota hai printf() ka
 * 
 * definition alag library file mein hoti hai
 * 
 * 
 * ! HOMEWORK
 * 
 * ek simple welcome wala code lo
 * aur starting se batao
 * ki ye code kaise run ho raha hai
 * 
 * 
 * ! WAYS TO RUN A PROGRAM
 * 
 * program run karne ke mainly 2 tareeke hain:
 * 1. Terminal ke through
 * 2. Run option ke through
 * 
 * compiler bhi terminal mein specify kar sakte hain
 * 
 * example:
 * gcc compiler
 * 
 * 
 * ! WHAT IS GCC COMPILER
 * 
 * GCC ek popular compiler collection hai
 * jo mainly C, C++ etc. languages ko compile karne ke liye use hota hai
 * 
 * GCC = GNU Compiler Collection
 * 
 * 
 * ! NEW LINE CONCEPT
 * 
 * maan lo ek code likh diya:
 * 
 * #include <stdio.h>
 * 
 * int main()
 * {
 *     printf("Welcome");
 *     printf("Students");
 * 
 *     return 0;
 * }
 * 
 * ab aise print karaya
 * toh dono ek hi line mein print hoga
 * 
 * alag line mein chahiye toh hum \n use karenge
 * 
 * \n cursor ko next line mein le jata hai
 * 
 * 
 * ! \n FOR INTERVIEW
 * 
 * \n ek escape sequence hai
 * jo cursor ko next line mein le jata hai
 * 
 * 
 * ! endl FOR INTERVIEW
 * 
 * endl next line mein le jata hai
 * aur output buffer ko flush bhi karta hai
 * 
 * endl C++ mein use hota hai
 * 
 * 
 * ! DIFFERENCE BETWEEN \n AND endl
 * 
 * \n:
 * 1. Sirf next line mein le jata hai
 * 2. Faster hota hai
 * 3. C aur C++ dono mein use hota hai
 * 
 * endl:
 * 1. Next line mein le jata hai
 * 2. Buffer flush karta hai
 * 3. Thoda slower hota hai
 * 4. Sirf C++ mein use hota hai
 * 
 * 
 * ! \n and /n ARE DIFFERENT
 * 
 * \n ek valid escape sequence hai
 * 
 * /n sirf normal characters hain
 * 
 * 
 * ! ESCAPE SEQUENCES
 * 
 * what are escape sequences ?
 * 
 * escape sequences special characters hote hain
 * jo backslash (\) se start hote hain
 * 
 * common escape sequences:
 * \n  -> new line
 * \t  -> tab space
 * \f  -> form feed
 * \b  -> backspace
 * \'  -> print '
 * \"  -> print "
 * \r  -> carriage return
 * 
 *
 *
 * ! PRINTING VALUE OF A VARIABLE
 * 
 * printf() mein int ko as it is print nahi kara sakte
 * 
 * kyun ?
 * 
 * kyunki double quotes mein string print hoti hai
 * 
 * agar printf() mein double quotes ke andar kuch likhenge
 * toh compiler usko string hi samjhega
 * 
 * sahi tarika hota hai:
 * %d
 * 
 * ye 2 characters ka combination hai:
 * % aur d
 * 
 * ye double quotes mein likha jata hai
 * 
 * ye khud print nahi hota
 * 
 * balki uske aage likhi hui value ko print karta hai
 * 
 * printf() mein double quotes ke andar jo kuch bhi likhte hain
 * usko kehte hain:
 * format string
 * 
 * aur %d ko bolte hain:
 * format specifier
 * 
 * 
 * ! COMMON FORMAT SPECIFIERS
 * 
 * %d   -> int
 * %c   -> char
 * %f   -> float
 * %lf  -> double
 * 
 * 
 * ! FLOAT PRINTING
 * 
 * %f point ke baad by default 6 digits print karta hai
 * 
 * example:
 * %.2f
 * 
 * ye sirf point ke baad 2 digits print karega
 * 
 * 
 * ! CHARACTER PRINTING
 * 
 * maan lo:
 * 
 * char a = 'A';
 * 
 * agar:
 * %c se print karaya
 * toh A print hoga
 * 
 * agar:
 * %d se print karaya
 * toh 65 print hoga
 * 
 * kyunki internally characters ASCII value ke form mein store hote hain
 * 
 * 
 * ! WRITE printf() STATEMENT TO PRINT FOLLOWING
 * 
 * jitne %d lagayenge
 * utni values print ho sakti hain
 * 
 * example:
 * 
 * printf("%d %d", a, b);
 * 
 * 
 * ! scanf()
 * 
 * scanf() bhi predefined function hai
 * 
 * syntax:
 * scanf("%d", &a);
 * 
 * yaha & ka matlab hota hai:
 * address of
 * 
 * scanf() mein bhi format specifier lagana padta hai
 * scanf() mein address of operator lagana padta hai
 * 
 * example:
 * 
 * scanf("%d %d", &a, &b);
 * 
 * scanf() mein jitne %d lagayenge
 * utne hi variables ke addresses dene padenge
 * 
 */