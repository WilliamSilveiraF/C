#include <stdio.h>
#include <stdlib.h>

int main()
{

    char newname[20];
    printf("Enter your name again: \n");
    fgets(newname, 20, stdin); // can get whitespaces
    printf("Your name is %s", newname);

    return 0;
}