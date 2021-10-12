#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Digits
{
    int data;
    struct Digits* next;
};

struct Digits* createnode(int number)
{
    struct Digits* temp = (struct Digits*)malloc(sizeof(struct Digits));
    temp->data=number;
    temp->next=NULL;
    return temp;
}

void display(struct Digits* head)
{
    if(head==NULL)
    {
        printf("\nList is Empty\n");
        return;
    }

    struct Digits *p=head;
    while(p!=NULL)
    {
        printf("\n%d ",p->data);
        p=p->next;
    }
}

void SumOfDigits(struct Digits **head,int number)
{
    struct Digits *temp;

    if(*head==NULL)
    {
        *head=temp;
        return;
    }
    
    char sNum[100];
    itoa(number,sNum,100);
    printf("%s\n",sNum);
    
    
}

int main()
{
    struct Digits *head=NULL;

    SumOfDigits(&head,123);
    display(head);
}