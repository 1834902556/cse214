/*8.Define a function to reverse the Linked List using a recursive function.
Display the both list before and after reversing.*/

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void reverse_recursive(node *temp);
node *create();
int main()
{
    node *head = NULL;

    head = create();
    print_list(head);

    reverse_recursive(head);
    print_list(head);

}

void reverse_recursive(node *temp)
{

        if(temp==NULL)
        {
            return;
        }
        reverse(temp->next);
        printf("%d ",temp->value);
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


