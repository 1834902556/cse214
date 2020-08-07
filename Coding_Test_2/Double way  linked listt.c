#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
    node *prev;
};
void menu();
node* create_list();
void display(node *temp);
node* insert_at(node *temp, int pos, int value);
node *delete_front(node *temp);
int main()
{
    menu();
    return 0;
}
void menu()
{
    node *head = NULL;
    head = create_list();
    int value, option;
    do
    {
        system("cls");
        printf("1. Insert At\n");
        printf("2. Delete Front\n");
        printf("3. Copy Recursively\n");
        printf("4. Merge Two List\n");
        printf("5. Display Reverse\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your Option : ");
        scanf("%d", &option);
        if(option == 1)
        {
            insert_at(head,2,2);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 2)
        {
            delete_front(head)
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 3)
        {
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 4)
        {
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 5)
        {
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 6)
        {
            printf("List: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nInvalid Option, Please Option Between '1 to 7'");
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
    }
    while(option != 7);
}

Node* create_list()
{
    Node *a, *b, *c, *d;
    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));
    a->value = 1;
    a->next = b;
    b->value = 2;
    b->next = c;
    c->value = 3;
    c->next = d;
    d->value = 4;
    d->next = NULL;
    return a;
}
void display(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
node* insert_at(node *temp, int pos, int value)
{
    node *head=temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos==1)
    {
        new_node = (node*) malloc(sizeof(node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev=temp;
        if(i==pos)
        {
            new_node = (node*) malloc(sizeof(node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf("Invalid Index\n");
    return head;
}
node *delete_front(node *temp)
{
    if(temp!=NULL){
    node *new_head = temp->next;
    free(temp);
    return new_head;
    }
    printf("Underflow Linked List");
    return temp;
}
