#include<stdio.h>
#include<conio.h>
int main()
{
int a[]={2,4,7,9,11,13,25};
int mid,low,high,search,count=0;
int location;
low=0;
high=6;
printf("Enter the element you want to search\n");
scanf("%d",&search);
while(low<=high)
{
mid=(low+high)/2;
if (a[mid]==search)
{
location=mid;
count++;
break;
}
if(a[mid]<search)
low=mid+1;
else
high=mid-1;
}

if(count==1)
printf(" Element is found at location== %d",location);
else
printf("Not found");
getch();
}
