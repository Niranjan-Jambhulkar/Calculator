#include<stdio.h>
#include<stdlib.h>
#include "D:\Programs\C Project\Calculator\Functions\Function.c"
int main()
{
    int selection;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divide\n");
    printf("Select option: ");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        Addition();
        main();
        break;
    
    case 2:
        Subtraction();
        main();
        break;
    
    case 3:
        Multiplication();
        main();
        break;

    case 4:
        Divide();
        main();
        break;

    default:
        break;
    }
    
    return 0;
}
