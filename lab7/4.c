/*4.Define a "Front" function to display the first element of the Linked List.*/

 void fornt(node *temp)
{
    if(temp!=NULL){
    printf("\nFront of list %d",temp->value);
    }
    else
    printf("NULL\n");

}
