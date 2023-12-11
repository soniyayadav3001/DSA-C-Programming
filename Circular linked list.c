#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *first, *temp, *ttemp , *p;
void create_node(int val){
    first = (struct node *)malloc(sizeof(struct node));
    first->data = val;
    first->next = first;
}
void add_node(int a){
    temp = first;
    while(temp->next!=first){
        temp = temp->next;
    }
    ttemp=(struct node*)malloc(sizeof(struct node));
    ttemp->data = a;
    ttemp->next = first;
    temp->next=ttemp;
}

void display(){
    temp = first;
    do{
        printf("%d\n", temp->data);
        temp = temp->next;
    }   while (temp != first);
}
int main(){
    create_node(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    display();
    return 0;
}
