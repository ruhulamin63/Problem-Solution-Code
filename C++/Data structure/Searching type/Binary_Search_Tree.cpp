//########### Binary_Search_Tree(BST)##############

#include<iostream>
using namespace std;

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
} *treeptr;

treeptr root, ptr;

void makeRoot(int item)
{
    root=new TreeNode;
    root->data=item;
    root->left=NULL;
    root->right=NULL;
}
void makeNode(int item)
{
    ptr=root;
    treeptr np= new TreeNode;
    np->data=item;
    np->left=NULL;
    np->right=NULL;

    while(ptr != NULL)
    {
        if(ptr->data == item)
        {
            cout<<"Enter data again or 0 for exit: ";
            	cin>>item;

            if(item == 0)
            {
               break;
            }
            else
            {
                np->data=item;
                ptr=root;
            }
        }
        else if(ptr->data > item)
        {
            if(ptr->left == NULL)
            {
                ptr->left=np;
                break;
            }
            else
            {
                ptr=ptr->left;
            }
        }
        else
        {
            if(ptr->right == NULL)
            {
                ptr->right=np;
                break;
            }
            else
            {
                ptr=ptr->right;
            }
        }
    }
}

void in_order(treeptr p)
{
    if(p != NULL)
    {
        in_order(p->left);
        cout<<p->data<<" ";
        in_order(p->right);
    }
}

void pre_order(treeptr p)
{
    if(p != NULL)
    {
        cout<<p->data<<" ";
        pre_order(p->left);
        pre_order(p->right);
    }
}

void post_order(treeptr p)
{
    if(p != NULL)
    {
        post_order(p->left);
        post_order(p->right);
        cout<<p->data<<" ";
    }
}

int main()
{
    int x;
    root=NULL;
    
    while(1)
    {
        cout<<"Enter data or 0 for exit: ";
            cin>>x;

        if(x==0)
        {
            break;
        }
        else
        {
            if(root == NULL)
            {
                makeRoot(x);
            }
            else
            {
                makeNode(x);
            }
        }

    }

    cout<<"In_order: ";
        in_order(root);
            cout<<endl;

    cout<<"Pre_order: ";
        pre_order(root);
            cout<<endl;

    cout<<"Post_order: ";
        post_order(root);
            cout<<endl;

    return 0;
}
