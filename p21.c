#include<stdio.h>
#include<malloc.h>


struct node{
    int data;
    struct node* left;
    struct node* right;

};


int main(){
    // constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p ->left = NULL;
    p ->right = NULL;

    // contructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // constructing the Third node
    struct node *p2;
    p2 = (struct node*) malloc(sizeof(struct node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    // Linking the root node with left and right childern
    p->left = p1;
    p->right =p2;
    return 0;
}