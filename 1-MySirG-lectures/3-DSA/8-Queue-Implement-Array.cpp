Queue ek linear data structure hai jo FIFO (First In, First Out) principle follow karta hai. Matlab jo element pehle insert hota hai, wahi pehle remove hota hai. Queue ko real-world mein bahut jagah use kiya jata hai jaise bank lines, printer job scheduling, CPU scheduling, etc.


// Types of Queue:

// Simple Queue – Normal FIFO queue jisme insertion rear se hoti hai aur deletion front se.

// Circular Queue – Isme last position wapas first position se connect hoti hai, taaki memory wastage na ho.

// Double-ended Queue (Deque) – Isme insertion aur deletion dono ends se ho sakti hai.

// Priority Queue – Yahan elements ki priority hoti hai, jo higher priority ka element hota hai, woh pehle remove hota hai.



Operations in Queue:

Enqueue – Queue me element insert karna.

Dequeue – Queue se element remove karna.

Front – Queue ke first element ko dekhna.

Rear – Queue ke last element ko dekhna.

isEmpty – Check karna ki queue khaali hai ya nahi.

isFull – Check karna ki queue full ho chuki hai ya nahi (static queue ke case me).                               's



   
Queue Implementation:
Using Array – Fixed size queue, memory pre-allocated hoti hai.
Using Linked List – Dynamic size queue, memory efficient hoti hai.