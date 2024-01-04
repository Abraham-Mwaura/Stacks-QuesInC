#include <stdio.h>
#define N 5
int deQueue[N];
int front = -1, rear = -1;

void enQueueFront(int x)
{
    // check if full
    if ((front == rear + 1) || (front == 0 && rear == N - 1))
    {
        printf("The quue is full\n");
        /* code */
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        deQueue[front] = x;
    }

    else
    {
        front = (front + (N - 1)) % N;
        deQueue[front] = x;
    }
}

void deQueueFront()
{

    if (front == -1 & rear == -1)
    {
        printf("The deQueue is empty ");
    }
    else if (front == rear)
    {
        printf("The deQueuedFront is : %d", deQueue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The deQueuedFront is : %d\n", deQueue[front]);
        front = (front + 1) % N;
    }
}
void enQueueRear(int x)
{
    if ((front == rear + 1) || (front == 0 && rear == N - 1))
    {
        printf("The quue is full\n");
        /* code */
    }
    else if (front == -1 && rear == -1)
    {

        front = rear = 0;
        deQueue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % N;
        deQueue[rear] = x;
    }
}

void deQueueRear()
{
    if (front == -1 & rear == -1)
    {
        printf("The deQueue is empty ");
    }
    else if (front == rear)
    {
        printf("The deQueuedFront is : %d", deQueue[rear]);
        front = rear = -1;
    }
    else
    {
        printf("The deQueuedFront is : %d\n", deQueue[rear]);
        rear = (rear + (N - 1)) % N;
    }
}

void displayDeQueue()
{
    // check if empty
    if (front == -1 && rear == -1)
    {
        printf("The Queue is empty");
    }
    else
    {
        int i = front;
        printf("The deQueue is: ");
        do
        {

            printf("%d ", deQueue[i]);
            i = (i + 1) % N;

            /* code */
        } while (i != rear);
        printf("%d\n", deQueue[i]);
    }
}
int main()
{
    // enQueueFront(1);
    // enQueueFront(2);
    // enQueueFront(3);
    // enQueueFront(4);
    // enQueueFront(5);
    // enQueueFront(6);
    enQueueRear(1);
    enQueueRear(2);
    enQueueRear(3);
    enQueueRear(4);
    enQueueRear(5);
    enQueueRear(6);
    enQueueRear(6);
    displayDeQueue();
    deQueueFront();
    displayDeQueue();
    deQueueRear();
    displayDeQueue();
}