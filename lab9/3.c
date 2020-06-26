/*3.Implement an "Insert At" function to insert an element at the nth index of the Linked List. Take input 'n' and value from user.
(Check index out of range)[Let, for the first element n = 1]*/

node* insert_at(node *temp, int pos, int value)
{
    node *head=temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos==1)
    {
        new_node = (node*) malloc(sizeof(node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev=temp;
        if(i==pos)
        {
            new_node = (node*) malloc(sizeof(node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf("Invalid Index\n");
    return head;
}
