#include <stdio.h>
#define N 5

int stack[N];

int pushStack(int position)
{
    if (position == N)
    {
        printf("The stack is full\n");
        return position;
    }
    else
    {
        printf("Enter the value to push in the stack: ");
        scanf("%d", &stack[position + 1]);
        position++;
        return position;
    }
}

int popStack(int position)
{
    if (position == -1)
    {
        printf("Cannot pop! Stack is empty\n");
        return position;
    }
    else
    {
        position--;
        return position;
    }
}

void peekStack(int peekPosition)
{
    if (peekPosition == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Your top Element is: %d", stack[peekPosition]);
    }
}
void displayStack(int position)
{
    int i = 0;
    if (position == -1)
    {
        return;
    }
    else
    {
        printf("The Stack: ");
        while (i <= position)
        {
            printf("%d ", stack[i]);
            i++;
        }
    }
}

int main()
{
    int operate = 1, position = -1, Choice;
    while (operate)
    {
        printf("\n 1: Push in the stack \n 2: Pop in the stack \n 3: Peek in stack \n 0: to quit\n");
        scanf("%d", &Choice);
        operate = Choice;
        switch (Choice)
        {
        case 1:
            position = pushStack(position);
            // displayStack(position);
            break;
        case 2:
            position = popStack(position);
            // displayStack(position);
            break;
        case 3:
            peekStack(position);
            break;
        default:
            break;
        }
    }
}
