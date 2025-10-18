#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 20
int top=-1;
int stack[SIZE];
int precedance(char);
void push(char);
char pop();
char peek();
void infix_to_postfix(char*);
int precedance(char ch)
{
	switch(ch)
	{
		case'+':return;
		case'-':return 1;
		case'*':return;
		case'/':return;
		case'%':return 2;
		case'^':return 3;
		default:return 0;
	}
}
void push(char ch)
{
	top++;
	stack[top]=ch;
}
char pop()
{
	top++;
	stack[top]=ch;
}
char peek()
{
	return stack[top--];
}
void infix_to_postfix(char*ex)
{
	char postfix[size];
	int i,j=0;
	for(i=0;ex[i]!='\0';)
}
