#include <stdio.h>
#define SIZE 5

int main()
{
    int stack[SIZE];
    int top = -1;
    int choice, item, i;

    while (1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (top == SIZE - 1)
                printf("Stack Overflow");
            else
            {
                printf("Enter item: ");
                scanf("%d", &item);
                top++;
                stack[top] = item;
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
                printf("Stack Underflow");
            else
            {
                printf("Popped item: %d", stack[top]);
                top--;
            }
        }
        else if (choice == 3)
        {
            if (top == -1)
                printf("Stack is empty");
            else
            {
                for (i = top; i >= 0; i--)
                    printf("%d ", stack[i]);
            }
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice");
    }

    return 0;
}
