/**
 * ! STRINGS
 * 
 * ! STRING INTRODUCTION
 * string is a sequence of characters
 * terminated by null character
 * 
 * C language mein strings
 * char arrays ki help se handle hoti hain
 * 
 * ! EXAMPLE
 * char str[10];
 * 
 * yaha str ek character array hai
 * jo string store karega
 * 
 * ! IMPORTANT
 * string ke end mein
 * automatic null character '\0' lagta hai
 * 
 * isi null character ki help se
 * compiler ko pata chalta hai
 * ki string kaha end hui
 * 
 * ! INITIALIZING CHAR ARRAY DURING DECLARATION
 * char str[10]={'a','e','i','o','u','\0'};
 * 
 * ya
 * 
 * char str[]="aeiou";
 * 
 * dono valid hain
 * 
 * ! ASCII CODE OF NULL CHARACTER
 * null character '\0' ka ASCII code 0 hota hai
 * 
 * ! IMPORTANT
 * null character ko screen pe print karane par
 * kuch visible output nahi aata
 * 
 * blank jaisa lagta hai
 * kyunki ye terminating character hota hai
 * 
 * ! PRINTING STRINGS IN C LANGUAGE
 * string ko printf() ki help se print karte hain
 * 
 * ! EXAMPLE
 * char str[]="hello";
 * 
 * printf("%s",str);
 * 
 * ! IMPORTANT THINGS ABOUT STRINGS IN C LANGUAGE
 * string internally character array hoti hai
 * 
 * har character alag memory location mein store hota hai
 * 
 * kyunki:
 * char datatype generally 1 byte memory leta hai
 * 
 * aur array ka har element
 * alag memory location occupy karta hai
 * 
 * ! MEMORY REPRESENTATION
 * char str[]="hello";
 * 
 * suppose base address = 2000
 * 
 * Address      Value
 * ----------------------
 * 2000         h
 * 2001         e
 * 2002         l
 * 2003         l
 * 2004         o
 * 2005         '\0'
 * 
 * ! IMPORTANT
 * poori string continuous memory mein store hoti hai
 * 
 * lekin uske andar
 * har character ka separate memory location hota hai
 * 
 * ! WHY INDEXING STARTS FROM 0 IN STRINGS ALSO ?
 * strings internally arrays hi hoti hain
 * 
 * array indexing base address se offset represent karti hai
 * 
 * str[0]
 * means:
 * base address se 0 distance
 * 
 * isliye indexing naturally 0 se start hoti hai
 * 
 * ! EXAMPLE
 * char str[]="hello";
 * 
 * str[0] -> h
 * str[1] -> e
 * str[2] -> l
 * str[3] -> l
 * str[4] -> o
 * str[5] -> '\0'
 * 
 * ! CALCULATING LENGTH OF STRING WITHOUT BUILT IN FUNCTION
 * int i=0;
 * 
 * while(str[i]!='\0')
 * {
 *      i++;
 * }
 * 
 * cout<<i;
 * 
 * ! LOGIC
 * loop tab tak chalega
 * jab tak null character nahi milta
 * 
 * null character milte hi
 * string khatam maan li jati hai
 * 
 * ! CALCULATING LENGTH OF STRING
 * string ki length calculate karne ke liye
 * strlen() function use hota hai
 * 
 * ! EXAMPLE
 * char str[]="hello";
 * 
 * strlen(str);
 * 
 * output:
 * 5
 * 
 * ! IMPORTANT
 * strlen() null character ko count nahi karta
 * 
 * ! scanf USES DELIMITERS
 * scanf delimiters ki help se
 * input ko separate karta hai
 * 
 * ! DEFAULT DELIMITERS OF scanf
 * 1. Space
 * 2. Tab Space
 * 3. New Line Character
 * 
 * ! WHAT ARE DELIMITERS ?
 * delimiters wo special characters hote hain
 * jo input ko separate karte hain
 * 
 * ! WAYS OF TAKING STRING INPUT IN C LANGUAGE
 * 1. scanf()
 * 2. gets()
 * 3. fgets()
 * 
 * ! INPUT USING scanf
 * scanf("%s",str);
 * 
 * ! PROBLEM WITH scanf
 * scanf whitespace encounter karte hi
 * input lena stop kar deta hai
 * 
 * ! EXAMPLE
 * input:
 * Hello World
 * 
 * scanf sirf:
 * Hello
 * lega
 * 
 * ! WHAT IS stdin ?
 * stdin ka full form hota hai:
 * standard input
 * 
 * by default keyboard
 * stdin se connected hota hai
 * 
 * ! INPUT USING fgets
 * fgets(str,size,stdin);
 * 
 * yaha:
 * str -> string store karne ke liye
 * size -> maximum input size
 * stdin -> keyboard se input lene ke liye
 * 
 * ! ADVANTAGE OF fgets
 * fgets spaces bhi read karta hai
 * 
 * isliye full sentence input ke liye
 * fgets better hai
 * 
 * ! EXAMPLE WITH fgets
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      char str[100];
 * 
 *      fgets(str,100,stdin);
 * 
 *      printf("%s",str);
 * }
 * 
 * ! INPUT USING gets
 * gets(str);
 * 
 * ! IMPORTANT
 * gets() spaces read karta hai
 * 
 * lekin unsafe function hai
 * 
 * buffer overflow ka risk hota hai
 * 
 * isliye modern C mein gets() avoid karte hain
 * 
 * ! EXAMPLE WITH gets
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      char str[100];
 * 
 *      gets(str);
 * 
 *      printf("%s",str);
 * }
 * 
 * ! DIFFERENCE BETWEEN scanf AND fgets
 * scanf:
 * spaces handle nahi karta
 * 
 * fgets:
 * spaces handle karta hai
 * aur safer bhi hota hai
 * 
 * ! DIFFERENCE BETWEEN STRINGS IN C AND C++
 * C language:
 * strings char arrays ki form mein handle hoti hain
 * 
 * C++ language:
 * string ek built in class hai
 * 
 * ! EXAMPLE
 * #include<string>
 * 
 * string s="hello";
 * 
 * C++ strings easier aur more powerful hoti hain
 * 
 * ! NULL CHARACTER
 * null character '\0'
 * string terminating character hota hai
 * 
 * ye batata hai
 * ki string kaha end hui
 * 
 * bina null character ke
 * string properly work nahi karegi
 * 
 * 
 * 
 * ! STRING FUNCTIONS IN C
 * #include<string.h>
 * 
 * ! strlen()
 * string ki length calculate karta hai
 * 
 * ! EXAMPLE
 * char str[]="MySirG";
 * 
 * int l=strlen(str);
 * 
 * ! strcpy()
 * ek string ko dusri string mein copy karta hai
 * 
 * ! EXAMPLE
 * char s1[30];
 * char s2[30]="Hello";
 * 
 * strcpy(s1,s2);
 * 
 * ! strcat()
 * do strings ko join karta hai
 * 
 * ! EXAMPLE
 * char s1[30]="Hello";
 * char s2[30]="Students";
 * 
 * strcat(s1,s2);
 * 
 * Result:
 * HelloStudents
 * 
 * ! strcmp()
 * do strings ko compare karta hai
 * 
 * ! EXAMPLE
 * char s1[30]="Rahul";
 * char s2[30]="Rajesh";
 * 
 * strcmp(s1,s2);
 * 
 * ! RETURN VALUES OF strcmp()
 * -1 -> first string dictionary mein pehle aati hai
 *  0 -> dono strings same hain
 * +1 -> first string dictionary mein baad mein aati hai
 * 
 * ! PRINTING STRING CHARACTERS ONE BY ONE
 * char str[20]="MySirG";
 * int i;
 * 
 * for(i=0;str[i];i++)
 * {
 *      printf("%c",str[i]);
 * }
 * 
 * ! IMPORTANT
 * str[i] internally:
 * string ka har character access karta hai
 * 
 * ! PRINTING COMPLETE STRING
 * printf("%s",str);
 * 
 * ! IMPORTANT
 * str actually first character ka address store karta hai
 * 
 * str == &str[0]
 * 
 * ! MEMORY CONCEPT
 * address:
 * memory mein kisi byte ki position ko address kehte hain
 * 
 * ! FUNCTION CALL BY PASSING STRING
 * void f(char s[])
 * {
 *      printf("%s",s);
 * }
 * 
 * int main()
 * {
 *      f("Bhopal");
 * }
 * 
 * ! IMPORTANT
 * string function mein pass karne par
 * actually uska base address pass hota hai
 * 
 * ! HANDLING MULTIPLE STRINGS
 * char str[3][10];
 * 
 * yaha:
 * 3 strings store hongi
 * 
 * aur har string ka maximum size 10 hoga
 * 
 * ! TAKING INPUT OF MULTIPLE STRINGS
 * for(i=0;i<=2;i++)
 * {
 *      gets(str[i]);
 * }
 * 
 * ! ACCESSING MULTIPLE STRINGS
 * str[0]
 * str[1]
 * str[2]
 * 
 * ! INTERVIEW QUESTIONS ON STRINGS
 * 
 * Q1. What is a string ?
 * Answer:
 * string is a sequence of characters
 * terminated by null character
 * 
 * Q2. How are strings stored in C language ?
 * Answer:
 * strings char arrays mein store hoti hain
 * 
 * Q3. What is null character ?
 * Answer:
 * null character '\0'
 * string ending ko represent karta hai
 * 
 * Q4. ASCII code of null character ?
 * Answer:
 * ASCII code of null character is 0
 * 
 * Q5. Why is null character important ?
 * Answer:
 * null character compiler ko batata hai
 * ki string kaha terminate hui
 * 
 * Q6. What are delimiters ?
 * Answer:
 * delimiters special characters hote hain
 * jo input ko separate karte hain
 * 
 * Q7. Default delimiters of scanf ?
 * Answer:
 * space
 * tab space
 * new line character
 * 
 * Q8. What is stdin ?
 * Answer:
 * stdin means standard input
 * 
 * by default keyboard stdin se connected hota hai
 * 
 * Q9. Difference between scanf and fgets for strings ?
 * Answer:
 * scanf spaces read nahi karta
 * 
 * fgets spaces bhi read karta hai
 * 
 * Q10. Why is gets() avoided ?
 * Answer:
 * because gets() unsafe hai
 * aur buffer overflow ka risk hota hai
 * 
 * Q11. What does strlen() do ?
 * Answer:
 * strlen() string ki length calculate karta hai
 * 
 * null character count nahi hota
 * 
 * Q12. What does strcpy() do ?
 * Answer:
 * strcpy() ek string ko dusri string mein copy karta hai
 * 
 * Q13. What does strcat() do ?
 * Answer:
 * strcat() do strings ko join karta hai
 * 
 * Q14. What does strcmp() do ?
 * Answer:
 * strcmp() do strings ko compare karta hai
 * 
 * Q15. Difference between strings in C and C++ ?
 * Answer:
 * C mein strings char arrays hoti hain
 * 
 * C++ mein string ek class hoti hai
 * 
 */