CIRCULAR LINKED LIST :=
ye saare lists apne use ke according use hote h aisa nhi h ki hamesha koi ek hi use hota h 

NEED ?
Sll mein sirf ek direction mein traverse kr skte h 
Sll aur DLL mein aakhri node ke next mein null hota h jisse memory waste hoti h 
// TOH hum aisa kar skte h ki aakhri node mein kisi node ka ddress rakh ke usko utilize kar skte h 
SO :: Cll mein hum aakhri node mein kisi ka adress rakh toh sakte hai par ye pata kaise chalega ki wo aakhri node hai 
SOLUTION ::
Agar kisi node ka next kisi node ko point karien aur start bhi ussi node ko point kare toh wo hai last node
eg :: if(t->next==start) .......then t points last node 
agar ek hi node hai toh list mein toh wo node khud ko hi point karega CLL mein


COMAPARISION OF CLL WITH SLL :

SLL 
Insertion
1.first            //   No traversing required 
2.last             // traversing required kyuki hum first ke through hi hote hue last tak pahuchenge 

Deletion 
1.first           //No traversing but  delete krne se pehle start mein second node ka address rakhna padega temp bana ke
2.last            // Traversing kyunki 2nd last node ke next mein first node ka address rakhna padega 


CLL 
Insertion
1.first               // Traversing lagegi kyunki first mein jdega wo to thik h par hume last node bhi traverse krke dhundna padega kyunki last node first ko point karega toh uske next me9in bhi changes krne padenge start ke sath sath  
2.last                // traversing lagegi kyunki naye wale mein first node ka address hona chahiye aur lasy node dhund ke usme iss naye last node ka address rakhna padega 

Deletion 
1.first             // Traversing lagegi kyunki last node dhund ke usme 2nd node ka address rakhna padega
2.last              // Isme bhi traversing lagegi kyunki 2nd last node mein first node ka address rakhna padega  

CLL mein har baar traversing krni padti h issliye SLL ki performance better hai 
SO :: how can we improve the performance of CLL par wo circualr bhi rahe  
1.Aagrr hum start mein first aur last node dono ko point kr sake 
2. Better approach ye hi start mein bas last node ko point kare aur last node toh already first node ko point krta h toh traverse krne ki jarurart nhi 

NOW : CLL 

Insertion
1.first                  // No traversing kyunki start/last lst node ko point kr rha h jo ki first ko point kr rha h 
2.last                   // No traversing kyunki start/lst last node ko hi point kr rha h ...bas insertion ke baad start naye last ko point karega aur wo first ko 

Deletion 
1.first                 // No traversing bas last ke next mein 2nd node ka adress rakhna hoga temp ke through
2.last                  // TrVaversing krni padegi kyunki 2nd last node ko dhund ke usme first node ka address rakhnha hoga aur start mein usme
