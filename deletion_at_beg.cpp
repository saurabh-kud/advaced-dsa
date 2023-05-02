#include<iostream>
using namespace std;
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void deletion_at_beg();
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
 cout<<"list before deletion function"<<endl;
  traverse();
  cout<<endl<<"list after deletion function"<<endl;
  deletion_at_beg();
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
void deletion_at_beg() {
  node *t1;
  t1=start;
  if(start==NULL)
  {
      cout<<"list is empty";
      return;
  }
  else if(start->next==NULL)
  {
      free(t1);
      start=NULL;
  }
  else{
    start=start->next;
    free(t1);
  }
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    cout<<"Linked list is empty"<<endl;
    return;
  }

  //while(t!=NULL)
  while (t->next != NULL) {
    cout<<t->data<<"->";
    t = t->next;
  }
  cout<<t->data<<"->NULL";

}
