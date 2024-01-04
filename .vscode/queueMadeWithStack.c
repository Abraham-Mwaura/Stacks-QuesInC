#include <stdio.h>
#define N 5
int s1[N];
int s2[N];
int top = -1;
int top2 = -1;
int counter = 0;

void push1(int x)
{
    if (top == N - 1)
    {
        printf("The queue is full\n");
        /* code */
    }
    else
    {
        top++;
        s1[top] = x;
    }
}

int pop1()
{
    return s1[top--];
}

void push2(int x)
{
    top2++;
    s2[top2] = x;
}

int pop2()
{
    return s2[top2--];
}
void enQueue(int x)
{
    // check if full

    push1(x);
    counter++;
}

void deQueue()
{
    if (top == -1)
    {
        printf("The queue is empty!\n");
        /* code */
    }
    else
    {
        int i;
        for (i = 0; i < counter; i++)
        {
            push2(pop1());
        }
        printf("The popped element is: %d\n", pop2());

        counter--;
        for (i = 0; i < counter; i++)
        {
            push1(pop2());
        }
    }
}

void peekQueue()
{
    if (top == -1)
    {
        printf("The Queue is Empty! \n");
    }
    else
    {
        printf("The element in front of Queue is %d\n", s1[0]);
    }
}

void displayQueue()
{
    for (int i = 0; i < counter; i++)
    {
        printf("%d ", s1[i]);
    }
    printf("\n");
}

int main()
{
    deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    displayQueue();
    peekQueue();
    deQueue();
    peekQueue();
    deQueue();
    peekQueue();
    deQueue();
    peekQueue();
}