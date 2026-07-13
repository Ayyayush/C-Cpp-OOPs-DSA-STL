/**
 * ! SWITCH CASE AND GOTO STATEMENTS IN C LANGUAGE
 * 
 * ! SWITCH CASE CONTROL INSTRUCTION
 * switch case ek multiway decision control instruction hai
 * 
 * jab multiple conditions check karni ho
 * tab switch case use karte hain
 * 
 * ! SYNTAX OF SWITCH CASE
 * switch(expression)
 * {
 *      case constant1:
 *              // code
 *              break;
 * 
 *      case constant2:
 *              // code
 *              break;
 * 
 *      case constant3:
 *              // code
 *              break;
 * 
 *      default:
 *              // code
 * }
 * 
 * ! HOW SWITCH WORKS
 * switch ka expression evaluate hoke
 * ek integer value deta hai
 * 
 * us value ko case constants se compare kiya jata hai
 * 
 * jis case se match hota hai
 * us case ka code execute hota hai
 * 
 * case ke aage integer ya character constant likhte hain
 * 
 * ! EXAMPLE WITHOUT BREAK KEYWORD
 * switch(x)
 * {
 *      case 1:
 *              printf("One");
 * 
 *      case 2:
 *              printf("Two");
 * 
 *      case 3:
 *              printf("Three");
 * }
 * 
 * agar x = 1 ho
 * toh output aayega:
 * OneTwoThree
 * 
 * kyunki break nahi lagaya
 * isliye next cases bhi execute hue
 * 
 * isko fall through behavior kehte hain
 * 
 * ! EXAMPLE WITH BREAK KEYWORD
 * switch(x)
 * {
 *      case 1:
 *              printf("One");
 *              break;
 * 
 *      case 2:
 *              printf("Two");
 *              break;
 * 
 *      case 3:
 *              printf("Three");
 *              break;
 * }
 * 
 * agar x = 1 ho
 * toh sirf One print hoga
 * 
 * break milte hi
 * control switch body ke bahar chala jata hai
 * 
 * ! NOTES
 * two or more case constants same nahi ho sakte
 * 
 * aisa nahi hai ki break keyword nahi likha
 * toh code run hi nahi karega
 * 
 * break na hone par
 * next cases bhi execute ho jate hain
 * 
 * case constants integers aur character constants ho sakte hain
 * 
 * real constants allowed nahi hote
 * 
 * hum cases aur default ko
 * kisi bhi order mein likh sakte hain
 * 
 * break keyword encounter hote hi
 * control switch body ke bahar move kar jata hai
 * 
 * case ke aage variable nahi likh sakte
 * 
 * ! WRONG EXAMPLE
 * case x>=1 && x<=20:
 * 
 * ye wrong hai
 * kyunki yaha variable aur expression use hua hai
 * 
 * ! VALID RANGE STYLE
 * case 1 ... 10:
 * 
 * ! MENU DRIVEN PROGRAM
 * menu driven program mein
 * hum user ko choices dete hain
 * 
 * user ki choice ke according
 * operation perform hota hai
 * 
 * ! MENU DRIVEN PROGRAM EXAMPLE
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      int x,a,b;
 * 
 *      printf("1. Addition\n");
 *      printf("2. Subtraction\n");
 *      printf("3. Multiplication\n");
 *      printf("4. Division\n");
 * 
 *      scanf("%d",&x);
 * 
 *      printf("Enter two numbers:");
 *      scanf("%d%d",&a,&b);
 * 
 *      switch(x)
 *      {
 *              case 1:
 *                      printf("Sum = %d",a+b);
 *                      break;
 * 
 *              case 2:
 *                      printf("Difference = %d",a-b);
 *                      break;
 * 
 *              case 3:
 *                      printf("Product = %d",a*b);
 *                      break;
 * 
 *              case 4:
 *                      printf("Division = %d",a/b);
 *                      break;
 * 
 *              default:
 *                      printf("Invalid Choice");
 *      }
 * }
 * 
 * ! GOTO KEYWORD
 * Definition:
 * goto ek jump statement hai
 * jo control ko directly kisi labeled statement par bhej deta hai
 * 
 * ! SYNTAX OF GOTO
 * goto label;
 * 
 * label:
 *      // code
 * 
 * ! EXAMPLE OF GOTO
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      int x=1;
 * 
 *      if(x==1)
 *              goto abc;
 * 
 *      printf("Hello\n");
 * 
 * abc:
 *      printf("Welcome");
 * }
 * 
 * ! WHY IS GOTO USED ?
 * goto ka use direct jump ke liye hota hai
 * 
 * control kaha pahunchta hai
 * ye depend karta hai
 * ki goto ke aage kaunsa label likha hai
 * 
 * goto C se pehle ki languages mein bhi tha
 * 
 * ! WHY GOTO IS NOT USED NOW ?
 * goto use karne se
 * program ka flow samajhne mein dikkat hoti hai
 * 
 * isliye modern programming mein
 * goto generally avoid kiya jata hai
 * 
 * ! INTERVIEW QUESTION
 * can we make a program in which
 * both if and else blocks execute ?
 * 
 * yes
 * goto ki help se possible hai
 * 
 * ! EXAMPLE
 * #include<stdio.h>
 * 
 * int main()
 * {
 *      int x=1;
 * 
 *      if(x==1)
 *      {
 *              printf("Inside If\n");
 *              goto xyz;
 *      }
 *      else
 *      {
 * xyz:
 *              printf("Inside Else");
 *      }
 * }
 * 
 * ! INTERVIEW QUESTIONS FROM THIS TOPIC
 * 
 * Q1. What is switch case statement ?
 * Answer:
 * switch case ek multiway decision control statement hai
 * jo multiple conditions ko handle karta hai
 * 
 * Q2. Which type of values are allowed in case labels ?
 * Answer:
 * integer constants aur character constants
 * 
 * real constants allowed nahi hote
 * 
 * Q3. What happens if break is not used ?
 * Answer:
 * control next cases mein bhi chala jata hai
 * 
 * isko fall through behavior kehte hain
 * 
 * Q4. Can duplicate case labels exist ?
 * Answer:
 * no
 * two case constants same nahi ho sakte
 * 
 * Q5. Can variables be used in case labels ?
 * Answer:
 * no
 * case labels mein constants hi allowed hote hain
 * 
 * Q6. What is goto statement ?
 * Answer:
 * goto ek jump statement hai
 * jo control ko directly labeled statement par bhej deta hai
 * 
 * Q7. Why goto is avoided in modern programming ?
 * Answer:
 * kyunki goto use karne se
 * program ka flow confusing ho jata hai
 * 
 */