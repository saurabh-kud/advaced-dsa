#include<iostream>
using namespace std;
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
 cout<<"list before insert function"<<endl;
  traverse();
  cout<<endl<<"list after insert function"<<endl;
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
  node *ptr,*temp;
  temp=start;
  ptr=(node*)malloc(sizeof(node));
  ptr->data=x;
  ptr->next=NULL;
  if(start==NULL)
  {
      start=ptr;
      return;
  }
  else{
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
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
