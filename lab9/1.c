/*1.Implement an "Insert Front" function to insert an element at the begging(front) of the Linked List.*/

node *insert_front(node *temp, int value)
{
    node *new_head;
    new_head = (node *)malloc(sizeof(node));
    new_head->value = value;
    new_head->next  = temp;
    return new_head;
}
