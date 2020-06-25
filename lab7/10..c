/*10.Copy a Linked List into another Linked List using recursive function.
Display the both list before and after copy.*/
#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void print_list(node *temp);
node* copy_recursive(node *copy);
node *create();
int main()
{
    node *head = NULL;
    node *list = NULL;

    head = create();
    print_list(head);

    list = copy_recursive(head);
    print_list(list);
}

node* copy_recursive(node *copy)
{
    if(copy == NULL)
        return NULL;
    node *temp = (node*) malloc(sizeof (node));
    temp->value = copy->value;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;

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



