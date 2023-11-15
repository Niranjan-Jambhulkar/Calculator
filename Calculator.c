#include<stdio.h>
#include<stdlib.h>
#include "D:\Programs\C Project\Calculator\Functions\Function.c"
int main()
{
    int selection;
    printf("1. Addition\n");
    printf("Select option: ");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        Addition();
        main();
        break;
    
    default:
        break;
    }
    
    return 0;
}
