/**
 * ! FUNCTIONS IN C / C++
 * function is a building block of a C program
 * function is a block of code which has some name for identification
 * a C program can have any number of functions
 * 
 * ! SYNTAX OF FUNCTION
 * return_type function_name(parameters)
 * {
 *      //code
 * }
 * 
 * ? WHAT IS FUNCTION DEFINITION ?
 * function definition means
 * function ka actual code likhna
 * 
 * ! IMPORTANT POINTS
 * function name must be unique in a C program
 * function definition aur function call mein difference hota hai
 * function is a way to implement modularization
 * 
 * ! MODULARIZATION
 * modularization means
 * bade task ko chote chote sub tasks mein divide karna
 * taaki program ki complexity kam ho
 * 
 * 
 * ! MAIN FUNCTION
 * A C++ program cannot run without a main function because the C++ ISO standard
 * designates it as the mandatory entry point for execution in 
 * hosted environments (like Windows, Linux, or macOS)
 * 
 * hum main function ko compile kar sakte hain
 * lekin bina main function ke program run nahi hota
 * 
 * C/C++ program cannot run without main function
 * because main execution ka entry point hota hai
 * 
 * compilation aur execution alag cheeze hain
 * compiler source code ko object file mein convert karta hai
 * linker executable banate waqt main function search karta hai
 * 
 * 
 * 
 * ! TYPES OF FUNCTIONS
 * 1. Predefined Functions
 * 2. User Defined Functions
 * 
 * ! PREDEFINED FUNCTIONS
 * predefined functions already library mein defined hote hain
 * 
 * examples:
 * printf()
 * scanf()
 * exit()
 * 
 * ! IMPORTANT
 * no keyword is a function remember it
 * 
 * ! USER DEFINED FUNCTIONS
 * jo functions programmer khud banata hai
 * unhe user defined functions kehte hain
 * 
 * main function predefined nahi hota
 * main function user defined function hai
 * 
 * ! MAIN FUNCTION
 * main function entry point hota hai
 * execution hamesha main function se start hota hai
 * Operating system calls main function ...so  ek tarike se 
 * humne kha ki main ko call karo jab hume program run kara
 * 
 * ! FLOW OF PROGRAM
 * int main()
 * {
 *      a();
 *      b();
 *      c();
 * }
 * 
 * yaha a,b,c user defined functions hain
 * 
 * ! RULES TO REMEMBER
 * function kisi bhi order mein define ho sakte hain
 * execution hamesha main function se begin hota hai
 * function tabhi execute hota hai jab usko call kiya jaye
 * 
 * operating system main function ko call karta hai
 * 
 * ek tarike se hum operating system ko kehte hain
 * ki jab program run ho toh main function ko call karo
 * 
 * technically hum main ko bhi call kar sakte hain
 * but generally nahi karte
 * 
 * 
 * 
 * ! IMPORTANT INTERVIEW POINT
 * C++ mein legally main function ko recursively call nahi karna chahiye
 * 
 * C language mein technically possible hai
 * but discouraged hai
 * 
 * ! EXAMPLE OF CALLING MAIN FUNCTION
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      static int count=1;
 *      char choice;
 * 
 *      printf("Main has been called %d time(s)\n",count++);
 * 
 *      printf("Call main again ? (y/n): ");
 *      scanf(" %c",&choice);
 * 
 *      if(choice=='y' || choice=='Y')
 *      {
 *              main();
 *      }
 *      else
 *      {
 *              printf("Exiting...");
 *      }
 * 
 *      return 0;
 * }
 * 
 * ! MEMORY ALLOCATION OF FUNCTIONS
 * jab bhi koi function call hota hai
 * usko main memory mein memory allocate hoti hai
 * 
 * jab function ka code execute ho jata hai
 * toh function ki memory release ho jati hai
 * 
 * aur control wahi return hota hai
 * jaha se function call hua tha
 * 
 * ! WAYS TO DEFINE FUNCTIONS
 * 1. Take nothing return nothing
 * 2. Take something return nothing
 * 3. Take nothing return something
 * 4. Take something return something
 * 
 * ! TAKE NOTHING RETURN NOTHING
 * #include<iostream>
 * using namespace std;
 * 
 * //take nothing hai toh parenthesis empty hai
 * void add()
 * {
 *      int a,b,sum;
 * 
 *      cin>>a>>b;
 * 
 *      sum=a+b;
 * 
 *      cout<<"sum is "<<sum;
 * 
 *      //no return keyword
 *      //so return nothing type ka hai
 * }
 * 
 * int main()
 * {
 *      add();
 * 
 *      return 0;
 * 
 *      //int datatype ki value return ho rahi hai
 *      //isliye return something hai
 * }
 * 
 * ! TAKE SOMETHING RETURN NOTHING
 * #include<iostream>
 * using namespace std;
 * 
 * void add(int,int);
 * 
 * //void simpleinterest(int p,int q,int r);
 * 
 * int main()
 * {
 *      int x=3,y=4;
 * 
 *      add(x,y);
 * 
 *      //ye actual arguments hain
 * 
 *      return 0;
 * }
 * 
 * //parenthesis empty nahi hoga
 * void add(int a,int b)
 * {
 *      //ye formal arguments hain
 * 
 *      //dobara int a,b declare nahi karenge
 * 
 *      int sum;
 * 
 *      sum=a+b;
 * 
 *      //yaha function values take kar raha hai
 * 
 *      cout<<sum<<endl;
 * }
 * 
 * ! IMPORTANT NOTES
 * sabhi values ke liye alag alag datatype likhna padega
 * 
 * ! TAKE NOTHING RETURN SOMETHING
 * #include<iostream>
 * using namespace std;
 * 
 * int add()
 * {
 *      int a,b;
 * 
 *      cin>>a>>b;
 * 
 *      return a+b;
 * }
 * 
 * int main()
 * {
 *      int s;
 * 
 *      s=add();
 * 
 *      cout<<"sum is "<<s;
 * 
 *      return 0;
 * }
 * 
 * ! TAKE SOMETHING RETURN SOMETHING
 * #include<iostream>
 * using namespace std;
 * 
 * int add(int,int);
 * 
 * int main()
 * {
 *      int s,x=3,y=4;
 * 
 *      //call by value ho raha hai
 *      //kyunki values pass ho rahi hain
 * 
 *      s=add(x,y);
 * 
 *      //actual arguments
 *      //return hoke value yahi aayegi
 * 
 *      cout<<"sum is "<<s<<endl;
 * 
 *      return 0;
 * }
 * 
 * //parenthesis khali nahi hoga
 * int add(int a,int b)
 * {
 *      //formal arguments
 * 
 *      int c=a+b;
 * 
 *      //taking something
 * 
 *      cout<<c<<endl;
 * 
 *      return c;
 * 
 *      //return something
 * }
 * 
 * ! IMPORTANT RULE
 * agar function kuch return kar raha hai
 * toh return keyword likhna chahiye
 * 
 * return keyword ke aage
 * usi datatype ki value honi chahiye
 * jis datatype ka function hai
 * 
 * ! GLOBAL VARIABLES
 * global variable tabhi banao
 * jab uski jarurat pure program mein ho
 * 
 * swarthi mat bano
 * unnecessary global variables avoid karo
 * 
 * ! FUNCTION DECLARATION
 * hum function define karne se pehle
 * function ko declare bhi kar sakte hain
 * 
 * ! EXAMPLE OF FUNCTION DECLARATION
 * void add();
 * 
 * ! IMPORTANT RULE
 * function ke parenthesis ke andar
 * utne hi variables likho
 * jitne wo function use karega
 * 
 */