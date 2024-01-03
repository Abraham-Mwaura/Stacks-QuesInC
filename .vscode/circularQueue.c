#include <stdio.h>
#define N 6
int queue[N];
int front = -1;
int rear = -1;

void enQueue(int x)
{
    // check is queue is full
    if ((rear + 1) % N == front)
    {

        printf("Queue overflow\n");
    }
    // check if firstt
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void deQueue()
{
    // check if empty
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else if (front == rear)
    {
        printf("The dequed queue is: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The dequed queue is: %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void displayQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        printf("The queue is: ");
        do
        {

            printf("%d ", queue[front]);
            front = (front + 1) % N;
            /* code */
        } while (front != 0);
        printf("\n");
    }
}
void peekQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        printf("The value on top of the Queue is: %d \n", queue[front]);
    }
}
int main()
{
    peekQueue();
    enQueue(1);
    enQueue(2);
    peekQueue();
    enQueue(3);
    enQueue(4);
    peekQueue();
    enQueue(1);
    enQueue(2);
    peekQueue();
    enQueue(3);
    enQueue(4);
    displayQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();

    // displayQueue();
}