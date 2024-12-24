#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int stack[], int size)
{
    if (top == size - 1)
    {
        printf("The stack is full\n");
    }
    else
    {
        top++;
        scanf("%d", &stack[top]);
    }
}

void pop(int stack[], int size)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }

    else
    {
        printf("The popped element is %d",stack[top]);
        top--;
    }
}

void Display_all(int stack[], int size)
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

void Displaytop(int stack[])
{
    printf("The top is at position %d \n", top);
}

int main()
{
    int a;
    printf("Enter the size of the stack");
    scanf("%d", &a);
    int stack1[a];

    int choice;

    while (1)
    {
        printf("Enter 1 - Push | 2 - Pop | 3 - Display | 4 - Top | 5 - exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(stack1, a);
            break;
        case 2:
            pop(stack1, a);
            break;
        case 3:
            Display_all(stack1, a);
            break;
        case 4:
            Displaytop(stack1);
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("The choice you entered is not correct");
            break;
        }
    }
}