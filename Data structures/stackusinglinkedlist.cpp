#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *next;
}STACK;
STACK *top=NULL;//struct stack *top=NULL;
void push(int);
int pop();
int peek();
void display();
int count=0;
void push(int info)
{
	STACK *newnode=(STACK *)malloc(sizeof(STACK));
	if(newnode==NULL)
	{
		printf("Stack is overflow");
		return;
	}
	newnode->data=info;
	newnode->next=NULL;
	if(top==NULL)
	top=newnode;
	else
	{
		newnode->next=top;
		top=newnode;
	}
	count++;
	printf("%d is pushed to stack\n");
}
int pop()
{
	int ele;
	STACK *temp;
	if(top==NULL)
	{
		printf("Stack is underflow\n");
		return -1;
	}
	else
	{
		temp=top;
		top=top->next;
		ele=temp->data;
	    count--;
	    free(temp);
	    return ele;
	}
}
int peek(){
	if(top==NULL)
	{
		printf("Stack is underflow\n");
		return -1;
	}
	else
	return top->data;
}
void display()
{
	if(top==NULL)
    printf("Stack is empty\n");
    else
    {
    	STACK *temp=top;
    	printf("\n**Stack Elements\n");
    	while(temp!=NULL)
    	{
    		printf("\t%d\n",temp->data);
    		temp=temp->next;
		}
	}
}
int main()
{
	int ch,x;
	do
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element:");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				x=pop();
				if(x!=-1)
				 printf("popped element is %d\n",x);
				 break;
			case 3:
				x=peek();
				if(x!=-1)
				 printf("The top most element is %d\n",x);
				 break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice\n");
		}
	}
	while(1);
}
