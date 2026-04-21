
DYNAMIC ARRAY DATA STRCUTURE :=
abtak jo array tha usme fixed size tha 
dynamic array mein size grow ho skta h dynamically ...par jab jarurat ho tbhi hi...bcz
Array ko nayi memory allocate karana is a time consuming process
isliye utni hi memory dynamicaaly allocate karate h jitnni jarurat ho ye nhi ki hadd se jyada allocate kara rhe h
//array aur dyanmically array dono new keyword se hi banta h....bas dynamic array mein hum size badha aur shrink kr sakte h 
array full ho gya aur ek aur value rakhni h tbhi array ko grow karana h...par grow karane ka code likhte kaha h 
NOTE := Grow karane ka code insert ya append mein hi likhenge 


DOUBLE ARRAY () :=
We try to grow the size of the array if we are trying to insert or append in the array and the size of the array is full
Agr insert or append ke andar array full h we call the double array function 
// NOTE :=  hum size double kyun kr rhe utna nhi jitna jarurat ho taaki sirf ek aur add krte hi memory full mat ho array ki aur baar baaer allocate na karna pade memry ...bcz memory allocation is a time consuming process
Jaruri nhi ki double hi kare aur bhi jyada badha skte h bas double array ek optimum solution h 

WORKING :=
 Double array function mein Ek naya array banana uska size double rakhna 
 uske baad data copy kr lena temp variable wale technique se aur purane array ko delete kr dena 
 eg - delete[] ptr;


 HALF ARRAY() -:
 We create half array when we are trying to delete a data from the array . after successfull deletion if array is half filled then call half array() 
Isko specially tbhi krte h jab array capacity se thik aadha bhara ho 
Memory efficient banana h par time bhi bachana h isliye sidhe half kr rhe h 
Isme bhi capacity se half size ka array bana lo aur temp variale waale concept se firr switch kr do 
Purane wale arrayc ko delete kr do 

