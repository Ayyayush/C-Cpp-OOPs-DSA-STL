/**
 * ! LOOPS
 * loops ka use kisi block of code ko
 * baar baar execute karne ke liye hota hai
 * 
 * ! WHAT ARE LOOPS ?
 * loop ek programming construct hai
 * jo repeated execution perform karta hai
 * jab tak condition true rahe
 * 
 * ! DEFINITION OF LOOPS
 * loops are iterative control statements
 * used to execute a block of code repeatedly
 * based on a condition
 * 
 * ! TYPES OF LOOPS
 * 1. while loop
 * 2. do while loop
 * 3. for loop
 * 
 * ! ARE LOOPS ALSO ITERATIVE CONTROL STATEMENTS ?
 * yes
 * loops ko iterative control statements bhi kehte hain
 * 
 * iterative ka matlab hota hai:
 * repetition
 * 
 * ! FOR LOOP
 * ! SYNTAX OF FOR LOOP
 * for(initialization ; condition ; updation)
 * {
 *      // code
 * }
 * 
 * ! DESCRIPTION OF FOR LOOP SYNTAX
 * initialization:
 * loop variable ko initialize karta hai
 * ye sirf ek baar execute hota hai
 * 
 * condition:
 * ye check karti hai
 * loop chalega ya nahi
 * 
 * updation:
 * har iteration ke baad
 * variable update hota hai
 * 
 * ! IMPORTANT POINT
 * agar for loop mein tino conditions chhod dein:
 * 
 * for( ; ; )
 * 
 * toh ye bhi valid syntax hai
 * 
 * ye infinite loop ban jayega
 * kyunki koi condition false nahi ho rahi
 * 
 * ! INTERVIEW QUESTION
 * agar hum kisi loop ya conditional statement ka syntax likhte hain
 * toh use kya kehte hain ?
 * 
 * Answer:
 * use statement syntax ya control statement syntax kehte hain
 * 
 * agar hum kisi loop ya conditional statement ka syntax likhtne mein galti kre 
 * toh what will be the  type of error
 * 
 * for eg: if i write syntax of for loop wrong 
 * 
 * if i write syntax of  wgile loop wrong ?
 * 
 * ! DIFFERENCE BETWEEN CONDITIONAL STATEMENTS AND LOOPS
 * conditional statements:
 * decision lene ke liye use hote hain
 * 
 * examples:
 * if
 * if else
 * switch
 * 
 * loops:
 * repeated execution ke liye use hote hain
 * 
 * examples:
 * while
 * do while
 * for
 * 
 * ! WHILE STATEMENT VS WHILE LOOP
 * while ek iterative control statement bhi hai
 * aur usko while loop bhi kehte hain
 * 
 * dono same cheez ko refer karte hain
 * 
 * statement:
 * language construct ko denote karta hai
 * 
 * loop:
 * uske behavior ko denote karta hai
 * 
 * isliye confuse nahi hona chahiye
 * 
 * ! FIBONACCI PROGRAM
 * fibonacci series mein
 * har next term previous 2 terms ka sum hoti hai
 * 
 * example:
 * 0 1 1 2 3 5 8 13
 * 
 * loops ka use fibonacci series generate karne mein hota hai
 * 
 * ! BREAK KEYWORD
 * Definition:
 * break ek keyword hai
 * jo immediately loop ya switch ko terminate kar deta hai
 * 
 * ! BREAK CAN BE USED ONLY AT TWO PLACES
 * 1. Inside body of loop
 * 2. Inside switch body
 * 
 * break control ko
 * loop ke bahar move kar deta hai
 * 
 * ! EXAMPLE OF BREAK WITH WHILE LOOP
 * while(condition)
 * {
 *      if(some_condition)
 *      {
 *           break;
 *      }
 * }
 * 
 * ! CONTINUE KEYWORD
 * continue ek keyword hai
 * continue sirf loop ke body mein use hota hai
 * continue current iteration ko skip karta hai
 * aur control next iteration mein transfer kar deta hai
 * 
 * ! EXAMPLE OF CONTINUE
 * while(condition)
 * {
 *      if(some_condition)
 *      {
 *           continue;
 *      }
 * }
 * 
 * ! NESTED LOOPS
 * ek loop ke andar
 * doosra loop likhna
 * nested loop kehlata hai
 * 
 * ! SYNTAX OF NESTED LOOPS
 * for(...)
 * {
 *      for(...)
 *      {
 * 
 *      }
 * }
 * 
 * ! EXAMPLES OF NESTED LOOPS
 * pattern printing
 * matrix traversal
 * multiplication table
 * 
 * 
 * 
 * ! INTERVIEW QUESTIONS FROM THIS TOPIC
 * 
 * Q1. What are loops ?
 * Answer:
 * loops iterative control statements hote hain
 * jo repeated execution perform karte hain
 * 
 * Q2. Why do we use loops ?
 * Answer:
 * loops repeated execution ke liye use hote hain
 * taaki same code ko baar baar na likhna pade
 * 
 * Q3. Types of loops in C language ?
 * Answer:
 * 1. while
 * 2. do while
 * 3. for
 * 
 * Q4. What is a for loop ?
 * Answer:
 * for loop ek iterative control statement hai
 * jo repeated execution ke liye use hota hai
 * 
 * Q5. What happens in for(;;) ?
 * Answer:
 * ye infinite loop hota hai
 * kyunki koi terminating condition nahi hoti
 * 
 * Q6. Difference between loops and conditional statements ?
 * Answer:
 * conditional statements decision making ke liye use hote hain
 * loops repeated execution ke liye
 * 
 * Q7. What is break statement ?
 * Answer:
 * break loop ya switch ko immediately terminate kar deta hai
 * 
 * Q8. Where can break be used ?
 * Answer:
 * 1. Loop body
 * 2. Switch body
 * 
 * Q9. What is continue statement ?
 * Answer:
 * continue current iteration skip karta hai
 * aur control next iteration mein bhej deta hai
 * 
 * Q10. What are nested loops ?
 * Answer:
 * ek loop ke andar doosra loop likhna
 * nested loop kehlata hai
 * 
 */