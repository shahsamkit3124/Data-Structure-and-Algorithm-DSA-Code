#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node* start=NULL;
void enqueue ()
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter val : ");
    scanf("%d",&val);
    newnode->data = val;
    newnode->next = NULL;
    if(start == NULL){
        start = newnode;
    }
    else{
        struct node* temp = start;
        while(temp->next!=NULL) temp = temp->next;
        temp->next = newnode;
    }
}

void dequeue ()
{
    if(start == NULL) printf("queue empty\n");
    else start = start->next;
}

void display ()
{
    struct node* temp = start;
    while(temp != NULL){
        printf("%d   ",temp->data);
        temp = temp->next;
    }printf("\n");
}
int main ()
{
  printf("Enter your choice!\n1. enqueue \n2. dequeue\n3. display\n4. exit\n");
  int choice;
  scanf ("%d", &choice);
  while (choice != 4)
    {
      switch (choice)
	{
	case 1:
	  enqueue ();
	  break;
	case 2:
	  dequeue ();
	  break;
	case 3:
	  display ();
	  break;
	case 4:
	  break;
	}
      printf
	("Enter your choice!\n1. enqueue \n2. dequeue\n3. display\n4. exit\n");
      scanf ("%d", &choice);
    }
  return 0;
}
