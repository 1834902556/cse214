/*9.Copy a Linked List into another Linked List.(Don't use recursion).
Display the both list before and after copy.*/
#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void print_list(node *temp);
node* copy_list(node *temp);
node *create();
int main()
{
    node *head = NULL;
    node *list = NULL;

    head = create();
    print_list(head);
    printf("\n");
    list = copy_list(head);
    print_list(list);

}

node* copy_list(node *temp)
{
    node *head;
    node *tag;

    tag = (node*) malloc(sizeof (node));

    tag->value = temp->value;
    tag->next = temp->next;

    head = tag;
    temp = temp->next;
    while(temp)
    {
        tag = (node*) malloc(sizeof (node) ) ;
        tag->value = temp->value;
        tag->next = temp->next;
        temp = temp->next;
    }
    return head;
}
node *create()
{
    node *a,*b,*c,*d;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));
    d = (node*) malloc(sizeof(node));

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = d;

    d->value = 4;
    d->next  = NULL;

    return a;
}
void print_list(node *temp)
{
        while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
    }
}


