/*5.Implement an "Insert Before" function to insert an element before a node with value 'key' of the
Linked List. Take input 'key' and new node value from user.(Check index out of range).*/

node *insert_after(node *temp,int key, int value)
{
    node *head = temp;
    while(temp!=NULL){
        if(temp->value==key){
                node *new_node = (node *) malloc(sizeof(node));
                new_node->value = value;
                new_node->next = temp->next;
                temp->next = new_node;
                return head;
        }
         temp = temp->next;
    }
    printf("Element Not found\n");
    return head;
}
