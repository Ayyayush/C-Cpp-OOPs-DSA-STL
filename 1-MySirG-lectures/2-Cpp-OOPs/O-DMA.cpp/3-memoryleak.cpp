/*
MEMORY LEAK
important for memory management
total moemory =consumed +free memory ....in alloted memory
ye tab arise hota h jab malloc kisi chiz ko allot krke p ko de 
firr iske baad malloc firr se chale ab  malloc nanay block p ko ab p uss naye block ko point kr rha h
ab pehle wala block consumed mana ja rha h par use bhi nnhi ho rha h ....last mein memory kam oadne pe wo mil bhi nhi payega wo use bhi nhi hoga
ye problem hazaro variables ke sath ho skti h ...tjis is basically memory leak

FREE()
it is a function
isem address paas hota h 
ye sirf dma wale variablews ki moeory release krne ke liye use hota h
eg :=
int x;
free(&x);
dma variable ki memory khud se tbhi release hoti h jab program khtm ho gya ho
 
  
  f1()
  {
  int *p;
  p=(int*)malloc(4);
   }
// AGR ISS BLOCK KO DUSRE SE POINT NHI KARATE TOH FREE USE NA KRNE PE FUNCTION END HOTE HI YE MEMORY LEAK HO JATA
// AB ISS CHIZ KO SHI KRNE KE LIYE HAMARE PAAS 2 OPTION H



TWO OPTIONS TO SAVE THIS MEMORY LEAK

  1>:=RETURN ADDRESS OF DMA VARIABLE
    f1()
  {
  int *p;
  p=(int*)malloc(4);

  return p; // hum ye kr rhe h kyunki chahte h functio9n end hone ke baad bhi ye exisst kare
  }

  int *q;
  q=f1();   //  p jisko point kr rha tha ab usko q point karega



  2>:= FREE MEMORY OF DMA VARIABLE

    f1()
  {
  int *p;
  p=(int*)malloc(4);

 free(p);   // iska mtlb ye nhi ki p ki memory ko release kiya ja rha h kyunki wo SMA h 
 iska mtlnb ye h ki p mein rakhe value paas ho rha h jo ki yha malloc h so uska address release ho jayega

  }

*/