/*5.Define a function to display the complete Linked List with a recursive function using problem 4.*/
#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    struct Node *next;
};
void print_recursive(node *temp);
int main()
{
    node *head = NULL;
    node *a, *b, *c;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));

    head = a;

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = NULL;

    print_recursive(head);

}
void print_recursive(node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }

    else
    {
        printf("%d ",temp->value);
        if(temp->next==NULL)
        {
            return;
        }
        print_list(temp->next);
    }
}


