#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;
//public:
	node(int d, node *l, node *r)
	{
		data = d;
		left = l;
		right = r;
	}
};
class BST
{
	node *root;
public:
	BST()
	{
		root = NULL;
	}
	bool empty()
	{
		if (root == NULL)
		{
			return false;
		}
		return true;
	}
	void insert(int v)
	{
		if (empty() == false)
		{
			root = new node(v, NULL, NULL);
		}
		else
		{
			node *current = root;
			while (true)
			{
				if (current->data > v)
				{
					if (current->left == NULL)
					{
						node *temp = new node(v, NULL, NULL);
						current->left = temp;
						break;
					}
					else
					{
						current = current->left;
					}
				}
				if (current->data < v)
				{
						if (current->right == NULL)
						{
							node *temp = new node(v, NULL, NULL);
							current->right = temp;
							break;
						}
						else
						{
							current = current->right;
						}
				}
			}
		}
	}
	node *search(int value)
	{
		node *current=root;
		if(value<=current->data)
		{
			while(current!=NULL)
			{
				if(value==current->data)
				{
					return current;
				}
				else if(value< current->data)
				{
					current=current->left;
				}
				else
				{
					current=current->right;
				}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
		if(value>current->data)
		{
			while(current!=NULL)
			{
				if(value==current->data)
				{
					return current;
				}
				else if(value> current->data)
				{
					current=current->right;
				}
				else
				{
					current=current->left;
				}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
		return 0;
	}
	node **search_parent(int value)
	{
		node *current=root;
		if(value<=current->data)
		{
			while(current!=NULL)
			{
				if(current->left==NULL)
				{
					break;
				}
				else
				{
				if(value==current->left->data)
				{
					return &current;
				}
				else if(value< current->data)
				{
					current=current->left;
				}
				else
				{
					current=current->right;
				}

			}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
		if(value>current->data)
		{
			while(current!=NULL)
			{
				if(value==current->right->data)
				{
					return &current;
				}
				else if(value> current->data)
				{
					current=current->right;
				}
				else
				{
					current=current->left;
				}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
		return 0;
	}
	node *max_value(node *&A_root)
	{
		while(A_root->right!=NULL)
		{
			A_root=A_root->right;
		}
		return A_root;
	}
	node *max_parent(node *A_root,int m)
	{
		while(A_root!=NULL)
		{
			if(A_root->right->data==m)
			{
				break;
			}
			A_root=A_root->right;
		}
		return A_root;
	}
	void remove(int v)
	{
		node **cur=search_parent(v);
		node *temp=*cur;
		if((*cur)->left->data==v)
		{
		 temp=(*cur)->left;
		}
		else
		{
			temp=(*cur)->right;
		}
		if(temp->left==NULL && temp->right==NULL)
		{
			delete temp;
			(*cur)->left=NULL;
			(*cur)->right=NULL;
		}
		if((temp->left!=NULL && temp->right==NULL))//||(temp->right!=NULL && temp->left==NULL))
		{
			if(temp->left->left==NULL)// || temp->right->right==NULL)
			{
				node *t=temp->left;
				//temp->data=t->data;
				delete temp;
				(*cur)->left=t;
			}
		}
		if(temp->right!=NULL && temp->left==NULL)
		{
			if(temp->right->right==NULL)
			{
				node *t=temp->right;
				//temp->data=t->data;
				delete temp;
				(*cur)->right=t;
			}
		}
		if(temp->left!=NULL || temp->right!=NULL)
		{
			//if((*cur)->left==temp)//->left
			//{
			node *m=temp->left;
			while(m->right!=NULL)
			{
				m=m->right;
		    }
			swap(temp->data,m->data);
			node **cur=search_parent(v);
			node *m_p=temp->left;
			while(m_p!=NULL)
		    { 
			if(m_p->right->data==m->data)
			{
				break;
			}
			m_p=m_p->right;
		    }
			delete temp;
			m_p->right=NULL;
			m_p->left=NULL;
			//(*cur)->left=NULL;
			//(*cur)->right=NULL;
			/*if(m->left!=NULL)
			{
			m_p->right=m->left;
			}
			else
			{
				m_p->right=NULL;
			}
			node *t=temp;
			m->left=t;
			(*cur)->left=m;
			//(*cur)->left->data=m->data;
			delete temp;
			}*/
		//}
		}
	}
	int search_value(int v)
	{
	node *current=root;
		if(v<=current->data)
		{
			while(current!=NULL)
			{
				if(v==current->data)
				{
					return current->data;
				}
				else if(v< current->data)
				{
					current=current->left;
				}
				else
				{
					current=current->right;
				}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
		if(v>current->data)
		{
			while(current!=NULL)
			{
				if(v==current->data)
				{
					return current->data;
				}
				else if(v> current->data)
				{
					current=current->right;
				}
				else
				{
					current=current->left;
				}
			}
		}
		if (current ==NULL)
		{
			cout<<"value not fount";
			return 0;
		}
	}
	int height_of_tree(node *A_root,int m)
	{
		if(A_root==NULL)
		{
			return m;
		}
		else
		{
			m=max_cmp(height_of_tree(A_root->left,0),height_of_tree(A_root->right,0))+1;
			return m;
		}
	}
	int max_cmp(int l,int r)
	{
		if(l>r)
		{
			return l;
		}
		return r;
	}
	int count_node(node *A_root)
	{
		if(A_root==NULL)
		{
			return 1;
		}
		else
		{
			return (count_node(A_root->left)+count_node(A_root->right)); 
		}
	}
	/*int max_node(node *a_root)
	{
		while(a_root->left!=NULL)
		{
			a_root=a_root->left;
		}
		return a_root->data;
	}*/
	int count_leaf(node *A_root)
	{
		if(A_root==NULL)
		{
			return 0;
		}
		else if(A_root->left==NULL && A_root->right==NULL)
		{
			return 1;
		}
		else
		{
			return count_leaf(A_root->left)+count_leaf(A_root->right);
		}
	}
	int Nth_Greater_value(node *A_root,int v)
	{
		if(v>A_root->data)
		{
			if(A_root->right->data>v)
			{
				return A_root->data;
			}
			else
			{
			while(true)
			{
				//if(A_root->left!=NULL && A_root->right!=NULL)
				{
					if(v>A_root->data)
					{
						if(v<A_root->right->data)
						{
							return A_root->data;
						}
						A_root=A_root->right;
					}
				}
		      }
			}
		}
		else
		{
			A_root=A_root->left;
			while(true)
			{
			//if(A_root->left!=NULL && A_root->right!=NULL)
			//{
				if(A_root->left==NULL&&A_root->right==NULL)
				{
					return A_root->data;
				}
			if(A_root->data<v)
			{
				A_root=A_root->right;
			}
			else if(A_root->right->data<v)
			{
				A_root=A_root->right;
			}
			else
			{
				return A_root->data;
			}
			//}
		}
		}
		return -1;
	}
	void print_LNR(node *A_Root)
	{
		if(A_Root==NULL)
		{
			return;
		}
		else
		{
			print_LNR(A_Root->left);
			cout<<A_Root->data<<' ';
			print_LNR(A_Root->right);
		}
	}
	void print_RNL(node *A_Root)
	{
		if(A_Root==NULL)
		{
			return;
		}
		else
		{
			print_RNL(A_Root->right);
			cout<<A_Root->data<<' ';
			print_RNL(A_Root->left);
		}
	}
	void print_NLR(node *A_Root)
	{
		if(A_Root==NULL)
		{
			return;
		}
		else
		{
			cout<<A_Root->data<<' ';
			print_NLR(A_Root->left);
			print_NLR(A_Root->right);
		}
	}
	void real_print_lnr()
	{
		print_LNR(root);
	}
	void real_print_rnl()
	{
		print_RNL(root);
	}
	void real_print_nlr()
	{
		print_NLR(root);
	}
	void real_height_of_tree()
	{
		cout<<height_of_tree(root,0);
	}
	void real_count_node()
	{
		cout<<count_node(root)-1;
	}
	void real_count_leaf()
	{
		cout<<count_leaf(root);
	}
	void real_Nth_Greater_value(int v)
	{
		cout<<Nth_Greater_value(root,v);
	}
};
int main()
{
	BST B;
	B.insert(60);
	B.insert(50);
	B.insert(70);
	B.insert(30);
	B.insert(53);
	B.insert(57);
	B.insert(29);
	B.insert(35);
	B.insert(40);
	B.insert(48);
	//B.insert(42);
	//B.insert(41);
	B.real_print_nlr();
	cout<<endl;
	B.real_height_of_tree();
	cout<<endl;
	B.real_count_node();
	cout<<endl;
	cout<<' '<<B.search(41);
	cout<<endl;
	B.real_count_leaf();
	cout<<endl;
	B.real_Nth_Greater_value(45);
	B.remove(50);
    B.real_print_nlr();
}