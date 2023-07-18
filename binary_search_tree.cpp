#include<stdio.h>
#include<iostream>
using namespace std;
class node{
public:
node * right;
node * left;
int data;
    node(int num)
    {
        data=num;
        right=left=NULL;
    }
};
class bstree{
    public:
    node * root=NULL;


    void display(node * curr)
{
    if(curr==NULL)
        return;
    else{
        display(curr->left);
        printf("%d ",curr->data);
        display(curr->right);
    }}

    void createbstree(node * newnode)
    {
    node * tptr,* safe;
        if(root==NULL)
            root=newnode;
        else
        {
            for(tptr=root;tptr;)
            {
                safe=tptr;
                if(tptr->data>newnode->data)
                    tptr=tptr->left;
                else
                    tptr=tptr->right;
            }
            if(safe->data>newnode->data)
                safe->left=newnode;
            else
                safe->right=newnode;
        }
    }

};
int main()
{
    bstree t;
    int num;
while(cin>>num)
    {
    node * newnode=new node(num);
    t.createbstree(newnode);
    }
    t.display(t.root);
}
