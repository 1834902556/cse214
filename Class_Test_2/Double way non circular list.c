#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void empty(node *temp);
void size(node *temp);
node *push_front(node *temp, int value);
node *pop_front(node *temp);
node *Clear(node *temp);
void display(node *temp);
int main()
{
    menu();
    return 0;
}
void menu()
{
    node *head = NULL;
    int value, option;
    do
    {
        system(" cls ");
        printf(" Enter Option: \n");
        printf(" 1 - Empty\n");
        printf(" 2 - Size\n");
        printf(" 3 - Push Front\n");
        printf(" 4 - Pop Front\n");
        printf(" 5 - Clear\n");
        printf(" 6 - Display\n");

        printf("\n Enter your Choice : ");
        scanf("%d", &option);

        if(option == 1)
        {
            empty(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }

        else if(option == 2)
        {
            size(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 3)
        {
            printf("Enter value : ");
            scanf("%d",&value);
            push_front(head,value);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else if (option == 4)
        {
            head = pop_front(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 5)
        {
            Clear(head):
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }

        else if(option == 6)
       {
            display(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }

        else
        {
            printf("\nPlease Enter Between 1 to 6");

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
    }
    while(option != 6);
}
void empty(node *temp)
{
    if ((temp == NULL))
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\n Queue is not empty");
    }
}
void size(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\n Size of Queue: %d", count);
}
node *push_front(node *temp, int value)
{
    node *new_head;
    new_head = (node *)malloc(sizeof(node));
    new_head->value = value;
    new_head->next  = temp;
    return new_head;
}
node* pop_front(node *temp)
{
    if(temp != NULL)
    {
        node *new_head = temp->next;
        free(temp);
        return new_head;
    }
    printf("\n Empty Queue");
    return temp;
}
node *Clear(node *temp)
{
    if(temp!=NULL){
    node *del;
    while(temp!=NULL){
        del  = temp;
        temp = temp->next;
        free(del);
    }
    return NULL;
    }
    else{
        printf("\n Queue is already empty");
    }

}
void display(node *temp)
{
    if (temp == NULL)
    {
        printf(" Queue is empty ");
        return;
    }
    while (temp != NULL)
    {
        printf("\t%d", temp->value);
        temp = temp->next;
    }
}
