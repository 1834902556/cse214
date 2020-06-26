/*2.Implement an "Insert Back" function to insert an element at the end(back) of the Linked List.*/
node* insert_back(node *temp, int value)
{
    if (temp==NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof(node));
        new_head->value = value;
        new_head->next = NULL;
        return new_head;
    }
    node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;

    new_node = (node*) malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
