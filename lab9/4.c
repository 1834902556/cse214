/*4.Implement an "Insert After" function to insert an element after a node with value 'key' of the
Linked List. Take input 'key' and new node value from user.(Check index out of range).*/

node *insert_before(node *temp,int key, int value)
{
    node *prev, *head = temp;
    while(temp!=NULL){
        if(temp->value==key){
            if(temp==head){
                node *new_node = (node *) malloc(sizeof(node));
                new_node->value = value;
                new_node->next = temp;
                return new_node;
            }
                node *new_node = (node *) malloc(sizeof(node));
                new_node->value = value;
                new_node->next = temp;
                prev->next = new_node;
                return head;
        }
    }
}
