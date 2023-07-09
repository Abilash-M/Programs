#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
public:
node * right;
int data;
node* left;
    node(int num)
    {
        data=num;
        right=left=NULL;
    }
};
void LPR(node * curr)
{
    if(curr==NULL)
        return;
    else
    {
        LPR(curr->left);
        printf("%d ",curr->data);
        LPR(curr->right);
    }
}
void PLR(node * curr)
{
    if(curr==NULL)
        return;
    else{
        printf("%d ",curr->data);
        PLR(curr->left);
        PLR(curr->right);
    }
}
void LRP(node * curr)
{
    if(curr==NULL)
        return;
    else{
        LRP(curr->left);
        LRP(curr->right);
        printf("%d ",curr->data);
    }
}

int main()
{
    node* root = new node(10);
    root->left= new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->left->left=new node(50);
    LPR(root);
    printf("\n");
    PLR(root);
    printf("\n");
    LRP(root);
}
