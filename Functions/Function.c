#include<stdio.h>
void Addition();
void Addition(){
    int sum=0,temp;
    int Add[20];
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
    printf("Sum is: %d", sum);
    
}