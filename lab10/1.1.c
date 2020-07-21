#include <stdio.h>
#include <stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void push(int value);
void pop();
int top();
void empty();
void display();
void size();
void menu();
node *head,*tail,*temp,*first;
int count = 0;

int main()
{
    head = NULL;
    menu();
}

void menu()
{
    int value, option, tp;
    do
    {
        system("cls");
        printf(" 1 - Push\n");
        printf(" 2 - Pop\n");
        printf(" 3 - Top\n");
        printf(" 4 - Empty\n");
        printf(" 5 - Display\n");
        printf(" 6 - Size\n");
        printf(" 7 - Exit\n");
        printf("Enter Option : ");
        scanf("%d", &option);
        if( option == 1)
        {
            printf("Enter value : ");
            scanf("%d",&value);
            push(value);
        }
        else if(option == 2)
        {
            pop();
        }
        else if (option == 3)
        {
            tp = top();
            if (tp == 0)
                 printf("\n No Top element.");
            else
                printf("Top element : %d",tp);
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 4)
        {
            empty();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 5)
        {
            display();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if( option == 6)
        {
            size();
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nPlease enter between 1 to 7  ");
            exit(0);
            getchar();
            printf("\n\nPress Enter to Continue\n");
            getchar();

        }
    }
    while(option != 7);
}


void push(int value)
{
    if (tail == NULL)
    {
        tail = ( node *)malloc(sizeof( node));
        tail->value = value;
        tail->next = NULL;
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
        printf("\n No element in Queue.");
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
        printf("\nEmpty Queue ");
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
    printf("\nSize : %d", count);
}

