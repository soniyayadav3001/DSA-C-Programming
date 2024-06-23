#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
char ch;
int choice;
int stack[MAX];
void push();
void pop();
void traverse();
void main()
{
do
{ 
printf("\n1.Insertion");
printf("\n2.Deletion");
printf("\n3.Display");
printf("\nEnter Your Choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: traverse();
break;
default:printf("Invalid Choice\n");
}
fflush(stdin);
printf("\n Do you want to continue?\n");
scanf("%c",&ch);
}
while((ch=='y')||(ch=='Y'));
getch();
}
void push()
{
int item;
printf("Enter the number you want to Insert\n");
scanf("%d",&item);
if(top==MAX-1)
printf("Stack is Full\n");
else
{
top++;
stack[top]=item;
}
}
void pop()
{
int item;
if(top==-1)
printf("Stack is empty\n");

else
{
item=stack[top];
printf("\nThe deleted item is %d",item);
top--;
}
}
void traverse()
{
int i;
if(top==-1)
printf("Stack is empty\n");
else
{
printf("\nThe elements are ");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
}
