#include<stdio.h>
void Addition();
void Addition(){
    int sum=0,temp;
    int Add[20];
    printf("\nEnter 0 to print result\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &Add[i]);
        if (Add[i] == 0)
        {
            temp=i;
            break;
        }
        
    }
    for (int i = 0; i < temp; i++)
    {
        sum = sum + Add[i];
    }
    printf("Sum is: %d\n\n", sum);    
}

void Subtraction();
void Subtraction(){
    int sum=0,temp;
    int Sub[20];
    printf("\nEnter 0 to print result\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &Sub[i]);
        if (Sub[i]==0)
        {
            temp = i;
            break;
        }
    }

    for (int i = 0; i < temp; i++)
    {
        sum= Sub[i]-sum;
    }
    printf("Sum is: %d\n", sum);
    
}