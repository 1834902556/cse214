/* Design a Queue Data Structure using Linked List.*/
/* Najmul Islam
   1834902556
*/
#include <stdio.h>
#include <stdlib.h>
#include "Header_file.h"

void empty();
node* push(node *temp, int value);
void display(node *temp);
node* pop(node *temp);
void size(node *temp);
void top(node *temp);
void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    node *head = NULL;
    int value, option, front_element;
    do
    {
        system(" cls ");
        printf(" Enter Option: \n");
        printf(" 1 - Push\n");
        printf(" 2 - Pop\n");
        printf(" 3 - Top\n");
        printf(" 4 - Size\n");
        printf(" 5 - Display\n");
        printf(" 6 - Empty\n");

        printf("\n Enter your Choice : ");
        scanf("%d", &option);

        if(option == 1)
        {
            printf(" Enter Queue Element : ");
            scanf("%d", &value);

            head = push(head,value);
            printf("\n %d Data inserted.\n",value);

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 2)
        {
            head = pop(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 3)
        {
            top(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else if (option == 4)
        {
            size(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 5)
        {
            display(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();

        }
        else if(option == 6)
        {
            empty(head);
            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else
        {
            printf("\nPlease Enter Correct Choice Between 1 to 6");

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
    }
    while(option != 6);
}
