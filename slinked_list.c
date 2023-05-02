#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;                        //Data of the node
    struct node *nextptr;           //Address of the next node
}*stnode;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;


    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *newNode, *tmp;
    int number, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &number);
        stnode->num = number;
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &number);

                newNode->num = number;      // links the num field of fnNode with num
                newNode->nextptr = NULL; // links the address field of fnNode with NULL

                tmp->nextptr = newNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        //printf("%d->",tmp);
        while(tmp != NULL)
        {
            printf("%d -> ", tmp->num);       // prints the data of current node
            tmp = tmp->nextptr;                     // advances the position of current node
        }
        if(tmp==NULL)
            printf("NULL");
    }
}

