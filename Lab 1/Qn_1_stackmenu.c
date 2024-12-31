#include <stdio.h>
#include <stdlib.h>

int top = -1;

// Function to push an element onto the stack
void push(int stack[], int size) {
    if (top == size - 1) {
        printf("The stack is full\n");
    } else {
        printf("Enter the element to push: ");
        top++;
        scanf("%d", &stack[top]);
    }
}

// Function to pop an element from the stack
void pop(int stack[]) {
    if (top == -1) {
        printf("The stack is empty\n");
    } else {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}

// Function to display all elements in the stack
void displayAll(int stack[]) {
    if (top == -1) {
        printf("The stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Function to display the top element
void displayTop(int stack[]) {
    if (top == -1) {
        printf("The stack is empty\n");
    } else {
        printf("The top element is %d at position %d\n", stack[top], top);
    }
}

int main() {
    int size;
    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Invalid stack size. Exiting.\n");
        return 1;
    }

    int stack[size];
    int choice;

    while (1) {
        printf("\nEnter 1 - Push | 2 - Pop | 3 - Display | 4 - Top | 5 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(stack, size);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                displayAll(stack);
                break;
            case 4:
                displayTop(stack);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
