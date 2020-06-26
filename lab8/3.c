/*3.Implement a "Delete Value" function to delete a value(key) from the Linked List.
Take input the "key" from user.(Check Underflow and Not Found.).*/
node *delete_value(node *temp, int key)
{
    if(temp!=NULL){
        node *head = temp, *prev;
        while(temp!=NULL){
            if(temp->value==key){
                if(head==temp){
                    head = temp->next;
                    free(temp);
                    return head;
                }
                else{
                    prev->next = temp->next;
                    free(temp);
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        printf("\nNode not found.");
        return head;
    }
    printf("Underflow Linked List");
    return temp;
}
