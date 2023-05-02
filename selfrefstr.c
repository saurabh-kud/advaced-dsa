//program on self referential structure using single pointer
#include <stdio.h>

struct node {
	int data1;
	int data2;
	struct node* link;
};

int main()
{


	struct node ob1; // Node1

	// Initialization
	ob1.link = NULL;
	ob1.data1 = 10;
	ob1.data2 = 20;


	struct node ob2; // Node2

	// Initialization
	ob2.link = NULL;
	ob2.data1 = 30;
	ob2.data2 = 40;

	// Linking ob1 and ob2
	ob1.link = &ob2;

		struct node ob3; // Node3

	// Initialization
	ob3.link = NULL;
	ob3.data1 = 50;
	ob3.data2 = 60;

	ob2.link=&ob3;
	printf("%d %d",ob1.data1,ob1.data2);
	printf("\n%d %d",ob1.link->data1,ob1.link->data2);
	printf("\n%d %d",ob1.link->link->data1,ob1.link->link->data2);


	return 0;
}
