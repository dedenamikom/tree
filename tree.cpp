#include <iostream>
using namespace std;

struct node
{
	char data ;
	node *left;
	node *right;
};

node *root=NULL;

void addNode(node **root,char isi) {
	if ((*root)==NULL){
		node *baru;
		baru = new node;
		baru->data = isi;
		baru->left =NULL;
		baru->right=NULL;
		(*root) = baru;
	}
}

void preOrderTraversal (node* root) 
{
	if (root != NULL) {
		cout << root->data << " ";
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}
}

void inOrderTraversal(node* root) 
{
	if (root != NULL) {
		inOrderTraversal(root->left);
		cout << root->data << " ";
		inOrderTraversal(root->right);
	}
}

void postOrderTraversal (node* root)
{
	if (root != NULL){
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		cout << root->data << " ";
	}
}

int main ()
{
	char isinya;
	printf ("\n\n\n Posisi Awal Binary tree ; \n\n\n");
	printf ("--------------- A M I K Z J O M Y K----------------");
	cout<<endl<<endl;
	cout<<"                         A                          "<<endl;
	cout<<"                        / \\                        "<<endl;
	cout<<"                       M   I                        "<<endl;
	cout<<"                      /   / \\                      "<<endl;
	cout<<"                     K   J   Z                      "<<endl;
	cout<<"                    / \\                            "<<endl;
	cout<<"                   O   M                            "<<endl;
	cout<<"                  / \\                              "<<endl;
	cout<<"                 Y   K                              "<<endl;


	//level 0
	addNode (&root, isinya = 'A');
	//level 1
	addNode (&root->left,isinya = 'M');
	addNode (&root->right,isinya = 'I');
	//level 2
	addNode (&root->left->left,isinya = 'K');
	addNode (&root->right->left,isinya = 'J');
	addNode (&root->right->right,isinya = 'Z');
	//level 3
	addNode(&root->left->left->left,isinya= 'O');
	addNode(&root->left->left->right,isinya= 'M');
	//level 4
	addNode(&root->left->left->left->left,isinya= 'Y');
	addNode(&root->left->left->left->right,isinya= 'K');
	printf ("\nPreOrder : ");
	preOrderTraversal(root);
	
	printf("\nInOrder : ");
	inOrderTraversal(root);
	
	printf("\nPostOrder Traversal : ");
	postOrderTraversal(root);
	
	printf("\n---------------------------------------------");
}
