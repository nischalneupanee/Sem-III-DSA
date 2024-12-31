// Write a menu driven program to implement linear queue
//  enqueue
//  dequeue
// dispaly all elements(traverse)
//display front
// exit
#include <stdio.h>
#include <stdlib.h>

int front = 0, rear = -1;

void enqueue(int MAXSIZE, int queue[])
{
    if (rear >= MAXSIZE - 1)
    {
        printf("Queue overflow\n");
    }

    else
    {
        rear++;
        scanf("%d", &queue[rear]);
    }
}

void dequeue(int queue[])
{
    if (rear < front)
    {
        printf("Queue is empty\n");
    }

    else
    {
        printf("The deleted item is %d \n", queue[front]);
        front++;
    }
}

void traverse(int queue[])
{
    if (front <= rear)
    {
        printf("The elements in the queue is : \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }

    else{
        printf("Queue is empty.\n");
    }
}

int main()
{
    int n;
    printf("Enter the size of queue: ");
    scanf("%d", &n);

    int queue1[n];

    int choice;
    while (1)
    {
        printf("Enter 1 - Enqueue | 2 - Dequeue | 3 - Display_all | 4- eixt:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(n, queue1);
            break;
        case 2:
            dequeue(queue1);
            break;
        case 3:
            traverse(queue1);
            break;
        case 4:
            exit(0);
            break;
        case 5:
            printf("%d\n",front);
        default:
            printf("Enter the valid input \n");
            break;
        }
    }
}