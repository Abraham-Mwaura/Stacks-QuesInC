#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
    /* data */
} *front, *rear;

void enQueue(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    if (front == 0 && rear == 0)
    {
        newNode->link = 0;
        front = rear = newNode;

        /* code */
    }
    else
    {
        newNode->link = 0;
        rear->link = newNode;
        rear = newNode;
    }
}

void deQueue()
{
    if (front == 0)
    {
        printf("Queue underflow\n");
    }
    else
    {
        struct node *temp;
        temp = front;
        front = front->link;
        free(temp);
    }
}

void peekQueue()
{
    if (front == 0)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("The front element is: %d\n", front->data);
    }
}

void displayQueue()
{
    if (front == 0)
    {
        printf("Queue underflow\n");
    }
    else
    {
        struct node *temp = front;
        do
        {
            printf("%d ", temp->data);
            temp = temp->link;
        } while (temp != 0);
        printf("\n");
    }
}

int main()
{
    enQueue(30);
    enQueue(300);
    enQueue(3000);
    peekQueue();
    // peekQueue();
    displayQueue();
    deQueue();
    displayQueue();
    enQueue(30);
    enQueue(300);
    enQueue(3000);

    peekQueue();
    displayQueue();
    deQueue();
    peekQueue();
    displayQueue();
}
