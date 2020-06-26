/*1.Implement a "Delete Back" function to delete the last(back) element of the Linked List.(Check Underflow).*/
node *delete_back(node *temp)
{
    if(temp!=NULL){
    node *head = temp, *last;

    while(temp->next!=NULL){
        last = temp;
        temp = temp->next;
    }
    free(temp);
    last->next = NULL;
    return head;
    }
    printf("Underflow Linked List");
    return temp;
}
