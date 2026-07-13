/**
 * ! DECISION CONTROL STATEMENTS IN C LANGUAGE
 * humne declaration statements dekhe
 * ab hum action statements dekhte hain
 * 
 * action statements ko bhi divide kar sakte hain:
 * 1. Input / Output Instructions
 * 2. Arithmetic Instructions
 * 3. Control Instructions
 * 
 * ! CONTROL INSTRUCTIONS
 * control instructions se hum processor ka control
 * kis line par jayega ye decide karte hain
 * ye bahut important hai yaad rakhna
 * 
 * by default processor line by line execute karta hai
 * lekin kabhi kabhi hum chahte hain
 * ki processor ka control kis line par jaye
 * wo hum decide karein
 * 
 * ! TYPES OF CONTROL INSTRUCTIONS
 * 1. Decision Control
 * 2. Iterative Control
 * 3. Switch Case Control
 * 4. Goto Control
 * 
 * ! DECISION CONTROL INSTRUCTIONS
 * decision control instructions ka use
 * decision lene ke liye hota hai
 * 
 * condition true ya false hone ke according
 * code execute hota hai
 * 
 * ! IF STATEMENT
 * Interview Definition:
 * if statement ek decision control statement hai
 * jo condition true hone par
 * specific block of code execute karta hai
 * 
 * ! SYNTAX OF IF
 * if(condition)
 * {
 *      // code
 * }
 * 
 * ! IMPORTANT POINTS ABOUT IF
 * if ke andar variable declare kar sakte hain
 * 
 * braces lagane se wo function nahi ban jata
 * kyunki function aur block alag cheeze hain
 * 
 * if ek keyword hai
 * aur koi bhi keyword function nahi hota
 * 
 * kisi function ka naam keyword nahi ho sakta
 * 
 * if ke andar condition likhi jati hai
 * agar condition true hogi
 * toh control braces ke andar wale code mein jayega
 * 
 * ! WHY DO WE NEED IF STATEMENTS ?
 * interviewer agar puche ki
 * if statements ki jarurat kya hai
 * toh ATM ka example de sakte hain
 * 
 * ATM machine mein bahut saare options ka code likha hota hai:
 * balance check
 * cash withdraw
 * pin change
 * mini statement
 * 
 * maan lo maine sirf balance check kiya
 * toh iska matlab ye nahi
 * ki baaki code useless hai
 * 
 * har code apni condition aur requirement ke according execute hota hai
 * isi purpose ke liye if statements use hoti hain
 * 
 * ! IF ELSE
 * Definition:
 * if else statement mein
 * agar condition true ho
 * toh if block execute hota hai
 * warna else block execute hota hai
 * 
 * ! SYNTAX OF IF ELSE
 * if(condition)
 * {
 *      // true block
 * }
 * else
 * {
 *      // false block
 * }
 * 
 * ! IF ELSE IF
 * multiple conditions check karne ke liye
 * if else if use hota hai
 * 
 * ! SYNTAX OF IF ELSE IF
 * if(condition1)
 * {
 * 
 * }
 * else if(condition2)
 * {
 * 
 * }
 * else
 * {
 * 
 * }
 * 
 * ! CONDITIONAL OPERATOR
 * Definition:
 * conditional operator ek decision making operator hai
 * ise ternary operator bhi kehte hain
 * 
 * ye ekmatra ternary operator hai C language mein
 * 
 * ! SYNTAX OF TERNARY OPERATOR
 * condition ? expression1 : expression2;
 * 
 * ! NESTED IF ELSE
 * ek if else ke andar
 * doosra if else likhna
 * nested if else kehlata hai
 * 
 * ! SYNTAX OF NESTED IF ELSE
 * if(condition1)
 * {
 *      if(condition2)
 *      {
 * 
 *      }
 *      else
 *      {
 * 
 *      }
 * }
 * else
 * {
 * 
 * }
 * 
 * ! READABILITY
 * if else ladder
 * nested if else se zyada readable hoti hai
 * 
 * ! BEGINNER LEVEL QUESTION
 * write a program to check
 * whether a number is positive or negative
 * also print hello in the same program
 * 
 * ! FLOW OF CONTROL
 * processor ka control jis line par jata hai
 * wahi line execute hoti hai
 * 
 * by default control line by line move karta hai
 * lekin control instructions ki help se
 * hum decide kar sakte hain
 * ki processor ka control kis line par jaye
 * 
 */