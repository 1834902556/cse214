/*4.Use Dynamic memory allocation to create three elements of the
Linked List and display(only value) the complete Linked List using
a function.(Check Empty List)*/
#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    struct Node *next;
};
int main()
{
    node *head=NULL;
    node *a, *b, *c;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));

    is_empty(head);

    head = a;

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = NULL;

    print(head);
    is_empty(head);

}
void print(node *temp)
{
        while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
        }

}
void is_empty(node *temp)
{
    if(temp==NULL){
        printf("Empty List.\n");
    }
        else{
            printf("\nList is not Empty.");        }
}
