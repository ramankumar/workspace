#include<iostream>
using namespace std; // @suppress("Symbol is not resolved")
#include<stdlib.h>
typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

node * insert(node * root, int value);
node * insert(node * root, int value) {

    if(root== NULL)
    {
        root = new node();
        root->data = value;
        root->left = NULL;
        root->right = NULL;
    }
    else {
        node *temp=root;
        while(temp) {
            if(temp->data >= value){
                if(temp->left)
                    temp = temp->left;
                else {
                    temp->left = new node();
                    temp->left->data = value;
                    temp->left->left = NULL;
                    temp->left->right = NULL;
                    break;
                }

            }
            else {
                if(temp->right)
                    temp = temp->right;
                else {
                    temp->right = new node();
                    temp->right->data = value;
                    temp->right->left = NULL;
                    temp->right->right = NULL;
                    break;
                }

            }
        }
    }

   return root;
}
void print(node * root)
{
	if(root == NULL)
		return;
	print(root->left);
	cout <<root->data<<" ";
	print(root->right);
}
int main(int argc, char *argv[])
{
	int count;
	cout <<"enter number of nodes\n";
	cin >> count;
	node *root= NULL;
	int val;
	while(count)
	{

		cin >> val;
		count--;

		root = insert(root, val);
	}
	node *temp2 =root;
	print(temp2);
	cout<< endl;
	cout <<"insert value \n";
	cin>>val;
	insert(root, val);
	temp2 =root;
	cout <<endl;
	print(temp2);
}
