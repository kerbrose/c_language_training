#include <stdio.h>

int main() {
    int a = 5;
    int b;

    // Unary plus and minus
    b = -a; 
    printf("Unary minus: %d\n", b);   // -5

    // Increment and decrement
    printf("Prefix increment: %d\n", ++a); // 6
    printf("Postfix decrement: %d\n", a--); // 6, then a becomes 5

    // Logical NOT
    printf("Logical NOT of 0: %d\n", !0);   // 1 (true)
    printf("Logical NOT of 5: %d\n", !5);   // 0 (false)

    // Bitwise NOT
    // 5 in binary: 00000000 00000000 00000000 00000101
    // Bitwise NOT of 5: 11111111 11111111 11111111 11111010 (which is -6 in two's complement)
    printf("Bitwise NOT of 5: %d\n", ~5);   // -6 (two's complement)

    // Address-of and dereference
    int *p = &a; 
    printf("Address of a: %p\n", (void*)p);
    printf("Value at pointer p: %d\n", *p);

    // sizeof
    printf("Size of int: %zu bytes\n", sizeof(int));

    return 0;
}
