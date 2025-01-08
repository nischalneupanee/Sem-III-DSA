// Write a menu driven program to implement circular  queue
//  enqueue
//  dequeue
// dispaly all elements(traverse)
//display front
// exit
#include <stdio.h>
#include <stdlib.h>

int front = 0, rear = 0;

void enqueue(int MAXSIZE, int queue[])
{
    if (front == (rear + 1)%MAXSIZE)
    {
        printf("Queue overflow\n");
    }

    else
    {
        scanf("%d",&queue[rear]);
        rear = (rear+1)%MAXSIZE;
    }
}

void dequeue(int queue[],int MAXSIZE)
{
    if (rear == front)
    {
        printf("Queue is empty\n");
    }

    else
    {
        printf("The deleted item is %d \n", queue[front]);
        front= (front+1)%MAXSIZE;
    }
}

void traverse(int queue[], int MAXSIZE) {
    if (front == rear) {
        printf("Queue is empty.\n");
    } else {
        printf("The elements in the queue are:\n");
        int i = front;
        while (i != rear) {
            printf("%d\t", queue[i]);
            i = (i + 1) % MAXSIZE;
        }
        printf("\n");
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
        printf("Enter 1 - Enqueue | 2 - Dequeue | 3 - Display_all | 4- Front | 5- eixt:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(n, queue1);
            break;
        case 2:
            dequeue(queue1,n);
            break;
        case 3:
            traverse(queue1,n);
            break;
        case 4:
            printf("%d\n",front);
        case 5:
            exit(0);
            break;
        
        default:
            printf("Enter the valid input \n");
            break;
        }
    }
}