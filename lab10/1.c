#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node *head,*tail,*temp,*first;
int top();
void push(int value);
void pop();
void empty();
void display();
void size();
int count = 0;

void main()
{
    int value, op, head_element;
    head = tail = NULL;
    do
    {
        system("cls");
        printf(" 1 - push\n");
        printf(" 2 - pop\n");
        printf(" 3 - Top\n");
        printf(" 4 - Empty\n");
        printf(" 5 - Display\n");
        printf(" 6 - Queue size\n");
        printf(" 7 - Exit\n");
        printf("Enter choice : ");
        scanf("%d", &op);
        if( op == 1)
        {
            printf("Enter value : ");
            scanf("%d",&value);
            push(value);
        }
        else if(op == 2)
        {
            pop();
        }
        else if (op == 3)
        {
            head_element = top();
            if (head_element != 0)
                printf("Top element : %d", head_element);
            else
                printf("\n No Top element.");
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if (op == 4)
        {
            empty();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if(op == 5)
        {
            display();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if( op == 6)
        {
            size();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if (op == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nPlease enter correct choice between 1 to 7  ");
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
    }
    while(op != 7);
}

void push(int value)
{
    if (tail == NULL)
    {
        tail = ( node *)malloc(sizeof( node));
        tail->next = NULL;
        tail->value = value;
        head = tail;
    }
    else
    {
        temp=( node *)malloc(sizeof(node));
        tail->next = temp;
        temp->value = value;
        temp->next = NULL;

        tail = temp;
    }
    count++;
}

void pop()
{
    first = head;

    if (first == NULL)
    {
        printf("\n No elements, empty queue");
        return;
    }
    else if (first->next != NULL)
    {
        first = first->next;
        free(head);
        head = first;
    }
    else
    {
        free(head);
        head = NULL;
        tail = NULL;
    }
    count--;
    getchar();
    printf("\n\nPress Enter to Continue\n");
    getchar();
}

int top()
{
    if ((head != NULL) && (tail != NULL))
        return(head->value);
    else
        return 0;
    getchar();
    printf("\n\nPress Enter to Continue\n");
    getchar();
}

void empty()
{
    if ((head == NULL) && (tail == NULL))
        printf("\n Empty Queue ");
    else
        printf("Queue is not empty");
}
void display()
{
    first = head;

    if ((first == NULL) && (tail == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (first != tail)
    {
        printf("%d ", first->value);
        first = first->next;
    }
    if (first == tail)
        printf("%d", first->value);
}

void size()
{
    printf("\n Queue size : %d", count);
}

