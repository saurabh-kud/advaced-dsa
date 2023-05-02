//program on tree traversal
#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

/*// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}*/

// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

struct node* search(struct node *root,int data){
   struct node *current = root;
   printf("Visiting elements: ");
   if(root->item==data)
    return root;
   while(current->item != data){
        if(current != NULL) {
         printf("%d ",current->item);

         //go to left tree
         if(current->item > data){
            current = current->left;
         }  //else go to right tree
         else {
            current = current->right;
         }

         //not found
         if(current == NULL){
            return NULL;
         }
      }
   }

   return current;
}



int main()
{
  int key;
  struct node* res;
  struct node* root = createNode(8);
  insertLeft(root, 5);
  insertRight(root, 10);
  insertLeft(root->left, 3);
  insertRight(root->left,6);
  insertLeft(root->right,9);
  insertRight(root->right,11);
  printf("enter node's value that you want to search\n");
  scanf("%d",&key);
  res=search(root,key);
  if(res==NULL)
    printf("node found");
  else
    printf("not found");
}



 /* printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);*/

