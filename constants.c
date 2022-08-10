#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num = 5;

    printf("%d\n", num);
    num = 8;

    printf("%d\n", num);
    
    const int NUM_CONST = 13;
    printf("%d\n", NUM_CONST);

    return 0;
}