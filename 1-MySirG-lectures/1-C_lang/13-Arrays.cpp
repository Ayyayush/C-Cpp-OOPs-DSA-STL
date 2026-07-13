/**
 * Arrays
 * 
 * Array is a linear collection of similar elements.
 * Array is also known as collection of subscripted elements.
 * Array is a group of elements of same datatype.
 * 
 * Example:
 * int a[5];
 * 
 * Here:
 * → all 5 elements are integers
 * 
 * =========================================================
 * ! ARRAY INTRODUCTION
 * =========================================================
 * 
 * Question:
 * "Write a program to calculate average of 100 numbers."
 * 
 * ! WHY ARRAYS?
 * 
 * Agar array nahi hota:
 * 
 * int a1,a2,a3,a4........a100;
 * 
 * 100 alag variables banane padte.
 * 
 * Problems:
 * → lengthy code
 * → difficult to manage
 * → difficult calculations
 * → loops effectively use nahi kar paate
 * 
 * Isliye arrays use karte hain.
 * 
 * =========================================================
 * ! ARRAY DECLARATION
 * =========================================================
 * 
 * int a[100],sum=0;
 * float avg;
 * 
 * Meaning:
 * 
 * a[100]
 * → 100 integer values store karega
 * 
 * sum
 * → total calculate karega
 * 
 * avg
 * → average store karega
 * 
 * =========================================================
 * ! MEMORY REPRESENTATION
 * =========================================================
 * 
 * Index:
 * 0 1 2 3 4 ........ 98 99
 * 
 * Array:
 * [][][][][]........[][]
 * 
 * Array continuous memory locations me store hota hai.
 * 
 * Example:
 * 
 * int a[5];
 * 
 * Assume:
 * a[0] starts at address 100
 * 
 * Then:
 * a[0] -> 100
 * a[1] -> 104
 * a[2] -> 108
 * a[3] -> 112
 * a[4] -> 116
 * 
 * (assuming int takes 4 bytes)
 * 
 * =========================================================
 * ! IMPORTANT POINT
 * =========================================================
 * 
 * Array indexing starts from:
 * 
 * 0
 * 
 * First element:
 * → a[0]
 * 
 * Last element:
 * → a[99]
 * 
 * Because total size = 100
 * 
 * So indexes:
 * → 0 to 99
 * 
 * =========================================================
 * ! TERMINOLOGIES
 * =========================================================
 * 
 * ! INDEX / POSITION
 * 
 * Example:
 * a[3]
 * 
 * Here:
 * 3 = index / position
 * 
 * Ye bolna galat hoga ki:
 * 
 * "a[3] pe jo element h uska naam a[3] hai"
 * 
 * Ye galat hai.
 * 
 * Us element ka koi naam nahi hota.
 * 
 * Hum bas:
 * → usko a[3] se access kar rahe hain.
 * 
 * Example:
 * 
 * int a[100];
 * 
 * → ye total number of variables hain array me
 * 
 * a[3]=25;
 * → iss index pe value store kar rahe hain
 * 
 * cout<<a[3];
 * → iss index ki value access kar rahe hain
 * 
 * Inn teeno ka difference pata hona chahiye.
 * 
 * 
 * 
 * 
 * ! WHY INDEXING STARTS FROM 0 IN ARRAYS ?
 * 
 * ye bahut important interview question hai
 * 
 * ! FIRST UNDERSTAND ARRAY MEMORY
 * array memory mein continuous locations mein store hota hai
 * 
 * example:
 * int arr[5]={10,20,30,40,50};
 * 
 * maan lo:
 * arr ka base address = 1000
 * 
 * int generally 4 bytes leta hai
 * 
 * toh memory kuch aisi hogi:
 * 
 * arr[0] -> 1000
 * arr[1] -> 1004
 * arr[2] -> 1008
 * arr[3] -> 1012
 * arr[4] -> 1016
 * 
 * ! IMPORTANT
 * array indexing directly address calculation se related hai
 * 
 * ! ADDRESS FORMULA
 * address of arr[i]
 * =
 * base address + (i * size of datatype)
 * 
 * ! EXAMPLE
 * arr[2]
 * 
 * address:
 * 1000 + (2 * 4)
 * =
 * 1008
 * 
 * ! NOW THINK
 * agar indexing 1 se start hoti
 * toh formula:
 * 
 * base + ((i-1) * size)
 * 
 * ho jata
 * 
 * har baar extra subtraction karna padta
 * 
 * ! SO WHY 0 INDEXING ?
 * because:
 * 
 * arr[0]
 * =
 * base address + (0 * size)
 * =
 * base address
 * 
 * matlab:
 * first element directly base address pe mil gaya
 * 
 * koi extra calculation nahi karni padi
 * 
 * ! POINTER CONNECTION
 * array name actually first element ka address hota hai
 * 
 * example:
 * arr
 * ==
 * &arr[0]
 * 
 * aur:
 * 
 * arr[i]
 * internally same hota hai:
 * 
 * *(arr+i)
 * 
 * ! EXAMPLE
 * arr[2]
 * 
 * internally:
 * *(arr+2)
 * 
 * compiler:
 * base address se 2 elements aage move karega
 * 
 * ! WHY 0 IS NATURAL IN MEMORY
 * index actually offset represent karta hai
 * 
 * offset matlab:
 * base address se kitna distance
 * 
 * arr[0]
 * means:
 * base address se 0 distance
 * 
 * arr[1]
 * means:
 * base address se 1 element distance
 * 
 * ! INTERVIEW POINT
 * indexing starts from 0
 * because array index represents offset
 * from base address
 * 
 * and first element ka offset naturally 0 hota hai
 * 
 * ! HISTORY POINT
 * C language pointer arithmetic based language hai
 * 
 * arrays aur pointers closely related hain
 * 
 * isliye 0 based indexing use hui
 * 
 * baad mein almost saari modern languages ne bhi
 * same convention follow kiya
 * 
 * ! ADVANTAGES OF 0 BASED INDEXING
 * 1. simpler address calculation
 * 2. faster execution
 * 3. efficient pointer arithmetic
 * 4. hardware level mapping easy hoti hai
 * 
 * ! INTERVIEW ANSWER (SHORT FORM)
 * array indexing starts from 0
 * because index represents offset from base address
 * 
 * first element ka offset 0 hota hai
 * 
 * isliye:
 * arr[0]
 * directly base address ko represent karta hai
 * 
 * which makes address calculation simpler and efficient
 * 
 *
 * 
 * =========================================================
 * ! SUBSCRIPT OPERATOR
 * =========================================================
 * 
 * []
 * 
 * Square brackets are called:
 * → subscript operator
 * 
 * Used to access array elements.
 * 
 * Example:
 * a[3]
 * 
 * =========================================================
 * ! SUBSCRIPT VALUE
 * =========================================================
 * 
 * a[3]=25;
 * 
 * Meaning:
 * 
 * a
 * → array name
 * 
 * 3
 * → index / subscript
 * 
 * 25
 * → stored value
 * 
 * Means:
 * 
 * index 3 pe 25 stored hai.
 * 
 * =========================================================
 * ! VISUAL UNDERSTANDING
 * =========================================================
 * 
 * a[0]=10
 * a[1]=20
 * a[2]=30
 * a[3]=25
 * 
 * Index:
 * 0 1 2 3
 * 
 * Values:
 * 10 20 30 25
 * 
 * =========================================================
 * ! ACCESSING ELEMENTS
 * =========================================================
 * 
 * cout<<a[3];
 * 
 * Output:
 * 25
 * 
 * Because:
 * index 3 pe 25 stored hai.
 * 
 * =========================================================
 * ! TAKING INPUT
 * =========================================================
 * 
 * for(i=0;i<100;i++)
 * {
 *     cin>>a[i];
 * }
 * 
 * Loop:
 * 0 → 1 → 2 → 3 .... 99
 * 
 * Har position pe value store hoti jaati hai.
 * 
 * =========================================================
 * ! SUM CALCULATION
 * =========================================================
 * 
 * for(i=0;i<100;i++)
 * {
 *     sum=sum+a[i];
 * }
 * 
 * Har element:
 * → previous sum me add hota jaata hai.
 * 
 * =========================================================
 * ! AVERAGE
 * =========================================================
 * 
 * avg=sum/100.0;
 * 
 * 100.0:
 * → floating point division
 * 
 * warna integer division ho jaata.
 * 
 * Example:
 * 
 * 5/2 = 2
 * 
 * But:
 * 
 * 5/2.0 = 2.5
 * 
 * =========================================================
 * ! COMPLETE FLOW
 * =========================================================
 * 
 * STEP 1:
 * → array create karo
 * 
 * STEP 2:
 * → loop se input lo
 * 
 * STEP 3:
 * → loop se sum nikalo
 * 
 * STEP 4:
 * → average calculate karo
 * 
 * =========================================================
 * ! ADVANTAGES OF ARRAY
 * =========================================================
 * 
 * 1. Multiple values ek naam se store hote hain
 * 
 * 2. Continuous memory allocation
 * 
 * 3. Loops ke saath easy traversal
 * 
 * 4. Efficient calculations
 * 
 * 5. Code manageable hota hai
 * 
 * 6. Searching and sorting easy ho jaata hai
 * 
 * =========================================================
 * ! MOST IMPORTANT POINTS
 * =========================================================
 * 
 * → Array same datatype store karta hai
 * 
 * → Indexing starts from 0
 * 
 * → [] = subscript operator
 * 
 * → a[i] means:
 *   ith position ki value
 * 
 * → Arrays mostly loops ke saath use hote hain
 * 
 * =========================================================
 * ! WHY LOOP CAN WORK ON ARRAY?
 * =========================================================
 * 
 * Hume ye samajhna hai ki:
 * 
 * array pe loop kyun laga sakte hain?
 * 
 * Because:
 * 
 * Individual variable names nahi hote.
 * 
 * Hum:
 * → operand/index ke through elements access karte hain
 * 
 * Example:
 * 
 * a[0]
 * a[1]
 * a[2]
 * 
 * Index variable:
 * i
 * 
 * ko continuously change karke:
 * 
 * a[i]
 * 
 * access kar sakte hain.
 * 
 * Isi wajah se loops arrays ke saath perfectly kaam karte hain.
 * 
 * =========================================================
 * ! ARRAY DECLARATION RULES
 * =========================================================
 * 
 * ! RULE 1
 * 
 * int a[];
 * 
 * ERROR
 * 
 * Reason:
 * → Array size empty nahi ho sakta.
 * 
 * Compiler ko pehle se pata hona chahiye:
 * → kitni memory allocate karni hai.
 * 
 * So:
 * → array size mandatory hai.
 * 
 * =========================================================
 * ! RULE 2
 * =========================================================
 * 
 * int a[5];
 * 
 * Correct declaration.
 * 
 * Here:
 * 5 = total number of elements
 * 
 * Important:
 * → 5 is NOT an index
 * 
 * It represents:
 * → total capacity of array
 * 
 * =========================================================
 * ! MEMORY REPRESENTATION
 * =========================================================
 * 
 * int a[5];
 * 
 * Index:
 * 0 1 2 3 4
 * 
 * Array:
 * [][][][][]
 * 
 * Total elements:
 * → 5
 * 
 * Last index:
 * → 4
 * 
 * Because indexing starts from:
 * → 0
 * 
 * =========================================================
 * ! IMPORTANT OBSERVATION
 * =========================================================
 * 
 * Whatever is the size of array:
 * 
 * → memory always allocates
 *   in sequential / contiguous fashion.
 * 
 * Means:
 * 
 * a[0]
 * a[1]
 * a[2]
 * a[3]
 * a[4]
 * 
 * Ye sab:
 * → continuous memory locations me store hote hain.
 * 
 * =========================================================
 * ! RULE 3
 * =========================================================
 * 
 * int a[5];
 * 
 * Local array when not initialized:
 * 
 * → contains garbage values.
 * 
 * Example:
 * 
 * int a[5];
 * 
 * cout<<a[0];
 * 
 * Output:
 * → random garbage value
 * 
 * Because:
 * → memory initialize nahi hui.
 * 
 * =========================================================
 * ! GARBAGE VALUE
 * =========================================================
 * 
 * Garbage value means:
 * 
 * → random unknown value
 * 
 * Jo memory me pehle se present hoti hai.
 * 
 * =========================================================
 * ! IMPORTANT NOTE
 * =========================================================
 * 
 * Local array:
 * → garbage values store karta hai
 * 
 * Global array:
 * → automatically 0 se initialize hota hai
 * 
 * Example:
 * 
 * int a[5];          // local -> garbage
 * 
 * global:
 * int a[5];          // global -> all 0
 * 
 * =========================================================
 * ! RULE 4
 * =========================================================
 * 
 * You can initialize array during declaration.
 * 
 * Example:
 * 
 * int a[5]={1,2,3,4,5};
 * 
 * Memory:
 * 
 * Index:
 * 0 1 2 3 4
 * 
 * Values:
 * 1 2 3 4 5
 * 
 * =========================================================
 * ! RULE 5
 * =========================================================
 * 
 * You cannot initialize array during declaration
 * with more values than its size.
 * 
 * Example:
 * 
 * int a[3]={1,2,3,4};
 * 
 * ERROR
 * 
 * Because:
 * → size is 3
 * → but values are 4
 * 
 * =========================================================
 * ! RULE 6
 * =========================================================
 * 
 * You can initialize array during declaration
 * with lesser values than size of array.
 * 
 * Example:
 * 
 * int a[5]={1,2};
 * 
 * Then:
 * 
 * a[0]=1
 * a[1]=2
 * a[2]=0
 * a[3]=0
 * a[4]=0
 * 
 * Remaining values become:
 * → 0
 * 
 * NOT garbage values.
 * 
 * =========================================================
 * ! RULE 7
 * =========================================================
 * 
 * During declaration:
 * 
 * You can leave [] empty only when
 * array is initialized at same time.
 * 
 * Example:
 * 
 * int a[]={1,2,3,4,5};
 * 
 * Compiler automatically size calculate kar lega.
 * 
 * Here:
 * size = 5
 * 
 * =========================================================
 * ! BOUND CHECKING
 * =========================================================
 * 
 * int a[3]={1,2,3,4,5};
 * 
 * ERROR dega.
 * 
 * Kyunki:
 * compiler bound checking kar lega.
 * 
 * But:
 * 
 * int a[3];
 * 
 * for(i=0;i<10;i++)
 * {
 *     cin>>a[i];
 * }
 * 
 * Yaha:
 * → compiler error nahi dega
 * 
 * Kyunki compiler runtime pe:
 * → actual access check nahi karta
 * 
 * Ye:
 * → array ke bahar ki memory access karega
 * 
 * Isko kehte hain:
 * 
 * → Out Of Bound Access
 * 
 * Program:
 * → run bhi ho sakta hai
 * → crash bhi ho sakta hai
 * → unexpected output bhi de sakta hai
 * 
 * C language me:
 * → automatic bound checking nahi hoti
 * 
 * =========================================================
 * ! SORTING
 * =========================================================
 * 
 * Arranging elements in logical order
 * is known as sorting.
 * 
 * By default for numbers:
 * 
 * sorting means:
 * → arranging elements in ascending order
 * 
 * Example:
 * 
 * Before sorting:
 * 5 1 4 2 3
 * 
 * After sorting:
 * 1 2 3 4 5
 * 
 * Descending order:
 * 5 4 3 2 1
 * 
 * =========================================================
 * ! FUNCTION CALL BY PASSING ARRAYS IN C
 * =========================================================
 * 
 * Example:
 * 
 * void fun(int a[])
 * {
 *     cout<<a[0];
 * }
 * 
 * int main()
 * {
 *     int a[3]={1,2,3};
 * 
 *     fun(a);
 * }
 * 
 * =========================================================
 * ! CAN ARRAY BE PASSED AS REFERENCE?
 * =========================================================
 * 
 * In C language:
 * 
 * Arrays are internally passed as address.
 * 
 * Means:
 * → base address pass hota hai
 * 
 * So function original array ko modify kar sakta hai.
 * 
 * Example:
 * 
 * void fun(int a[])
 * {
 *     a[0]=100;
 * }
 * 
 * int main()
 * {
 *     int a[3]={1,2,3};
 * 
 *     fun(a);
 * 
 *     cout<<a[0];
 * }
 * 
 * Output:
 * 100
 * 
 * =========================================================
 * ! 2D ARRAY
 * =========================================================
 * 
 * If interviewer asks:
 * 
 * "What is 2D array?"
 * 
 * Answer:
 * 
 * 2D array is an array having:
 * → rows and columns
 * 
 * It stores data in matrix/table form.
 * 
 * Example:
 * 
 * int a[3][4];
 * 
 * Here:
 * → 3 rows
 * → 4 columns
 * 
 * =========================================================
 * ! DIMENSION
 * =========================================================
 * 
 * Dimension means:
 * → direction of measurement
 * 
 * 1D:
 * → only one direction
 * 
 * 2D:
 * → row + column direction
 * 
 * =========================================================
 * ! NEED OF 2D ARRAYS
 * =========================================================
 * 
 * Jaise:
 * 
 * Multiple variables handle karne ke liye
 * 1D array ki need arise hui thi.
 * 
 * Waise hi:
 * 
 * Table/matrix type data handle karne ke liye
 * 2D arrays ki need arise hui.
 * 
 * Example:
 * 
 * Student marks table:
 * 
 * Math English Science
 * 90     80      70
 * 85     88      91
 * 
 * Isko 2D array me easily represent kar sakte hain.
 * 
 * =========================================================
 * ! USAGE OF 2D ARRAYS
 * =========================================================
 * 
 * → Matrix operations
 * 
 * → Game boards
 * 
 * → Image processing
 * 
 * → Tables
 * 
 * → Spreadsheet data
 * 
 * =========================================================
 * ! EXAMPLE OF 2D ARRAY
 * =========================================================
 * 
 * int a[2][3]=
 * {
 *     {1,2,3},
 *     {4,5,6}
 * };
 * 
 * Representation:
 * 
 * 1 2 3
 * 4 5 6
 * 
 * =========================================================
 * ! ACCESSING ELEMENTS IN 2D ARRAY
 * =========================================================
 * 
 * a[1][2]
 * 
 * Means:
 * 
 * row index = 1
 * column index = 2
 * 
 * Value:
 * 6
 * 
 * =========================================================
 * ! IMPORTANT INTERVIEW PERSPECTIVE
 * =========================================================
 * 
 * int a[1];
 * 
 * Here:
 * 
 * a
 * → represents base address of array
 * 
 * a[0]
 * → first element
 * 
 * Internally:
 * 
 * a[0] == *(a+0)
 * 
 * Means:
 * → array name acts like pointer
 *   to first element.
 * 
 * =========================================================
 * ! MULTIDIMENSIONAL ARRAY
 * =========================================================
 * 
 * Arrays having more than one dimension
 * are called multidimensional arrays.
 * 
 * Example:
 * 
 * 2D:
 * int a[3][4];
 * 
 * 3D:
 * int a[2][3][4];
 * 
 * =========================================================
 * ! MOST IMPORTANT POINTS
 * =========================================================
 * 
 * → Array size empty nahi ho sakta
 * 
 * → Array size = total elements
 * 
 * → Indexing starts from 0
 * 
 * → Memory contiguous fashion me allocate hoti hai
 * 
 * → Uninitialized local arrays contain garbage values
 * 
 * → Arrays loops ke saath efficiently kaam karte hain
 * 
 * → Out of bound access dangerous hota hai
 * 
 * → Arrays same datatype elements store karte hain
 * 
 */