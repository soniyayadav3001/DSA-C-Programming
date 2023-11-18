#include<stdio.h>
#include<conio.h>
int main()
{
int a[]={3,5,1,7,9,52};
int s=(sizeof(a)/sizeof(int));
int i,count=0,search;
printf("Enter the element want to search\n");
scanf("%d",&search);
for(i=0;i<=s;i++)
{
if(a[i]==search)
{
count++;
break;
}
}
if(count==1)
printf(" Element is found in location == %d ",i);
else
printf("Element is not found");
getch();
}
