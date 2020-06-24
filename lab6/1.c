/*1.Define a Structure for Linked List Node, Declare three variable,
Assign value and next address in those variable. Print the variable address,
value and next variable address.(Don't use any function, 'typedef' keyword and dynamic memory allocation).*/

#include<stdio.h>
struct Node
{
    int value;
    struct Node *next;
};
int main()
{
    struct Node *head;
    struct Node a, b, c;

    head = &a;
    printf("Address \tValue \tNext Address\n");

    a.value = 1;
    a.next  = &b;
    printf("%p \t %d \t %p\n",&a,a.value,a.next);

    b.value = 2;
    b.next  = &c;
    printf("%p \t %d \t %p\n",&b,b.value,b.next);

    c.value = 3;
    c.next  = NULL;
    printf("%p \t %d \t %p\n",&c,c.value,c.next);

}
