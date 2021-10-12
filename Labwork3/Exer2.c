#include <stdio.h>
#define Max_size 101

int A[Max_size];
int top = -1;

void Push(int x) 
{
    if (top == Max_size - 1) 
    {
        printf("Stack is full\n");
        return;
    }
    top++;
    A[top] = x;
}

void Pop() 
{
    if (top == -1) 
    {
        printf("Stack is empty!\n");
        return;
    }
    top--;
}

int Top() 
{
    return A[top];
}

void Display() 
{
    printf("Stack: ");
    for (int i = 0; i <= top; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() 
    {
    int choice = 0, num;
    do {
        Display();
        printf("1. Add stack\n2. Undo\n3. Display stack\n0. Exit");
        printf("\n\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                break;
            case 2:
                Pop();
                printf("Undo completed!");
                break;
            case 3:
                Display();
                break;
        }
        
    } while(choice != 0);
}