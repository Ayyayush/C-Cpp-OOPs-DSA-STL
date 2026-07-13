/**
 * 
 * Introduction to C language
 * 
 * ! WHAT IS COMPUTER
 * 
 * computer har tarah ka calculation kar sakta hai
 * 
 * computer ka use tabhi kar pate hain hum
 * jab usme koi software ho
 * 
 * computer ek machine hai jo bahut capable hai
 * par apna kaam tabhi karega jab usme software ho
 * 
 * computer 100 kaam kar pa raha hai
 * kyunki usme 100 type ke software installed hain
 * 
 * ab maan lo mujhe aisa kaam karana hai
 * jiska software installed nahi hai
 * 
 * computer ko na English aati hai na Hindi
 * 
 * computer can understand only binary language
 * isliye ise hum machine language kehte hain
 * 
 * maan lo kisi bande ka kuch kaam hai
 * usne hume English mein bata diya
 * 
 * humne usko binary language mein convert karke
 * computer ko de diya
 * 
 * ab ek baar ye file run ho gayi
 * toh computer bhi samajh jayega
 * ki kya kaam kaise karna hai
 * 
 * ye file kuch aur nahi balki ek software hai
 * 
 * hamesha naye naye kaam ki jarurat aayegi computer se
 * isliye software banne ka kaam hamesha chalta rehta hai
 * 
 * 
 * ! WHY DO WE NEED SOFTWARE
 * 
 * so that we can use our computer for a specific purpose
 * 
 * software kya hai ?
 * 
 * software is a series of instructions
 * 
 * 
 * ! COMPUTER ORGANIZATION
 * 
 * computer ke andar ek cheez hoti hai processor
 * 
 * processor ke mainly 3 parts hote hain:
 * 
 * 1. Memory Unit
 * 2. Control Unit
 * 3. ALU - Arithmetic Logic Unit
 * 
 * ALU har arithmetic aur logical kaam karne ke liye responsible hota hai
 * 
 * ALU ko kya kaam karna hai
 * ye control unit batati hai
 * 
 * memory unit mein data store ho sakta hai
 * 
 * processor ke andar choti choti memory hoti hai
 * jinhe registers kehte hain
 * 
 * flipflop ek circuit hota hai
 * 
 * instruction register ke andar instructions store hoti hain
 * 
 * jaise hi computer off hota hai
 * ye data chala jata hai
 * 
 * control unit instruction register ko padhti hai
 * aur decode karti hai
 * ki ALU ko kya kaam karna hai
 * 
 * 
 * ! PROGRAM EXECUTION
 * 
 * maan lo 2 numbers ko sum karne ka program bana hai
 * 
 * ye jo instructions hain
 * ye steps hain jo computer ko batate hain
 * ki kya karna hai
 * 
 * control unit instruction register mein baithe instructions ko
 * execute karke dekhegi ki kya karna hai
 * 
 * jab bhi koi program run karenge
 * wo sabse pehle RAM mein aayega
 * 
 * RAM ke andar us program ko kuch memory allocate ho jayegi
 * 
 * ye memory tab tak allocated rahegi
 * jab tak program memory mein hai
 * 
 * instructions ek ek karke main memory se
 * processor mein jaati hain
 * 
 * processor ke instruction register mein jaakar
 * unhe decode kiya jata hai
 * 
 * maan lo bahut saari instructions hain
 * toh bahut saare registers chahiye honge
 * 
 * processor waise bhi sabse mehenga hota hai
 * 
 * isliye RAM se kuch important cheeze
 * cache memory mein rakh li jati hain
 * taaki time bache
 * 
 * 
 * ! MACHINE CODE
 * 
 * software ek file ke form mein present hota hai
 * hamare laptop ya computer mein
 * 
 * jitne bhi software rakhe hote hain
 * wo sab files hi hoti hain with extensions
 * 
 * example:
 * xyz.jpg
 * .pdf
 * .exe
 * 
 * computer ke andar saari files mein
 * ultimately 0 aur 1 hi store hota hai
 * 
 * files mainly 2 type ki hoti hain:
 * 
 * 1. Data contain karne wali files
 * 2. Software files
 * 
 * jpg aur pdf files mein sirf data hota hai
 * 
 * .exe file mein instructions hote hain
 * 
 * .exe file mein jo hota hai
 * wahi machine code hota hai
 * 
 * 
 * ! OPERATING SYSTEM
 * 
 * hamare computer mein bahut saara hardware hota hai
 * 
 * hume directly hardware use karna nahi aata
 * 
 * is problem ko solve karne ke liye
 * ek program banaya gaya
 * jise kernel kehte hain
 * 
 * kernel is a bunch of programs
 * jo hardware ko use karna jaanta hai
 * 
 * kernel ke alawa bhi bahut saare tasks hote hain
 * jinko milakar operating system banta hai
 * 
 * operating system = kernel + additional tasks
 * 
 * shuru shuru mein OS mein sirf kernel hota tha
 * 
 * baad mein operating system ke kaam badhte gaye
 * 
 * OS aur bhi bahut saare kaam karne laga
 * 
 * hum computer mein jo browser ya dusre software use karte hain
 * unhe application software kehte hain
 * 
 * application software directly hardware se interact nahi kar sakta
 * 
 * unhe operating system ki jarurat hoti hai
 * hardware se interact karne ke liye
 * 
 * application software ke andar jo bhi likha hota hai
 * wo operating system ko samajh aana chahiye
 * 
 * operating system khud kaam nahi karta
 * bas hardware se kaam karwata hai
 * 
 * machine code Windows, Mac aur Linux ke liye alag hota hai
 * 
 * maan lo kisi company ne software banaya
 * toh usne multiple versions banaye:
 * 
 * ek Windows ke liye
 * ek Mac ke liye
 * ek Android ke liye
 * 
 * isliye software platform dependent hota hai
 * 
 * platform = computer + operating system
 * 
 * 
 * ! ROLE OF C LANGUAGE
 * 
 * ab hum itna aage badh chuke hain
 * ki hume directly 0 aur 1 mein coding karne ki jarurat nahi
 * 
 * hume ek easy language chahiye thi
 * jo humans samajh sake
 * 
 * isliye C language banayi gayi
 * 
 * C language kaafi had tak English jaisi lagti hai
 * 
 * isliye ise seekhna comparatively easy hai
 * 
 * hum apne kaam ke according instructions likh sakte hain
 * 
 * 
 * ! BUILD PROCESS
 * 
 * .c file ki help se .exe file build ki jati hai
 * 
 * build process mein 3 important cheeze hoti hain:
 * 
 * 1. Preprocessor
 * 2. Compiler
 * 3. Linker
 * 
 * preprocessor source code mein kuch changes karta hai
 * aur compiler ko deta hai
 * 
 * compiler code ko machine language mein convert karke
 * object file banata hai
 * 
 * linker object files aur library files ko combine karke
 * executable (.exe) file banata hai
 * 
 * 
 * ! PREPROCESSOR - DEFINITION
 * 
 * preprocessor source code ko
 * compilation se pehle process karta hai
 * 
 * 
 * ! COMPILER - DEFINITION
 * 
 * compiler high level language ko
 * machine language mein convert karta hai
 * 
 * 
 * ! LINKER - DEFINITION
 *  linker alag alag object files aur library files ko
 * combine karke executable file banata hai
 * 
 * /**
 * ! INTERPRETER
 * 
 * Definition:
 * 
 * interpreter ek aisa software hota hai
 * jo source code ko line by line execute karta hai
 * 
 * interpreter pura program ek saath machine code mein convert nahi karta
 * 
 * ye ek line padhta hai
 * usko execute karta hai
 * phir next line par jata hai
 * 
 * agar beech mein error mil jaye
 * toh execution wahi ruk jata hai
 * 
 * 
 * ! C LANGUAGE EXECUTION SPEED
 * 
 * C language mein likha code bahut jaldi execute hota hai
 * because it is a statically typed language
 * 
 * statically typed language mein variable ka type
 * pehle hi define hota hai
 * 
 * isliye execution fast hota hai
 * 
 * 
 * ! IDE
 * 
 * IDE = Integrated Development Environment
 * 
 * ye software development mein kaam aane wali
 * har important cheez ek hi jagah provide karta hai
 * 
 * IDE wo software hota hai
 * jise install karte hain
 * taaki software develop kar sake
 * 
 * 
 * ! DEFINITION OF IDE
 * 
 * IDE ek aisa software environment hai
 * jo coding, compiling, debugging aur execution
 * sab ek hi jagah provide karta hai
 * 
 * 
 * ! CAN WE DEVELOP SOFTWARE WITHOUT IDE ?
 * 
 * bina IDE ke bhi software develop kar sakte hain
 * 
 * kyunki software development ke mainly 2 hi steps hote hain:
 * 
 * 1. Source File
 * 2. Executable File
 * 
 * par bina IDE ke kaam karne ke liye
 * command line aani chahiye
 * 
 * 
 * ! EXAMPLES OF IDE
 * 
 * market mein bahut saare IDE available hain
 * 
 * example:
 * 
 * Turbo C
 * CodeBlocks
 * Dev C++
 * Visual Studio
 * VS Code
 * 
 * Turbo C bahut purana IDE hai
 * aur ab outdated ho chuka hai
 * 
 * 
 * ! FEATURES OF IDE
 * 
 * 1. Code Editor
 * 2. Compiler Support
 * 3. Debugging Tools
 * 4. Auto Completion
 * 5. Error Highlighting
 * 6. Build and Run Facility
 * 7. Project Management
 * 
 *
 * ! MULTICS
 * 
 * Multics ek operating system tha
 * jo ab discontinue ho chuka hai
 * 
 * MULTICS ka full form tha:
 * 
 * Multiplexed Information and Computing Service
 * 
 * ye project originally MIT ke dwara
 * Bell Labs ke saath milkar lead kiya gaya tha
 * 
 * ye GE-645 computer ke liye develop kiya gaya tha
 * 
 * Bell Labs team se Ken Thompson leading role mein the
 * 
 * Ken Thompson aur Dennis Ritchie
 * dono Multics project mein kaam kar rahe the
 * 
 * 1969 mein Bell Labs is project se bahar ho gayi
 * 
 * 
 * ! B LANGUAGE
 * 
 * Ken Thompson ne BCPL language se
 * ek nayi language nikali
 * 
 * us language ka naam tha:
 * 
 * B Language
 * 
 * 
 * ! C LANGUAGE
 * 
 * 1972 mein Dennis Ritchie ne
 * compiled programming language develop ki
 * 
 * jise hum C Language ke naam se jaante hain
 * 
 * 
 * ! UNIX OPERATING SYSTEM
 * 
 * UNIX operating system pehle
 * B language mein likha gaya tha
 * 
 * baad mein UNIX ko
 * C language mein rewrite kiya gaya
 * 
 * 
 * ! VERSION HISTORY OF C
 * 
 * 1972  -> C Language developed by Dennis Ritchie
 * 
 * 1978  -> Kernighan and Ritchie released
 *          "The C Programming Language" book
 *          (K&R C)
 * 
 * 1989  -> ANSI C Standard (C89)
 * 
 * 1990  -> ISO C Standard (C90)
 * 
 * 1999  -> C99
 * 
 * 2011  -> C11
 * 
 * 2018  -> C18
 * 
 * 2023  -> C23
 * 
 * 
 */ 