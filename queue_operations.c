#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int front = 0, rear = -1;
    int choice, item, i;

    while (1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (rear == SIZE - 1)
                printf("Queue is full");
            else
            {
                printf("Enter item: ");
                scanf("%d", &item);
                rear++;
                queue[rear] = item;
            }
        }
        else if (choice == 2)
        {
            if (front > rear)
                printf("Queue is empty");
            else
            {
                printf("Deleted item: %d", queue[front]);
                front++;
            }
        }
        else if (choice == 3)
        {
            if (front > rear)
                printf("Queue is empty");
            else
            {
                for (i = front; i <= rear; i++)
                    printf("%d ", queue[i]);
            }
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice");
    }

    return 0;
}
