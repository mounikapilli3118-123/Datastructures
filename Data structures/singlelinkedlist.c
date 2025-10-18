#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;	
};
struct node *head=NULL,*end=NULL;
void create_nodes();
void display();
void insertfirst();
void insertlast();
void insert();
void deletefirst();
void deletelast();
void deleteatanynode();
int count=0;
void create_nodes()
{
  int info;
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
    printf("\n Memory is full");
	return;	
  }
  printf("\n Enter data into a node");
  scanf("%d",&info);
  newnode->data=info;
  newnode->next=NULL;
  if(head==NULL)
  {
  	head=end=newnode;
   } 
   else
   {
   	end->next=newnode;
   	end=newnode;
   }
   count++;
   printf("\n node created or added");
  }
  void display()
  {
  	struct node*temp;
  	if(head==NULL)
  	{
  		printf("\n list is empty..");
  		return;
	  }
	  temp=head;
	  printf("\n list elements are..");
	  while(temp!=NULL)
	  {
	  	printf("%d->",temp->data);
	  	temp=temp->next;
	  }
  }
  void insertlast(){
  	int info;
  	struct node* newnode=(struct node*)malloc(sizeof(struct node));
  	if(newnode==NULL){
  		printf("memory allocation failed!\n");
  		return;
	  }
	  printf("\n Enter data into node");
	  scanf("%d",&info);
	  newnode->data=info;
	  newnode->next=NULL;
	  end->next=newnode;
	  end=newnode;
	  count++;
	  printf("\n node is added");
  }
  void insert(){
  		int info,pos,i;
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory allocation fsiled\n");
		return;
	}
	printf("\n Enter data into node");
	scanf("%d",&info);
	printf("\n Enter position value");
	scanf("%d",&pos);
	newnode->data=info;
	newnode->next=NULL;
	if(pos<1||pos>count+1)
	{
		printf("invalid position\n");
		free(newnode);
		return;
	}
	struct node*temp=head;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	count++;
	printf("\n Node is added");
}
voiddeletefirst()
{
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	struct node*temp=head;
	head=head->next;
	free(temp);
	count--;
	printf("Node is deleted");
}
void deletelast()
{
	if(head==NULL)
     {
     	printf("Empty");
     	return;
	 }
	struct node*prev,*curr;
	curr=head;
	while(curr->next!=NULL)
	{
	  prev=curr;
	  curr=curr->next;	
	}
	prev->next=NULL;
	free(curr);
	end=prev;
	count--;
	printf("Node is deleted");
}
  int main()
  {
  	int ch;
  	while(1)
  	{
  		printf("\n******MENU******");
  		printf("\n1.create\n2.display\n3 insertlast\n.exit");
  		printf("\n Enter choice:");
  		scanf("%d",&ch);
  		switch(ch)
  		{
  			case 1:create_nodes();
  			       break;
  			case 2:display();
  			break;
  			case 3:insertfirst();
  			break;
  			case 4:insertlast();
  			break;
  			case 5:insert();
  			break;
  			case 6:deletefirst();
  			break;
  			case 7:deletelast();
  			break;
  			case 8:deleteatanynode();
  			break;
  			case 9:exit(0);
  			default:
  				printf("\n Invalid choice");
		  }
	  }
	  return 0;
  }
