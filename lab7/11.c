/*11.Define a function to merge two Linked List.
Display all the list before and after merging.*/

#include<stdio.h>
typedef struct node node;
struct node
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
    node *list1 = NULL;

    head = create();
    print_list(head);

    list = copy_recursive(head);
    print_list(list);

    list1 = merge_list(head, list);
    print_list(list1);
}

node* merge_list(node *list1, node *list2)
{
    node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
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
