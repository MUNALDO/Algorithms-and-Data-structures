#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Customer
{
    int data1;
    int data2;
    int data3;
    struct Customer* next;
};

struct Customer* front = NULL;
struct Customer* back = NULL;

void Enqueue(int CustNo, int Item1, int Item2, int Item3)
{
    struct Customer* temp = (struct Customer*)malloc(sizeof(struct Customer));
    temp->data1 = Item1;
    temp->data2 = Item2;
    temp->data3 = Item3;
    temp->next = NULL;
    if(front==NULL && back==NULL)
    {
        front = back = temp;
        return;
    }
    back->next = temp;
    back = temp;
}

void Dequeue()
{
    struct Customer* temp = front;
    if(front == NULL)
    {
        printf("\n==List is empty==\n");
        return;
    }
    if (front == back)
    {
        front = back = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}

void Display()
{
    struct Customer* temp = front;
    while (temp != NULL)
    {
        int n;// customers no
        int k;//to store the quantity for each customer
        k=1;
        int item_no;
        item_no=0;
        printf("Enter customers no : %d",n); scanf("%d",&n);
        printf("Quantity of Item no 1 : %d\n",temp->data1);
        printf("Quantity of Item no 2 : %d\n",temp->data2);
        printf("Quantity of Item no 3 : %d\n",temp->data3);
        for(int i=1; i<=n; i++)
        {
            printf("Enter the quantity for customer %d :\n%d",i,k);
            scanf("%d",&k);
            k++;
            printf("Enter the item no %d :\n%d",i,item_no);
            scanf("%d",&item_no);
        }
        
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    Enqueue(3,4,5,6);
    Display();
}