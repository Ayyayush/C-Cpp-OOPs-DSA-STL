SINGLY LINKED LIST :=
.>What is a list ?
list is a linear collection of data items jissse list item bhi kehte hai 

eg :1
marks of student jisse wo notedown kr rha hai .......// ye int type ka hoga

eg :2
list of guests ....// ye string or char type ka hoga

eg:3
list of students  ...// ye either class or structure type ka hoga

NODE :=
It is a technical term 
eg :: marks of student ..20,15,21,24,23,25
maan lo kitne student ki marks rakhne pata nhi tohh hum dynamic array use krne ka sochenge par 
disadv of dynamic array := agr 100 ki jageh 101 rakhne hue toh dynamic array mein space genrally hum double kr chuke honge par value bas 1 hi rakhenge toh isse bhot memory watsage hogi
SOL -: // Hum tbhi memroy allocate karein jab data aa rha ho here comes the use of NODE 
Iska mtkb hum naya memory block tbhi bana rhe h jab naya value rakhne ki request aa rhi h 

eg := 
marks = 20,15,21,24,18...
int *p1,p2,p3..
p1->20
p2->15
// pehle p1 bane phir p2 phir p3...
maan lo bas p1,p2,p3 hi banana hai toh p3 p2e baad bane ya sath hi ban jaye chalega par usse pehle nhi bannna chahhiye 
yhi chiz ensure krne ke liye hum node banante h 
har node ko access krne ke liye pointer chahiye

strcut node1
{
    int item ;
    * next;          // ye agle node ka address rakhega
}


strcut node2
{
    int item ;
    * next;          // ye agle node ka address rakhega
}


NOW AB YE KAISE PATA CHALEGA KI YE AAKHRI NODE H ISKE BAAD KOI NAYE NODE KA ADDRESS NHI RAKHNA H ?
ans := jis node ke next mein null rakha hai wo hai last node
// NODE KO MEMORY MEIN LAGATAR MEMORY MIL RHI WO YE JARURI NHI YE RANDOMLY RAKHE HOTE H 
toh ye ensure krne ke liye ki sequence mein chale pehle start block  hota h...aur next se pata chalta h ki agla node kaha hai 
ALSO ...ab agar 4th node ko acess krna h toh pehle start pe jana padega firr 1st ko access karenge fir....
Hum aek hi direction mein travel kr skte h ...jaise second node se 3rd pe hi ja skte h piche nhi aa skte  
THIS CONCEPT IS COMPLETELY KNOWN AS SINGLY LINKED LIST 
Singly list ka jab object banega toh start usme rahega aur null usme hoga myunki list initially toh khali hai 

OPERATIONS :=:
INSERTION 
1.insertion at start()
2.insertion at end() 
3.insertion after()

DELETION 
1.delete first()
2.delete last()
3.deleete more()

TRAVERSING 

ARRAY vs DYNAMIC ARRAY vs SLL :=
SLL is memory efficient but slow                              // array is fast but of fixed size....dynamic array is flexible but not memory efficient 
Sll mein bas ek hi direction mein travel kar skte h ..........// unlike array and dynammic array 