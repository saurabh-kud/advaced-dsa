#include<iostream>
using namespace std;
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void deletion_at_end();
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
 cout<<"list before deletion function"<<endl;
  traverse();
  cout<<endl<<"list after deletion function"<<endl;
  deletion_at_end();
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
void deletion_at_end() {
  node *t1,*t2;
  t1=start;
  if(start==NULL)
  {
      cout<<"list is empty";
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
