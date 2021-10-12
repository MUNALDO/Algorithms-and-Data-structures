#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct node
{
    int passengers;
    char name[100];
    struct node *next;
};

struct node* createnode(int d,char name[])
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->passengers=d;
    strcpy(newnode->name,name);
    newnode->next=NULL;
    return newnode;
}

void display(struct node *head)
{
    if(head==NULL)
    {
        printf("\nList is Empty\n");
        return;
    }

    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("\n%d %s",temp->passengers,temp->name);
        temp=temp->next;
    }
}

int length(struct node *head)
{
    int c=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    
    return c;
}

void addCar(struct node **head,int d,char name[])
{
    struct node *newnode,*temp;
    newnode =createnode(d,name);

    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
  
    temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
  
    temp->next=newnode;
}

void removeCars(struct node **head)
{
    struct node *prev,*temp;
    temp = *head;
    prev = *head;

    while(temp!=NULL)
    {
        if(temp->passengers == 0 )
        {
            if(temp == *head)
            {
                printf("\n%d %s removed ",temp->passengers,temp->name);
                *head = temp->next;
                free(temp);
                temp = *head;
                prev = *head;
            }
            else
            {
                printf("\n%d %s removed ",temp->passengers,temp->name);
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
}

int main()
{
    struct node *head=NULL;

    addCar(&head,30,"Sinh");
    addCar(&head,5,"nhat");
    addCar(&head,2002,"Nguyen");
    addCar(&head,2,"Xuan");
    addCar(&head,0,"Thai");
  
    printf("Cars in the list:");

    display(head);

    printf("\nremoveCars() fucntion is called ");
    removeCars(&head);
    printf("\nAfter removing empty cars:");
    display(head);
    int l = length(head);
    printf("\nNumber of cars left in Train : %d\n",l);
  
    return 0;
}