#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *newnode, *temp, *prev;
    int choice, item;

    while (1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            newnode = (struct node *)malloc(sizeof(struct node));

            printf("Enter item: ");
            scanf("%d", &item);

            newnode->data = item;
            newnode->next = NULL;

            if (head == NULL)
                head = newnode;
            else
            {
                temp = head;

                while (temp->next != NULL)
                    temp = temp->next;

                temp->next = newnode;
            }

            printf("Node inserted");
        }
        else if (choice == 2)
        {
            printf("Enter item to delete: ");
            scanf("%d", &item);

            temp = head;
            prev = NULL;

            while (temp != NULL && temp->data != item)
            {
                prev = temp;
                temp = temp->next;
            }

            if (temp == NULL)
                printf("Item not found");
            else
            {
                if (prev == NULL)
                    head = temp->next;
                else
                    prev->next = temp->next;

                free(temp);
                printf("Node deleted");
            }
        }
        else if (choice == 3)
        {
            temp = head;

            if (temp == NULL)
                printf("List is empty");
            else
            {
                while (temp != NULL)
                {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }

                printf("NULL");
            }
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice");
    }

    return 0;
}
