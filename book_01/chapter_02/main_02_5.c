#include <stdio.h>
#include <conio.h>   // Required for getche()

int main() {
    char ch;
    printf("Press any key: ");
    ch = getche();   // Reads and echoes immediately
    printf("\nYou pressed: %c\n", ch);
    return 0;
}
