#include <stdio.h>
#include "espl_lib.h"

int main()
{
    int num;
    char ch;
    do{
    printf("Please enter a number");
    scanf("%i", &num);
    printf("%s" , num_to_words(num));
    printf ("Do you want to continue: y/n");
    scanf (" %c", &ch);
    } while (ch == 'y');
    return 0;
}