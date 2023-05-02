//#include<stdio.h>
//#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head=NULL;
void insertion_beginning(int);
void createlist(int);
void display();
int main ()
{
    createlist(10);
    createlist(20);
    createlist(30);
    //printf("list before insertion\n");
    cout<<"list before insertion"<<endl;
    display();
    insertion_beginning(5);
    //printf("list after insertion\n");
    cout<<"list before insertion"<<endl;
    display();
    return 0;
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


void insertion_beginning(int x)
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
   {
       ptr->data=x;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
   }
   printf("\nNode inserted\n");
  // cout<<endl<<"Node inserted"<<endl;
}

void display()
{
    struct node *ptr;
    //printf("\n printing values...\n");
    cout<<endl<<"printing values..."<<endl;
    ptr = head;
    while(ptr!= NULL)//ptr->next!=NULL
    {
        printf("%d->",ptr->data);
        //cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    //printf("NULL");
    cout<<"NULL";


}
