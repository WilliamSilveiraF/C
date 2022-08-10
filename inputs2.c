#include <stdio.h>
#include <stdlib.h>

int main()
{

    // limiting your string length 
    char name[20];
    printf("Enter your name: \n");
    scanf("%s", name); // can't get whitespaces
    printf("Your name is %s\n", name);

    return 0;
}