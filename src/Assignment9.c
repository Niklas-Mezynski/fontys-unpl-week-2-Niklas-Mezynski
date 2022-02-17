#include "stdio.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
        return 0;
    printf("Searching for: %s\n", argv[1]);
    char *envVariable;
    envVariable = getenv(argv[1]);
    if (envVariable != NULL)
    {
        printf("Env variable value: %s\n", envVariable);
    }
    else
    {
        printf("Env variable not found");
    }
    return 0;
}