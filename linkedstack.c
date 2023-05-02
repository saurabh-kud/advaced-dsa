//menu driven program on linked stack
#include <stdio.h>
void push();
void pop();
void display();
void search();
struct node
{
int val;
struct node *next;
};
struct node *head=NULL;

void main ()
{
    int choice=0;
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n----------------------------------------------\n");
    while(choice != 5)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Search\n5.Exit\n");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                search();
                break;
            }
            case 5:
                printf("exiting");
                break;
            default:
            {
                printf("Please Enter valid choice ");
            }
    };
}
}
void push ()
{
    int item;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("not able to push the element overflow occurs\n");
    }
    else
    {
        printf("Enter the value");
        scanf("%d",&item);
        if(head==NULL)
        {
            ptr->val = item;
            ptr -> next = NULL;
            head=ptr;

        }
        else
        {
            ptr->val = item;
            ptr->next = head;
            head=ptr;

        }
        printf("Item pushed");

    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped");

    }
}
void display()
{

    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("Stack is empty nothing to print\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr = ptr->next;
        }
    }
}
void search()
{
    int key;
    printf("enter element to search\n");
    scanf("%d",&key);
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->val==key)
        {
            printf("element found");
            break;
        }
        temp=temp->next;
    }
    if(temp==NULL)
        printf("not found");
}
