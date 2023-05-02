#include <stdio.h>
#include <stdbool.h>

//Represent a node of the singly linked list
struct node{
    int data;
    struct node *next;
};

//Represent the head and tail of the singly linked list
struct node *head=NULL, *tail = NULL;

//addNode() will add a new node to the list
void addNode(int data) {
    //Create a new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    //Checks if the list is empty
    if(head == NULL) {
        //If list is empty, both head and tail will point to new node
        head = newNode;
        tail = newNode;
    }
    else {
        //newNode will be added after tail such that tail's next will point to newNode
        tail->next = newNode;
        //newNode will become new tail of the list
        tail = newNode;
    }
}

//searchNode() will search for a given node in the list
void searchNode(int data) {
    struct node *current = head;
    int i = 1;
    bool flag = false;

    //Checks whether list is empty
    if(head == NULL) {
        printf("List is empty \n");
    }
    else {
        while(current != NULL) {
             //Compares node to be found with each node present in the list
            if(current->data == data) {
                flag = true;
                break;
            }
            i++;
            current = current->next;
        }
    }
    if(flag)
         printf("Element is present in the list at the position: %d\n", i);
    else
         printf("Element is not present in the list\n");
}

int main()
{
    //Add nodes to the list
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    //Search for node 2 in the list
    searchNode(8);
    //Search for node  in the list
    searchNode(7);

    return 0;
}
