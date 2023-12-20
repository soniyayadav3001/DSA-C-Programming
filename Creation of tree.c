#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *left, *right;
};
struct tree *root, *temp, *ttemp, *p;
void init(){
    root = temp = ttemp = NULL;
}
void create_root(int val){
    root = (struct tree *)malloc(sizeof(struct tree));
    root->data = val;
    root->left = NULL;
    root->right = NULL;
}
void add_node(int val){
    temp = root;
    while(temp!=NULL){
        ttemp = temp;
    if(temp->data>val){
        temp = temp->left;
    }
    else{
        temp = temp->right;
    }
    }
    p = (struct tree *)malloc(sizeof(struct tree));
    p->left = p->right = NULL;
    p->data = val;
    if(ttemp->data>val){
        ttemp->left = p;
    }
    else{
        ttemp->right = p;
    }
}
void in_order(struct tree *p){
    if(p!=NULL){
        in_order(p->left);
        printf("%d\n", p->data);
        in_order(p->right);
    }
}
int main(){
    init();
    create_root(50);
    add_node(45);
    add_node(80);
    add_node(75);
    add_node(25);
    add_node(10);
    in_order(root);
    return 0;
}
