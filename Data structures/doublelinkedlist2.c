#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node*prev
	int data;
	struct node*next;
};
struct node*head=NULL,*end=NULL;
int count=0;
struct node *create_node()
{
	int info;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{	
	printf("cannot allocate memory\n");
	return NULL;
}
printf("\n Enter data into a node:");
scanf("%d",&info);
newnode->data=info;
newnode->prev=NULL;
newnode->next=NULL;
return newnode;
}
void create_list(){
	struct node *newnode=create_node();
	if(head==NULL){
		head=end=newnode;
	}else{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
	}
	count++;
	printf("....node is created/added....");
}
	void display()
	{
		struct node *temp;
		if(head==NULL){
			printf("list is empty\n");
			return;
		}
	
	temp=head;
	printf("\n list elements(forward)");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}

}
void reverse(){
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=end;
	printf("\nlist elements(backward)");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	
}
void insert_first()
{
	struct node *newnode=create_node();
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	count++;
	printf("node is created\n");
}
	void insert_end()
	{
		struct node *newnode=create_node();
		if(head==NULL){
			printf("list is empty");
		}
		else{
			end->next=newnode;
			newnode->prev=end;
			end=newnode;
		}
		count++;
		printf("node is created\n");
	}
	void insert_pos()
	{
		struct node *curr,*temp;
		int pos,i;
		struct node *newnode=create_node();
		if(head==NULL)
		{
			printf("list is empty");
		}
		printf("Enter the position:");
		scanf("%d",&pos);
		if(pos<0||pos>count){
			printf("Invalid position\n");
			return;
		}
		curr=head;
		for(i=1;i<pos;i++)
		{
			temp=curr;
			curr=curr->next;
		}
		newnode->next=curr;
		newnode->prev=temp;
		temp->next=newnode;
		curr->prev=newnode;
		count++;
		printf("node is created\n");
	}
	void delete_first()
	{
		struct node *temp;
		int pos,i;
		temp=head;
		if(head==NULL)
		{
			printf("list is empty");
		}
		head=head->next;
		if(head==NULL){
			end=NULL;	
		}
		else{
			head->prev=NULL;
		}
		free(temp);
		count--;
		printf("node is deleted");
	}
	void delete_end(){
		struct node *temp;
		int pos,i;
		temp=end;
		end=end->prev;
		if(end==NULL)
		{
			printf("list is empty");
		}
		else{
			end->next=NULL;
		}
		free(temp);
		count--;
		printf("node is deleted");
	}
	void delete_pos()
	{
		struct node *temp,*curr;
		int pos,i;
		curr=head;
		printf("Enter position:");
		scanf("%d",&pos);
		if(head==NULL)
		{
			printf("list is empty");
		}
		if(pos<0||pos>count){
			printf("Invalid position");
			return;
		}
		for(i=1;i<pos;i++)
		{
			temp=curr;
			curr=curr->next;
		}
		temp->next=curr->next;
		curr->next->prev=temp;
		free(curr);
		count--;
		printf("node is deleted");
	}
	int main()
	{
		int ch;
		while(1)
		{
			printf("\nchoose the number");
			printf("\n1.create \n2.display \n3.display reverse \n4.insert first \n5.insert last \n6.insert any position");
			printf(" \n7.delete at beginning \n8.delete at end \n9.delete any position \n10.search \n11.exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
			  case 1:
			          create_list();
					  break;
			  case 2:
			          display();
					  break;
			  case 3:
			         reverse();
					 break;
			  case 4:
			         insert_first();
					 break;
			  case 5:
			         insert_end();
					 break;
			  case 6:
			         insert_pos();
					 break;
			  case 7:
			         delete_first();
					 break;
			  case 8:
			         delete_end();
					 break;
			  case 9:
			         delete_pos();
					 break;
			case 10:exit(0);
                     break;
			default:
				   printf("invalid choice\n");	
		}
    }
    return 0;
}

	
	
		
		
		
	


	

