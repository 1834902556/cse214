/*2.Implement a "Delete Front" function to delete the first(front) element of the Linked List.(Check Underflow).*/
node *delete_front(node *temp)
{
    if(temp!=NULL){
    node *new_head = temp->next;
    free(temp);
    return new_head;
    }
    printf("Underflow Linked List");
    return temp;
}
