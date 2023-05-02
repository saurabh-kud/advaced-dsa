#include<stdio.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void insert_at_end(int);
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("list before insert function\n");
  traverse();
  printf("\n list after insert function\n");
  insert_at_end(40);
  traverse();
  return 0;
}
void createlist(int x)
{
    struct node *ptr,*temp;
    temp=start;

  ptr= (struct node*)malloc(sizeof(struct node));
  ptr->data = x;
  ptr->next=NULL;
  if (start == NULL) {
    start = ptr;
    start->next = NULL;
}
  else
  {
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void insert_at_end(int x) {

  struct node *t,*temp;
  temp=start;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  t->next=NULL;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }
  else{
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=t;
  }


}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  while (t->next != NULL) {
    printf("%d->", t->data);
    t = t->next;
  }
  printf("%d->NULL", t->data); // Print last node

}
