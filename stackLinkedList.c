#include <stdio.h>
#include <stdlib.h>

// initialise the struct data type
struct node
{
    int data;
    struct node *link;
} *head = 0;

// perform push operation
void stackPush(int x)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // check if it is the first node
    if (head == 0)
    {
        newNode->data = x;
        newNode->link = 0;
        head = newNode;
    }
    else
    {
        newNode->data = x;
        // create a backlink from newnode to the head
        newNode->link = head;
        // update the head
        head = newNode;
    }
}

// perform pop operation
void stackPop()
{
    struct node *temp;
    temp = head;
    // change head to the next node
    head = head->link;
    // free the left head
    free(temp);
}

// check the top element
void stackPeek()
{
    if (head == 0)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The top element is: %d\n", head->data);
    }
}

// display the whole stack
void displayStack()

{
    if (head == 0)
    {
        printf("The stack is empty");
    }
    else
    {
        struct node *temp = head;
        printf("The whole stack is: ");
        while (temp->link != 0)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int main()
{
    stackPush(2);
    stackPeek();
    stackPush(22);
    stackPeek();
    stackPush(222);
    stackPeek();
    stackPush(2222);
    stackPeek();
    stackPush(22222);
    displayStack();
    stackPop();
    stackPop();
    displayStack();
    return 0;
}