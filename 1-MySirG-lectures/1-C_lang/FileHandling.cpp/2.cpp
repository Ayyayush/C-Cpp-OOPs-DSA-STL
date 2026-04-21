 language me file handling ek important concept hai, jo program ko file ke sath kaam karne ka feature deta hai, jaise create, read, write, update, aur delete operations. Ye concept real-world applications ke liye kaafi useful hai, jaise log files banana, user data save karna, aur binary data handle karna.

Ab isse thoda aur detail me samajhte hain hinglish me:



1. File Pointer ka Role
C me file ke operations ke liye ek file pointer ka use hota hai. File pointer ka kaam hota hai file ke data ka location track karna. Isse aap declare karte ho:

c
Copy code
FILE *file_pointer;
Is pointer ko file ke read aur write operations ke liye use kiya jata hai.




2. File Positioning Functions
Kabhi kabhi aapko file ke andar pointer ko move karna hota hai (jaise specific position par jaana). Iske liye ye functions use hote hain:

ftell()
Ye file pointer ki current position batata hai.
Syntax:
long ftell(FILE *file);
Example:
c
Copy code
long position = ftell(file);
printf("Current file position: %ld\n", position);


fseek()
File pointer ko kisi specific position par move karne ke liye use hota hai.
Syntax:
c
Copy code
int fseek(FILE *file, long offset, int origin);
origin ke options:
SEEK_SET: File ke start se offset.
SEEK_CUR: Current position se offset.
SEEK_END: File ke end se offset.
Example:

c
Copy code
fseek(file, 0, SEEK_END); // File pointer ko end par le jao




rewind()
File pointer ko file ke start par le jata hai.
Syntax:
c
Copy code
void rewind(FILE *file);
Example:

c
Copy code
rewind(file);





3. Structured Data ke Saath Kaam
File handling me aap structured data (jaise struct) ko bhi store aur retrieve kar sakte ho. Isme binary files kaafi useful hoti hain.

Example: Student Records Store Karna
c
Copy code
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Rahul", 87.5};
    struct Student s2;

    // Data ko binary file me write karo
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("File open nahi ho payi.\n");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, file);
    fclose(file);

    // Binary file se data read karo
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("File open nahi ho payi.\n");
        return 1;
    }
    fread(&s2, sizeof(struct Student), 1, file);
    printf("ID: %d, Name: %s, Marks: %.2f\n", s2.id, s2.name, s2.marks);
    fclose(file);

    return 0;
}





4. Error Handling
File handling me error handling kaafi zaruri hai, kyunki file operations fail ho sakte hain (jaise file not found ya disk full). Aap fopen() aur fread() jaise functions ke result ko check karte ho.

Example of Error Handling
c
Copy code
FILE *file = fopen("nonexistent.txt", "r");
if (file == NULL) {
    perror("File open nahi ho payi"); // Error message dikhata hai
    return 1;




    
}
5. Text vs Binary Files
Text aur binary files ke beech ka major difference unka storage format aur usage hai:

Feature	Text Files	Binary Files
Storage Format	Human-readable (ASCII text)	Machine-readable (Binary data)
Use Case	Logs, Config Files	Images, Audio, Structured Data
Efficiency	Relatively larger in size	Compact and faster to process
