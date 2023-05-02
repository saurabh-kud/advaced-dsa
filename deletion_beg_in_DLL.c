#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head=NULL;
void deletion_beg();
void createlist(int);
void display();
void main ()
{
    createlist(5);
    createlist(10);
    createlist(15);
    display();
    deletion_beg();
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


void deletion_beg()
{
   struct node *temp;
   temp=head;

      if(head==NULL)
   {
       printf("list is empty cant delete\n");
   }
   else if(temp->next==NULL)
   {
       head=NULL;
       free(temp);
        printf("\nNode deleted \n");
   }
   else
   {
       head=temp->next;
       head->prev=NULL;
       free(temp);

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
