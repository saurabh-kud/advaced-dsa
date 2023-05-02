#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head=NULL;
void deletion_end();
void createlist(int);
void display();
void main ()
{
    createlist(5);
    createlist(10);
    createlist(15);
    display();
    deletion_end();
    display();
}
void createlist(int x)
{
   struct node *ptr,*temp;

   ptr = (struct node *)malloc(sizeof(struct node));

      if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=x;
       head=ptr;
   }
   else
   {      temp = head;
          ptr->data=x;
          while(temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next = ptr;
          ptr ->prev=temp;
          ptr->next = NULL;

   }

}


void deletion_end()
{
   struct node *ptr;
   ptr=head;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        printf("\n node deleted\n");
    }
    else
    {
        head=head->next;
        ptr->next->prev=NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }
}

void display()
{
    struct node *ptr;
    printf("\n printing values...\n");
    ptr = head;
    while(ptr!= NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}
