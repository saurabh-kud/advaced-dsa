#include<stdio.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void delete_at_beg();
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("list before deletion function\n");
  traverse();
  printf("\n list after deletion function\n");
  delete_at_beg();
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
void delete_at_beg() {

  struct node *temp;
  temp=start;

  if (start == NULL) {
    printf("list is empty\n");
    return;
  }
  else{

    temp=start->next;
    free(start);
    start=temp;
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
