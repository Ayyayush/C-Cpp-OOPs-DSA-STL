C language me file handling ka matlab hota hai files ke sath kaam karna, jaise ki file ko create, open, read, write, aur close karna. C me file handling ke liye stdio.h header file use hoti hai. Yaha par functions aur pointers ka use karke files ko handle kiya jata hai.

File Handling ke Main Functions
fopen(): File ko open karne ke liye.
fclose(): File ko close karne ke liye.
fprintf(): File me likhne ke liye.
fscanf(): File se data read karne ke liye.
fgetc() aur fputc(): Ek character read/write karne ke liye.
fgets() aur fputs(): Strings read/write karne ke liye.





File Modes
Jab file ko open karte ho, to mode specify karte ho ki file ke sath kya karna hai:

Mode	Description
"r"	Read mode (sirf read karne ke liye, file exist karni chahiye).
"w"	Write mode (file exist karegi to overwrite hogi, warna naye file banegi).
"a"	Append mode (data end me add hoga).
"r+"	Read aur write mode.
"w+"	Read aur write, overwrite karega.
"a+"	Read aur append mode.



Examples
File ko Write Karna
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w"); // File ko write mode me open karo
    if (file == NULL) {
        printf("File open nahi hui.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n"); // File me likho
    fclose(file); // File ko close karo
    printf("Data likha gaya file me.\n");
    return 0;
}



File ko Read Karna
c
Copy code
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r"); // File ko read mode me open karo
    if (file == NULL) {
        printf("File open nahi hui.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) { // Line by line read karo
        printf("%s", line);
    }
    fclose(file); // File ko close karo
    return 0;
}





Append Mode ka Example
c
Copy code
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a"); // Append mode me open karo
    if (file == NULL) {
        printf("File open nahi hui.\n");
        return 1;
    }

    fprintf(file, "New line added!\n"); // Naya data append karo
    fclose(file);
    printf("Data append kiya gaya.\n");
    return 0;
}






Binary Files
Binary files me data ko binary format me read/write karte hai. Yaha fread() aur fwrite() ka use hota hai.

Binary File Example
c
Copy code
#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "wb"); // Binary write mode
    if (file == NULL) {
        printf("File open nahi hui.\n");
        return 1;
    }

    int number = 42;
    fwrite(&number, sizeof(int), 1, file); // Binary data likho
    fclose(file);

    file = fopen("data.bin", "rb"); // Binary read mode
    if (file == NULL) {
        printf("File open nahi hui.\n");
        return 1;
    }

    int read_number;
    fread(&read_number, sizeof(int), 1, file); // Binary data read karo
    printf("Number read from file: %d\n", read_number);
    fclose(file);

    return 0;



    
}
Best Practices
Error Handling: Check karo ki fopen() successful hai ya nahi.
Close Files: Har baar fclose() use karke file ko close karo.
Proper Modes: Correct mode (like "r", "w", etc.) use karo.
Memory Leaks Avoid Karo: Files ko open karke close karna mat bhulo.
