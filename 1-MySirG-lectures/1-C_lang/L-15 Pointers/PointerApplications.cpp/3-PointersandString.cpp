/**
 * ! POINTERS AND STRINGS
 *
 * Example:
 * char *p;
 * char str[]="Bhopal";
 *
 * p=str;
 *
 * Meaning:
 * p=&str[0]
 *
 * Memory:
 *
 * Index : 0 1 2 3 4 5 6
 * Value : B h o p a l \0
 *
 * Address:
 *
 * str[0] -> 1000
 * str[1] -> 1001
 * str[2] -> 1002
 * str[3] -> 1003
 * str[4] -> 1004
 * str[5] -> 1005
 * str[6] -> 1006
 *
 * p stores:
 * 1000
 *
 * Therefore:
 * p points to first character.
 *
 * 
 * 
 * --------------------------------------------------
 * ! STRING LENGTH USING ARRAY PARAMETER
 *
 * int length1(char s[])
 * {
 *     int i;
 *
 *     for(i=0;s[i];i++);
 *
 *     return i;
 * }
 *
 * How loop works?
 *
 * s[0] -> 'B'
 * s[1] -> 'h'
 * s[2] -> 'o'
 * s[3] -> 'p'
 * s[4] -> 'a'
 * s[5] -> 'l'
 * s[6] -> '\0'
 *
 * Loop runs until '\0' is found.
 *
 * Returned Length:
 * 6
 *
 * Important:
 * s receives base address of string.
 *
 * Inside function:
 * s behaves like pointer.
 *
 * But conceptually we treat it as array notation.
 *
 * --------------------------------------------------
 * ! STRING LENGTH USING POINTER PARAMETER
 *
 * int length2(char *p)
 * {
 *     int i;
 *
 *     for(i=0;p[i];i++);
 *
 *     return i;
 * }
 *
 * Loop works exactly same.
 *
 * p[0] -> 'B'
 * p[1] -> 'h'
 * p[2] -> 'o'
 * p[3] -> 'p'
 * p[4] -> 'a'
 * p[5] -> 'l'
 * p[6] -> '\0'
 *
 * Returned Length:
 * 6
 *
 * --------------------------------------------------
 * ! VERY IMPORTANT INTERVIEW CONCEPT
 *
 * char s[]
 *
 * and
 *
 * char *p
 *
 * are treated almost same in function parameters.
 *
 * Compiler internally converts:
 *
 * char s[]
 *
 * into
 *
 * char *s
 *
 * Therefore:
 *
 * int length1(char s[])
 *
 * and
 *
 * int length1(char *s)
 *
 * are effectively equivalent.
 *
 * --------------------------------------------------
 * ! WHY p[i] WORKS ?
 *
 * Formula:
 *
 * p[i]
 *
 * =
 *
 * *(p+i)
 *
 * Example:
 *
 * p[2]
 *
 * =
 *
 * *(p+2)
 *
 * =
 *
 * 'o'
 *
 * --------------------------------------------------
 * ! DIFFERENCE BETWEEN ARRAY NAME AND POINTER
 *
 * char str[]="Bhopal";
 *
 * char *p=str;
 *
 * Array Name:
 * str is constant.
 *
 * Pointer:
 * p is variable.
 *
 * Valid:
 *
 * p++
 *
 * Because:
 * p is variable.
 *
 * Invalid:
 *
 * str++
 *
 * Because:
 * array name is constant.
 *
 * --------------------------------------------------
 * ! IMPORTANT LINE OF MYSIRG
 *
 * Pointer behaves like array name.
 *
 * Because:
 *
 * p[i]
 * works exactly like
 * str[i]
 *
 * But:
 *
 * Array Name = Constant
 *
 * Pointer = Variable
 *
 * Therefore:
 *
 * p can change.
 *
 * str cannot change.
 *
 * Example:
 *
 * char *p=str;
 *
 * p++;
 *
 * Now p points to:
 *
 * 'h'
 *
 * But:
 *
 * str++;
 *
 * Error.
 *
 * --------------------------------------------------
 * ! QUICK REVISION
 *
 * p=str
 * = p=&str[0]
 *
 * p[i]
 * = *(p+i)
 *
 * String ends with '\0'
 *
 * Length loop runs till '\0'
 *
 * Array name behaves like pointer
 *
 * Array name is constant
 *
 * Pointer is variable
 *
 * p++ -> valid
 *
 * str++ -> invalid
 */