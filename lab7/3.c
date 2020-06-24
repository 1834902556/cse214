/*Define a "size" function to find the size of the Linked list.*/
void size(node *temp)
{
    int count=0;
    while (temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("Size of list : %d",count);
}
