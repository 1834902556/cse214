/*5.Define a "Back" function to display the last element of the Linked List.*/

 void back(node *temp)
{
    if(temp!=NULL){
        while(temp->next!=NULL){
         temp = temp->next;
        }
        printf("\nBack of list :%d",temp->value);
    }
    else{
      printf("NULL\n");
    }
}
