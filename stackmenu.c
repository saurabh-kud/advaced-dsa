//menu driven program on stack using array
#include <stdio.h>
#include<conio.h>
#define MAX 5
int stack[MAX],i,j,choice=0,top=-1;
void push();
void pop();
void show();
void main ()
{


    printf("*********Stack operations using array*********");

printf("\n----------------------------------------------\n");
    while(choice != 4)
    {

        printf("\n Choose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
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
                show();
                break;
            }
            case 4:
            {
                break;

            }
            default:
            {
                printf("Please Enter valid choice\n ");
            }
        };
    }
}

void push ()
{
    int val;
    if (top == MAX-1)
    printf("\n Overflow");
    else
    {
        printf("\nEnter the value to be insert");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
        printf("value inserted successfully\n");
    }

}

void pop ()
{
    int val;
    if(top == -1)
    printf("Underflow");
    else
    {  val=stack[top];
       printf("item deleted=%d\n",val);
       top = top -1;
    }

}
void show()
{
    if(top == -1)
    {
        printf("\nNothing to print");
    }
    else
    {        printf("printing values\n");
         for (i=top;i>=0;i--)//for(i=0;i<=top;i++)
            {

             printf("%d\n",stack[i]);
            }

    }

}

