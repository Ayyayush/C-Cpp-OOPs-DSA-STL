/* SMA = static memory allocation


DMA= dynamic mem0ry allocation
dma varaiblesa re not named they only have address
malloc()
calloc()
realloc()


Malloc(arg);
malloc mein size as arguement pass krte h ...datatype nhi
iska return type at time of making decide hota h
by default it has garabage value
it makes single block
array can be made with help of malloc also.......
eg malloc(20)....ab agar ye 20 int type ka h toh p sirf starting 4 byte ko hi access kr payega uske aage ke dsure block ki tarah refer honge
isme sirf size pata chalta h datatype kaun sa h ye pata nhi chalta

if()
{
malloc();   // this is correct


if()
{
int x; /// this is wrong
}



TYPE CASTING
int *p;
p=malloc(4);   // yaha pe p int type ka h isliye 4 ko int type ka maan rhe h



 CALLOC();
 by default it has 0
 it takes two arguements
 it has array of blocks
 eg :=
 float *q;
 q=(float*)calloc(5,4);


 
REALLOC();
realloc(pointer,newsize)
int *p;
p=(int*)malloc(20);
ab jyada jagah chahiye ho toh ya toh phir se dusra malloc ko call krke ussse bade size ka bana ke swap krwaye firr pehle wala malloc free krwaye

2nd option h ki realloc se kare
realloc(p,40);
 


*/