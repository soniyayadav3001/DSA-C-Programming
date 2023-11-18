#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
char ch;
int front=-1;int rear=-1;
int queue[MAX];
void inqueue();
void dequeue();
void display();
void main()
{
printf("\n1.Insertion");
printf("\n2.Deletion");
printf("\n3.Display");
do
{
int choice;
printf("\nEnter the choice");
scanf("%d",&choice);

switch(choice)
{
case 1: inqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
default:printf("\nInvalid Choice");
}
fflush(stdin);

printf("\nDo you want to continue ");
scanf("%c",&ch);
} while ((ch == 'y') || (ch == 'Y'));
getch();
}
void inqueue()
{
int item;
if(rear==MAX-1)
printf("Queue is Overflow");
else
{
rear++;
printf("\nEnter the element you want to insert ");
scanf("%d",&item);
queue[rear]=item;
if(front==-1)
front=0;
}
}
void dequeue()
{
int item;
if(front==-1 && rear==-1)
printf("Queue is empty");
else
{
item=queue[front];
printf("The deleted item is %d ",item);
if(front==rear)
front=rear=-1;
else
{
if(front==MAX-1)
front=-1;
else
{
front++;
}
}
}
}
void display()
{
int i;
if(front==-1 && rear==-1)
printf("Queue is empty");
else
{
printf("The elements are \n");
for(i=0;i<=rear;i++)
printf("\n%d",queue[i]);
}
}
