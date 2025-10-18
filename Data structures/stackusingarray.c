#include<stdio.h>
#include<stdlib.h>
int top=-1;
#define size 5
int stack[size];
void push(int ele)
{
	if(top==size-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Elements are......\n");
		for(i=top;i>=0;i--)
		{
			printf("\t%d\n",stack[i]);
		}
	}
}
int pop()
{
	int x;
	if(top==-1)
	{
		printf("Stack is empty\n");
		return -1;
	}
	else
	{
		x=stack[top];
		top--;
	}
	return x;
}
int peek()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
		return -1;
	}
	else
	{
		return stack[top];
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
