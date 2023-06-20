#include<stdio.h>
#include<malloc.h>


struct node{
    int data;
    struct node* left;
    struct node* right;

};

// Code of root p1 and p2 is repeatation so we write a general code so that need to write repetadely

struct node* createNode(int data){
    struct node *n; // Creating a node pointer
    n = (struct node*) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right childer to NULL 
    n->right = NULL; // FInally return the created node
    return n;
}

int main(){

    /*

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

    */

    // Contructing the root node - Using Function (Recommended)
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // LInking the root node with left and right childern
    p->left = p1;
    p->right = p2;

    return 0;
}