/*6.Define a "Search" function to find a "key"(take input 'key' from user).
Print "Found" if the search 'key' is found in the Linked List otherwise print"Not Found".*/

void search(node *temp)
{
    int key,tag=0;
    scanf("%d",&key);

        while(temp!=NULL){
            if(temp->value==key){
             tag++;
          }
          temp = temp->next;
        }
        if(tag==1){
            printf("Found.\n");
        }
        else{
            printf("Not Found.\n");
        }

}
