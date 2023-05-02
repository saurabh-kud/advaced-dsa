//create circular linked list
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void createlist(int);
void display();
void begin_delete();
int main ()
{
    createlist(10);
    createlist(20);
    createlist(30);
    display();
    begin_delete();
    display();
    return 0;

}

void createlist(int x)
{
    struct node *ptr,*temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
       // printf("\nOVERFLOW\n");
       cout<<"overflow"<<endl;
    }
    else
    {
        ptr->data = x;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> next = head;
        }

        //printf("\nnode inserted\n");
        cout<<"node inserted"<<endl;
    }

}
void begin_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        //printf("\nUNDERFLOW");
        cout<<"\n"<<"underflow";
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
      //  printf("\nnode deleted\n");
      cout<<"node deleted"<<endl;
    }

    else
    {   ptr = head;
        while(ptr -> next != head)
            ptr = ptr -> next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        //printf("\nnode deleted\n");
        cout<<"node deleted"<<endl;

    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    //printf("\nprinting values\n");
    cout<<"\n"<<"printing values"<<endl;
    while(ptr->next!=head)
    {
        //printf("%d\n",ptr->data);
        cout<<"\n"<<ptr->data;
        ptr=ptr->next;
    }
   // printf("%d\n",ptr->data);
   cout<<"\n"<<ptr->data<<endl;
}
