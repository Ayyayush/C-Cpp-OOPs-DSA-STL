/**
 * ! TOKENS
 * 
 * tokens are also known as lexical elements
 * 
 * lexical ka matlab hota hai:
 * shabdik
 * 
 * programming language mein jo bhi ek ek meaningful cheez likhte hain
 * unhe lexical elements ya tokens kehte hain
 * 
 * pure program mein ya toh tokens hote hain
 * ya white spaces
 * 
 * token is the smallest unit of a program
 * which conveys meaning to the compiler
 * 
 * 
 * ! PARSER
 * 
 * parser compiler ka ek part hota hai
 * 
 * iska kaam hota hai:
 * tokens ko separate karna
 * 
 * parser tokens ke type ko bhi recognize karta hai
 * 
 * 
 * ! COMPILATION FLOW
 * 
 * humne pichli lecture mein padha tha ki
 * preprocessor source code ko compilation se pehle process karta hai
 * 
 * aur .c file se ek nayi processed file bana deta hai
 * 
 * compiler us processed file ko read karta hai
 * 
 * hum .c file ke andar jo C language ka code likhte hain
 * usme generally koi change nahi hota
 * 
 * preprocessor sirf un lines ko dekhta hai
 * jo # se start hoti hain
 * 
 * baaki lines mein koi change nahi karta
 * 
 * compiler code ko convert karke
 * ek object file banata hai
 * 
 * object file ke andar machine code hota hai
 * 
 * lekin ye machine code abhi directly run nahi karega
 * 
 * ab linker chalega
 * 
 * linker object files aur library files ko associate karke
 * .exe file banayega
 * 
 * 
 * ! TYPES OF TOKENS
 * 
 * tokens kai types ke hote hain:
 * 
 * 1. Constants / Literals
 * 2. Identifiers
 * 3. Keywords
 * 4. Operators
 * 5. Punctuators
 * 
 * 
 * ! WHITE SPACE
 * 
 * tokens usually white spaces se separate hote hain
 * 
 * white spaces ho sakte hain:
 * 
 * 1. Blank spaces
 * 2. Tabs
 * 3. New lines
 * 4. Form feed
 * 5. Comments
 * 
 * compiler in sab cheezon ko ignore karta hai
 * 
 * white space readability improve karti hai
 * 
 * 
 * ! COMMENTS
 * 
 * comments aisa text hota hai
 * jise compiler ignore karta hai
 * 
 * comments code documentation ke liye useful hote hain
 * 
 * comments programmers ko code samajhne mein help karte hain
 * 
 * comments 2 types ke hote hain:
 * 
 * 1. Single line comment
 * 2. Multi line comment
 * 
 * 
 * ! printf
 * 
 * printf ek function hai
 * variable nahi
 * 
 * aage dekhenge ki function kya hota hai
 * 
 * program banane ka main purpose hota hai:
 * data ko process karna
 * 
 * 
 * ! CONSTANTS
 * 
 * Definition:
 * 
 * constant = information = data
 * 
 * constant wo value hoti hai
 * jo program execution ke dauran change nahi hoti
 * 
 * constants ko literally as it is liya jata hai
 * isliye inhe literals bhi kehte hain
 * 
 * 
 * ! TYPES OF CONSTANTS
 * 
 * constants 2 types ke hote hain:
 * 
 * 1. Primary Constants
 * 2. Secondary Constants
 * 
 * 
 * ! PRIMARY CONSTANTS
 * 
 * primary constants basic fundamental constants hote hain
 * 
 * examples:
 * 
 * 1. Integer
 * 2. Real
 * 3. Character
 * 
 * 
 * ! SECONDARY CONSTANTS
 * 
 * secondary constants primary constants ki help se bante hain
 * 
 * examples:
 * 
 * 1. Array
 * 2. Pointer
 * 3. String
 * 4. Structure
 * 5. Union
 * 6. Enumerator
 * 
 * 
 * ! CHARACTER CONSTANT
 * 
 * koi bhi single symbol character constant ho sakta hai
 * 
 * agar kisi digit ke upar single quotes laga diye
 * toh wo character constant ban jayega
 * 
 * example:
 * 
 * '3'    -> character constant
 * 
 * digit aur number alag cheeze hain
 * 
 * '25'   -> character constant nahi hai
 * '-5'   -> character constant nahi hai
 * '3.4'  -> character constant nahi hai
 * 
 * character constant ke liye
 * single quote ke andar single symbol hona chahiye
 * 
 * '\n' ek special symbol hai
 * aur ye bhi character constant hai
 * 
 * mobile number integer constant hota hai
 * 
 * 
 * ! VARIABLES
 * 
 * Definition:
 * 
 * variable ek memory location ka naam hota hai
 * jahan hum program ka data store karte hain
 * during execution of a program
 * 
 * variable name letters aur digits ka combination ho sakta hai
 * 
 * 
 * ! RULES FOR NAMING VARIABLES
 * 
 * 1. Variable name alphabet ya underscore se start hona chahiye
 * 
 * 2. Variable name mein spaces allowed nahi hote
 * 
 * 3. Special symbols allowed nahi hote
 * 
 * 4. Keywords ko variable name nahi bana sakte
 * 
 * 5. Digits allowed hain
 * but starting mein nahi
 * 
 * 
 * ! KEYWORDS
 * 
 * keywords reserved words hote hain
 * jo compiler ke liye special meaning rakhte hain
 * 
 * keywords predefined hote hain
 * 
 * example:
 * 
 * int
 * float
 * if
 * else
 * while
 * return
 * 
 * 
 * ! IDENTIFIERS
 * 
 * identifiers user defined names hote hain
 * 
 * ye variables, functions, arrays etc. ke naam hote hain
 * 
 * example:
 * 
 * age
 * sum
 * marks
 * calculate()
 * 
 * /**
 * ! DATA CLASSIFICATION
 * 
 * ! What is Data ?
 * 
 * data ka matlab hota hai information
 * 
 * computer ke andar different types ka data store aur process kiya jata hai
 * 
 * different data ko computer mein handle karne ka tareeka bhi different hota hai
 * 
 * 
 * ! FACTORS RESPONSIBLE FOR DATA CLASSIFICATION
 * 
 * data classification mainly in factors par depend karti hai:
 * 
 * 1. Memory size required to store data
 * 
 * 2. Method to convert data into binary
 *    for internal representation
 * 
 * 3. Kind of operations performed on data
 * 
 * 
 * ! DATA TYPES AND THEIR SIZE
 * 
 * int
 * char
 * bool / boolean
 * string
 * float
 * double
 * 
 * 
 * ! BASIC UNDERSTANDING OF DATA TYPES
 * 
 * int type mein integer constants store karte hain
 * 
 * char type mein character constants store karte hain
 * 
 * float aur double mein real constants store karte hain
 * 
 * boolean type mein true ya false values store hoti hain
 * 
 * string mein multiple characters store hote hain
 * 
 * 
 * ! SIZE OF DATA TYPES
 * 
 * char    -> 1 byte
 * bool    -> 1 byte
 * int     -> 4 bytes
 * float   -> 4 bytes
 * double  -> 8 bytes
 * 
 * size compiler aur system ke according vary bhi kar sakti hai
 * 
 * 
 * ! RANGE OF INTEGER DATA TYPES
 * 
 * signed char:
 * -128 to 127
 * 
 * unsigned char:
 * 0 to 255
 * 
 * int:
 * -2147483648 to 2147483647
 * 
 * unsigned int:
 * 0 to 4294967295
 * 
 * 
 * ! TRICK TO REMEMBER INTEGER RANGE
 * 
 * formula:
 * 
 * -(2^(n-1))  to  (2^(n-1) - 1)
 * 
 * yaha n = total number of bits
 * 
 * example:
 * 
 * int = 4 byte = 32 bits
 * 
 * range:
 * 
 * -(2^31) to (2^31 - 1)
 * 
 * 
 * ! VARIABLE DECLARATION
 * 
 * variable declare karne ka syntax:
 * 
 * int a, b;
 * 
 * variable declaration ke baad semicolon lagate hain
 * 
 * 
 * ! GARBAGE VALUE
 * 
 * agar C language mein variable sirf declare kiya ho
 * aur initialize na kiya ho
 * 
 * toh usme garbage value store hoti hai
 * 
 * garbage value random value hoti hai
 * jo memory mein pehle se present hoti hai
 * 
 * 
 * ! WHY DO WE NEED SEMICOLON ?
 * 
 * semicolon statement termination symbol hota hai
 * 
 * compiler ko pata chalta hai
 * ki statement yaha end ho gayi hai
 * 
 * 
 * ! ASCII
 * 
 * ASCII = American Standard Code for Information Interchange
 * 
 * ASCII characters ko numeric values assign karta hai
 * 
 * computer internally characters ko
 * ASCII codes ke form mein represent karta hai
 * 
 * 
 * ! ASCII RANGES
 * 
 * Capital letters:
 * A to Z  -> 65 to 90
 * 
 * Small letters:
 * a to z  -> 97 to 122
 * 
 * Digits:
 * 0 to 9  -> 48 to 57
 * 
 * 
 * ! ASCII INTERNAL REPRESENTATION
 * 
 * maan lo:
 * 
 * 'A' ka ASCII code 65 hai
 * 
 * agar iska binary representation chahiye
 * toh 65 ko binary mein convert kar do
 * 
 * 
 * ! COMMON ASCII VALUES FOR DSA
 * 
 * 'A' -> 65
 * 'Z' -> 90
 * 
 * 'a' -> 97
 * 'z' -> 122
 * 
 * '0' -> 48
 * '9' -> 57
 * 
 * difference between:
 * 
 * 'a' and 'A' = 32
 * 
 * 
 * ! FLOAT VS DOUBLE
 * 
 * float:
 * 
 * 1. 4 bytes memory leta hai
 * 
 * 2. Less precision hoti hai
 * 
 * 3. Approx 6-7 decimal digits tak accurate hota hai
 * 
 * 
 * double:
 * 
 * 1. 8 bytes memory leta hai
 * 
 * 2. More precision hoti hai
 * 
 * 3. Approx 15-16 decimal digits tak accurate hota hai
 * 
 * 
 * ! WHICH ONE IS MORE PRECISE ?
 * 
 * double more precise hota hai compared to float
 * 
 */
 * 
 * 
 */