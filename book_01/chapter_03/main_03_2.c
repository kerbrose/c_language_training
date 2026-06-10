#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Initial a = %d\n", a);

    a = b;      // Simple assignment
    printf("a = b : %d\n", a);

    a += b;     // Add and assign
    printf("a += b : %d\n", a);

    a -= b;     // Subtract and assign
    printf("a -= b : %d\n", a);

    a *= b;     // Multiply and assign
    printf("a *= b : %d\n", a);

    a /= b;     // Divide and assign
    printf("a /= b : %d\n", a);

    a %= b;     // Modulus and assign
    printf("a %%= b : %d\n", a);

    // Bitwise shift and assignments
    // a in binary: 00000000 00000000 00000000 00000101
    // Left shift a by 1: 00000000 00000000 00000000 00001010 (which is 10 in decimal)
    a = 5;      // Reset a
    a <<= 1;    // Left shift and assign
    printf("a <<= 1 : %d\n", a);

    a >>= 1;    // Right shift and assign
    printf("a >>= 1 : %d\n", a);

    a &= b;     // Bitwise AND and assign
    printf("a &= b : %d\n", a);

    a ^= b;     // Bitwise XOR and assign
    printf("a ^= b : %d\n", a);

    a |= b;     // Bitwise OR and assign
    printf("a |= b : %d\n", a);

    return 0;
}
