#include "stdio.h"

unsigned char pbcd(int n);
void printInBinary(unsigned char number);
int strcmp(char* str1[], char* str2[]);

int main() {
    unsigned char result;
    int decimal;
    decimal = 12345;
    result = pbcd(decimal);
    printf("Decimal number %d converts to ", decimal);
    printInBinary(result);
    
    decimal = 469;
    result = pbcd(decimal);
    printf("Decimal number %d converts to ", decimal);
    printInBinary(result);
    return 0;
}

unsigned char pbcd(int n) {
    char second = n % 10;
    char first = n % 100 / 10;
    return (first << 4) + second;
}

void printInBinary(unsigned char number)
{
    unsigned char i;
    for (i = 1 << 7; i > 0; i = i / 2)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}

