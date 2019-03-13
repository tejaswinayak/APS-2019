#operations on a binary search tree such as inserting and deleting a node, inorder traversal of a tree

#include <stdio.h>
#include <stdlib.h>

typedef struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
}BST;

BST *insert_bst(BST *root)
{
    BST *newnode;
    newnode=(BST *)malloc(sizeof(BST));
    if(newnode==NULL)
    {
        printf("MEMORY failed \n");
        return root;
    }
    printf("enter tree data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        return newnode;
    }
    BST *prev=NULL,*curr=root;
    while(curr!=NULL)
    {
        prev=curr;
        if(curr->data > newnode->data)
        {
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }
    if(prev->data > newnode->data)
    {
        prev->left=newnode;
    }
    else
    {
        prev->right=newnode;
    }
    return root;
}

void inorder(BST *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
    }
}

BST *delete_bst(BST *root)
{

    if(root==NULL)
    {
        printf("empty tree\n");
        return root;
    }
    int data;
    printf("Enter delete item\n");
    scanf("%d",&data);
    printf("original tree\n");
    BST *parent,*curr,*succ,*p;
    curr=root;
    parent=NULL;
    while(curr!=NULL && curr->data!=data)
    {
        parent=curr;
        if(curr->data > data)
        {
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }
    if(curr == NULL)
    {
        printf("ITEM not found \n");
        return root;
    }
    if(curr->left==NULL)
    {
        p=curr->right;
    }
    else if(curr->right==NULL)
    {
        p=curr->left;
    }
    else
    {
        succ=curr->right;
        while(succ->left!=NULL)
        {
            succ=succ->left;
        }
        succ->left=curr->left;
        p=curr->right;
    }inorder(root);
    if(parent == NULL)
    {
        free(curr);
        return p;
    }
    if(p==curr->left)
    {
        parent->left=p;
    }
    else
    {
        parent->right=p;
    }
    free(curr);
    return root;
}
int main()
{
    BST *root=NULL;
    int k;
    printf("enter the number of nodes you want to add to a tree:\n");
    scanf("%d",&k);
    while(k--)
    {
        root=insert_bst(root);
    }
    printf("the tree after adding all elements\n");
    inorder(root);
    printf("\n");
    root=delete_bst(root);
    printf("\n");
    printf("tree after deletion \n");
    inorder(root);
    return 0;
}
