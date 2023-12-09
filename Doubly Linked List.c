#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *first, *temp, *ttemp, *p;
//Creation of node.
void create(int val){
    first= (struct node *)malloc(sizeof(struct node));
    first->data = val;
    first->next = NULL;
    first->prev = NULL;
}
//Addition of node.
void add_node(int a){
    temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
        }
        ttemp = (struct node *)malloc(sizeof(struct node));
        ttemp->data = a;
        ttemp->next = NULL;
        ttemp->prev = temp;
        temp->next = ttemp;
}
//Insertion before a given data.
void in_before(int x , int y){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
        ttemp = temp->prev;
    }
    p=(struct node *)malloc(sizeof(struct node));
    p->data = y;
    p->next = temp;
    p->prev = ttemp;
    ttemp->next = p;
    temp->prev = p;
}
//Insertion after a given data.
void in_after(int x,int y){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
        ttemp = temp->next;
    }
    p=(struct node *)malloc(sizeof(struct node));
    p->data = y;
    p->next = ttemp;
    p->prev = temp;
    temp->next = p;
    ttemp->prev = p;
}
//Deletion before a given data.
void del_before(int x ){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
        ttemp = temp->prev;
        p = ttemp->prev;
    }
    p->next = temp;
    temp->prev = p;
    ttemp->next = ttemp->prev = NULL;
    free(ttemp);
}
//Deletion after a given data. 
void del_after(int x){
    temp = first;
    while(temp->data!=x){
        temp = temp->next;
        ttemp = temp->next;
        p = ttemp->next;
    }
    temp->next = p;
    p->prev = temp;
    ttemp->prev = ttemp->next = NULL;
    free(ttemp);
}
// Insertion at the beginning.
void in_beg(int x){
    temp=(struct node *)malloc(sizeof(struct node));
    temp->next = first;
    temp->data = x;
    temp->prev = NULL;
    first = temp;
}
//Insertion at the end.
void in_end(int x){
    temp = first;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    p=(struct node *)malloc(sizeof(struct node));
    temp->next = p;
    p->data = x;
    p->next = NULL;
    p->prev = temp;
}
//Deletion from beginning.
void del_beg(){
    temp = first;
    first = first->next;
    first->prev = NULL;
    free(temp);
}
//Deletion From end.
void del_end(){
    temp = first;
    while(temp->next!=NULL){
        ttemp = temp;
        temp = temp->next;
    }
    ttemp->next = NULL;
    free(temp);
}
//Fuction to display the sum of nodes.
void sum(){
    temp = first;
    int s = 0;
    while(temp!=NULL){
        s = s + temp->data;
        temp = temp->next;
    }
    printf("Sum is %d", s);
}
//Display function.
void display(){
    temp = first;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp = temp->next;
        printf("\n");
    }
}
int main(){
    create(12);
    add_node(24);
    add_node(36);
    add_node(48);
    add_node(60);
    add_node(72);
    in_before(24, 22);
    in_after(36, 38);
    // del_before(60);
    // del_after(48);
    in_beg(6);
    in_end(90);
    // del_beg();
    del_end();
    display();
    sum();
    return 0;
}
