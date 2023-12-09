#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *first, *temp, *ttemp, *p, *pp;
//Creation of node.
void create_node(int val){
    first = (struct node *)malloc(sizeof(struct node));
    first->data = val;
    first->next = NULL;
}
//Addition of node
void add_node(int a){
    temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ttemp = (struct node *)malloc(sizeof(struct node));
    ttemp->data = a;
    ttemp->next = NULL;
    temp->next = ttemp;
}
//Insertion at the beginning.
void in_beg(int n){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = first;
    first = temp;
}
//Insertion at the end.
void in_end(int m){
    temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ttemp = (struct node*) malloc(sizeof(struct node));
    temp->next = ttemp;
    ttemp->data = m;
    ttemp->next = NULL;
}
//Insert before any data.
void in_before(int x , int y){
    temp = first;
    while(temp->data!=x){
        ttemp = temp;
        temp = temp->next;
    }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = y;
    p->next = temp;
    ttemp->next = p;
}
//Insertion after the given data
void in_after(int x , int y){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
    }
    ttemp = temp->next;
    pp = (struct node *)malloc(sizeof(struct node));
    pp->data = y;
    pp->next = ttemp;
    temp->next = pp;
}
//Deletion at beginning.
void del_beg(){
    temp = first;
    first = first->next;
    temp->next = NULL;
    free(temp);
}
//Deletion at end.
void del_end(){
    temp = first;
    while(temp->next!=NULL){
        ttemp=temp;
        temp = temp->next;
    }
    ttemp->next = NULL;
    free(temp);
}
//Deletion before a given data.
void del_before(int x ){
    temp = first;
    while(temp->next->data!=x){
        ttemp = temp;
        temp = temp->next;
        }
        p = temp->next;
        ttemp->next= p;
        temp->next = NULL;
        free(temp);
}
//Delete node after a given data.
void del_after(int x){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
        }   
        ttemp=temp->next;             
        p=ttemp->next;
        temp->next = p;
        ttemp->next = NULL;
        free(ttemp);
}
//Fuction for sum of nodes.
void sum(){
    temp = first;
    int s = 0;
    while(temp!=NULL){
        s = s + temp->data;
        temp = temp->next;
    }
    printf("Sum is %d", s);
}
//Fuction to swap 1st and 2nd node.
void swap1(){
    temp = first;
    ttemp = temp->next;
    p = ttemp->next;
    ttemp->next = temp;
    temp->next = p;
    first = ttemp;
}
//function to swap last and second last node.
void swap2(){
    temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ttemp = first;
    while(ttemp->next->next!=NULL){
        ttemp = ttemp->next;
    }
    p = first;
    while(p->next->next->next!=NULL){
        p = p->next;
    }
    p->next=temp;
    temp->next = ttemp;
    ttemp->next = NULL;
}
//Swap first and last node.
void swap3(){
    ttemp = first;
    temp = first;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    p = ttemp->next;
    pp = first;
    while(pp->next->next!=NULL){
        pp = pp->next;
    }
    first = temp;
    temp->next = p;

    pp->next = ttemp;
    ttemp->next = NULL;
}

//Display function.
void display(){
    temp = first;
    while (temp!=NULL)
    {
        printf("%d", temp->data);
        temp=temp->next;
        printf("\n");
    }
}
int main(){
    create_node(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    in_beg(5);
    in_end(90);
    // in_before(20,15);
    // in_after(30, 35);
    // del_before(30);
    // del_beg();
    // del_end();
    // del_after(40);
    // sum();
    // swap1();
    // swap2();
    // swap3();
    display();
    return 0;
}
