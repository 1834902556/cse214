/*12.Define a function to merge two shorted Linked List into a Linked List.
Display all the list before and after merging.(Consider given two linked list are already shorted.*/

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node* merge_list(node *list1, node *list2);
node *create();
node *create_2();
int main()
{
    node *head = NULL;
    node *list = NULL;
    node *list1 = NULL;
    node *list2 = NULL;

    list1 = create();
    print_list(list1);
    printf("\n");
    list2 = create_2();
    print_list(list2);
    printf("\n");
    list = merge_list(list1, list2);
    print_list(list);

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
node *create_2()
{
    node *a,*b,*c,*d;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));
    d = (node*) malloc(sizeof(node));

    a->value = 5;
    a->next  = b;

    b->value = 6;
    b->next  = c;

    c->value = 7;
    c->next  = d;

    d->value = 8;
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

