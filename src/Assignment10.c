#include "stdio.h"
#include "limits.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
    int smallest = INT_MAX;
    int smallest2 = INT_MAX;
    int limit;
    if (argc < 2)
    {
        limit = INT_MAX;
    }
    else
    {
        limit = atoi(argv[1]);
        if (limit < 2)
        {
            limit = 2;
        }
    }

    int i = 0;
    int current = 0;
    printf("Print a few numbers please\n");
    while (i < limit)
    {
        char strNumber[10];
        fgets(strNumber, 10, stdin);
        if (strNumber[0] == '\n')
        {
            break;
        }

        current = atoi(strNumber);
        if (current < smallest2)
        {
            smallest2 = current;
            if (smallest2 < smallest)
            {
                int temp = smallest;
                smallest = smallest2;
                smallest2 = temp;
            }
        }
        i++;
    }
    printf("Smallest value is %d, second smallest is %d", smallest, smallest2);
    return 0;
}