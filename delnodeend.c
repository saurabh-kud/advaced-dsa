#include<stdio.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void delete_at_end();
void createlist(int);
void traverse();

int main () {

  createlist(10);
//createlist(20);
  //createlist(30);
  printf("list before deletion function\n");
  traverse();
  printf("\n list after deletion function\n");
  delete_at_end();
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
  else if(start->next==NULL)
  {
      free(start);
        start=NULL;
  }
        else{
        while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void delete_at_end() {

  struct node *t1,*t2;
  t1=start;

  if (start == NULL) {
    printf("list is empty\n");
    return;
  }
  else{

    while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;

        }
        free(t1);
        t2->next=NULL;
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
