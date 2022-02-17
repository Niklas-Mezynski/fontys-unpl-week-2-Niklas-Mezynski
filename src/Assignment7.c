#include "stdio.h"
#include "string.h"

int stringcompare(char str1[], char str2[]);

int main()
{
    char str1[20], str2[20];
    strcpy(str1, "abc");
    strcpy(str2, "bcd");
    printf("Comparing %s with %s -> result: %d\n", str1, str2, stringcompare(str1, str2));

    
    strcpy(str1, "aaa");
    strcpy(str2, "aaa");
    printf("Comparing %s with %s -> result: %d\n", str1, str2, stringcompare(str1, str2));

    
    strcpy(str1, "aaaab");
    strcpy(str2, "aaaaa");
    printf("Comparing %s with %s -> result: %d\n", str1, str2, stringcompare(str1, str2));

    
    strcpy(str1, "aaa");
    strcpy(str2, "a");
    printf("Comparing %s with %s -> result: %d\n", str1, str2, stringcompare(str1, str2));
    return 0;
}

int stringcompare(char str1[], char str2[])
{
    int i = 0;
    int comp = 0;
    int lengthStr1 = strlen(str1);
    int lengthStr2 = strlen(str2);
    i = (lengthStr1 <= lengthStr2) ? lengthStr2 : lengthStr1;
    for (int j = 0; j < i; j++)
    {
        comp = str2[j] - str1[j];
        if (comp != 0)
        {
            break;
        }
    }

    return comp;
}