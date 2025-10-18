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
  	end->next=head;
   } 
   else
   {
   	end->next=newnode;
   	end=newnode;
   	end->next=head;
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
	  do
	  {
	  	printf("%d->",temp->data);
	  	temp=temp->next;
	  }
	  while(temp!=head);
  }
  void insertfirst(){
	int info;
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory allocation failed\n");
		return;
	}
	printf("\n Enter data into node");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=head;
	head=newnode;
	end->next=head;
	count++;
	printf("\n Node is added");
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
	  end->next=head;
	  count++;
	  printf("\n node is added");
  }
  void insertanypos(){
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
void deletefirst()
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
void delete_anynode()
{
	int i,pos;
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	printf("\n Enter position to delete");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("Invalid");
		return ;
	}
	struct node *prev,*curr;
	curr=head;
	for(i=0;i<pos;i++)
	{
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	free(curr);
	count--;
	printf("\nNode is deleted");
}
void search()
{
	int key;
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	printf("\n Enter element to search");
	scanf("%d",&key);
	int found=0;
	struct node *curr=head;
	while(curr!=NULL)
	{
		if(curr->data==key)
		{
			printf("Element found");
			return;
			found=1;
		}
		curr=curr->next;
	}
	if(found==0)
	{
		printf("Element not found");
	}
}
void replace()
{
	int key,rep;
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	printf("\n Enter element to be search");
	scanf("%d",&key);
	printf("\n Enter element to replace");
	scanf("%d",&rep);
	struct node*curr=head;
	while(curr!=NULL)
	{
		if(curr->data==key)
		{
			curr->data=rep;
			printf("Element is replaced");
			return;
		}
		curr=curr->next;
	}
	printf("element is not found");
}
  int main()
  {
  	int ch;
  	while(1)
  	{
  		printf("\n******MENU******");
  		printf("\n1.create\n2.display\n3.insertfirst\n4.insertlast\n5.exit ");
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
  			case 11:exit(0);
  			default:
  				printf("\n Invalid choice");
		  }
	  }
	  return 0;
  }
