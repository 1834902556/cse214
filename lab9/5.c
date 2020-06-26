/*5.Implement a "Clear" function to delete all the element of the Linked List.*/

node *Clear(node *temp)
{
    node *del;
    while(temp!=NULL){
        del = temp;
        temp = temp->next;
        free(del);
    }
    return NULL;

}

