/*4.Implement a "Delete At" function to delete nth element of the Linked List.
Take 'n' from user.(Check Underflow and index out of range).[Let, for the first element n = 1].*/

node *delete_at(node *temp, int n)
{
    node *head = temp;
    node *prev, *next;
    int i = 0;
    if(n<1){
    printf("Invalid Index.\n");
    return head;
    }
    if(n!=1){
        while(i<n && temp){
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(temp==NULL && i<n){
            printf("Invalid Index\n");
            return head;
        }
        prev->next = temp->next;
        free(temp);
    }else{
       head = temp->next;
       free(temp);
    }
    return head;
}
