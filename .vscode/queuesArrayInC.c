#include <stdio.h>
#define N 5
int queue[N];
int rear = -1, front = -1;

void enQueue(int x)
{
    if (rear == N + 1)
    {
        printf("Queue overflow\n");
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("The inserted element is %d\n", queue[rear]);
    }
    else
    {
        rear++;
        queue[rear] = x;
        printf("The inserted element is %d\n", queue[rear]);
    }
}

void deQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("cannot Dequeue, the stack is empty\n");

        /* code */
    }
    else if (front == rear)
    {
        printf("The element dequeued is : %d\n", queue[front]);
        front = rear = -1;
        /* code */
    }
    else

    {
        front++;
    }
}

void peekQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty!\n");
        /* code */
    }
    else
    {
        printf("The front of queue is: %d\n", queue[front]);
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
        printf("The queue is : ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{

    // insert rear element
    enQueue(1);
    peekQueue();
    enQueue(2);
    peekQueue();
    peekQueue();
    enQueue(3);
    peekQueue();
    deQueue();
    enQueue(4);
    peekQueue();
    enQueue(5);
    deQueue();
    enQueue(6);
    displayQueue();
    // delete front element
    deQueue();
    // see front element
    peekQueue();

    displayQueue();
}