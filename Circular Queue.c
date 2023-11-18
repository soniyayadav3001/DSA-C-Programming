#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int q[5],f=-1,r=-1;
void qinsert(int x);
void qdelete();
void qdisplay();

int main()
{
int x,ch;
while(1)
{
printf("\n1.Insertion");
printf("\n2.Deletion");
printf("\n3.Display");
printf("\nEnter Choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter the element to insert:");
scanf("%d",&x);

qinsert(x);
break;

case 2:qdelete();
break;

case 3:qdisplay();
break;

case 4:exit(0);

default:printf("invalid choice");
}
}
}

void qinsert(int x)
{
if(((r==4)&&(f==0))||(r==(f-1)))
{
printf("overflow");
}
else
{

r=(r+1)%5;
q[r]=x;
if(f==-1)
{
f=0;
}
}
}

void qdelete()
{
if(f==-1)
{
printf("Underflow");
}
else
{
if(f==r)
{
f=-1;
r=-1;
}
else
f=(f+1)%5;
}

}

void qdisplay()
{
int i;
if(f<=r)
{
for(i=f;i<=r;i++)
printf("%3d",q[i]);
}
else
{
for(i=f;i<=4;i++)
printf("%3d",q[i]);

for(i=0;i<=r;i++)
printf("%3d",q[i]);
}
}
