#include <iostream>
#include<queue>
#include<stack>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include <time.h>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void gotoRowCol(int rpos, int cpos)
{
	int xpos = cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos;
	scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);
}
template <typename T>
struct Node
{
	T Data;
	Node<T>*left;
	Node<T>*Right;
	Node<T>*Parent;
	char Colour;
	Node()
	{
		Data = 0;
		left = NULL;
		Right = NULL;
		Parent = NULL;
		Colour = 'r';
	}
};
template<typename T>
class RBTree
{
private:
	Node<T>*Root;
	void Print(Node<T>*Curr)//It will Print our Tree in Level Order. 
	{
		if (Root == NULL)
		{
			return;
		}
		queue<Node<T>*>q;
		q.push(Curr);
		while (1)
		{
			int nodeCount = q.size();
			if (nodeCount == 0)
			{
				break;
			}
			while (nodeCount > 0)
			{
				Node<T>*X = q.front();
				if (X->Colour == 'b')
				{
					SetConsoleTextAttribute(h, 240);
					cout << X->Data << " ";
				}
				else if (X->Colour == 'r')
				{
					SetConsoleTextAttribute(h, 244);
					cout << X->Data << " ";
				}
				q.pop();
				if (X->left != NULL)
				{
					q.push(X->left);
				}
				if (X->Right != NULL)
				{
					q.push(X->Right);
				}
				nodeCount--;
			}
			cout << endl;
		}
	}
	void RotateLeft(Node<T>*Curr)//it will Rotate our Tree Specifics nodes Left
	{
		Node<T>*Par = Curr->Parent;
		Node<T>*GPar = Par->Parent;
		if (GPar != Root)//It is The condition in which we check that Grand parent has parent.
		{
			GPar->Parent->Right = Par;
			Par->Parent = GPar->Parent;
			GPar->Parent = Par;
			GPar->Right = Par->left;
			if (Par->left != NULL)
			{
				Par->left->Parent = GPar;
			}
			Par->left = GPar;
			Par->Colour = 'b';
			GPar->Colour = 'r';
		}
		else//It is the condition in which our Grand Parent has no parnet
		{
			GPar->Right = Par->left;
			if (Par->left != NULL)
			{
				Par->left->Parent = GPar;
			}
			Par->left = GPar;
			Par->Parent = NULL;
			GPar->Parent = Par;
			Par->Colour = 'b';
			GPar->Colour = 'r';
			Root = Par;
		}
	}
	void RotateRight(Node<T>*Curr)//It will Rotate our Tree spcifics nodes Right
	{
		Node<T>*Par = Curr->Parent;
		Node<T>*GPar = Par->Parent;
		if (GPar != Root)//It is The condition in which we check that Grand parent has parent.
		{
			GPar->Parent->left = Par;
			Par->Parent = GPar->Parent;
			GPar->Parent = Par;
			GPar->left = Par->Right;
			if (Par->Right != NULL)
			{
				Par->Right->Parent = GPar;
			}
			Par->Right = GPar;
			Par->Colour = 'b';
			GPar->Colour = 'r';
		}
		else//It is the condition in which our Grand Parent has no parnet
		{
			GPar->left = Par->Right;
			if (Par->Right != NULL)
			{
				Par->Right->Parent = GPar;
			}
			Par->Right = GPar;
			Par->Parent = NULL;
			GPar->Parent = Par;
			Par->Colour = 'b';
			GPar->Colour = 'r';
			Root = Par;
		}
	}
	void RotateParentLeft(Node<T>*Parent, Node<T>*Curr)//Special Case for Parents Right in left of tree and child left
	{
		Curr->left = Parent;
		Parent->Right = NULL;
		Curr->Parent = Parent->Parent;
		Parent->Parent = Curr;
		Curr->Parent->left = Curr;
		RotateRight(Parent);
	}
	void RotateParentRight(Node<T>*Parent, Node<T>*Curr)//Special Case for Parents Left in Right of tree and child Right
	{
		Curr->Right = Parent;
		Parent->left = NULL;
		Curr->Parent = Parent->Parent;
		Parent->Parent = Curr;
		Curr->Parent->Right = Curr;
		RotateLeft(Parent);
	}
	Node<T>*Searcher(Node<T>*Curr, T V)//IT will search  the node and return it  
	{
		if (V == Curr->Data)
		{
			return Curr;
		}
		if (V > Curr->Data)
		{
			if (Curr->Right != NULL)
			{
				return Searcher(Curr->Right, V);
			}
			return NULL;
		}
		if (V < Curr->Data)
		{
			if (Curr->left != NULL)
			{
				return Searcher(Curr->left, V);
			}
			return NULL;
		}
	}
	void BInsert(Node<T>*Temp, Node<T>*Curr)//IT will INsert Data in Our tree and Balancing our tree by Rotating it
	{
		if (Temp->Data > Curr->Data)//Insert in Right Case 
		{
			if (Curr->Right != NULL)//WE have to move on forward in the right
			{
				this->BInsert(Temp, Curr->Right);//It will move on right
				if (Curr->left != NULL)//Special Cases Checks
				{
					//Uncle is black in special case while moving right
					if (Curr->Colour == 'r'&&Curr->left->Colour == 'r' && (Curr->Parent->left == NULL || Curr->Parent->left->Colour == 'b'))
					{
						this->RotateParentRight(Curr, Curr->left);
					}
					else if (Curr->Colour == 'r'&&Curr->left->Colour == 'r'&&Curr->Parent->left->Colour == 'r')
					{
						//Uncle is red in right special case
						Curr->Colour = 'b';
						Curr->Parent->left->Colour = 'b';
						if (Curr->Parent != Root)
							Curr->Parent->Colour = 'r';
					}
				}
				if (Curr->Right != NULL)//Normal Cases Check
				{
					if (Curr->Colour == 'r'&&Curr->Right->Colour == 'r' && (Curr->Parent->left == NULL || Curr->Parent->left->Colour == 'b'))
					{
						//Uncle Is Black Normal Case
						this->RotateLeft(Curr->Right);
					}
					else if (Curr->Colour == 'r'&&Curr->Right->Colour == 'r' && (Curr->Parent->left->Colour == 'r'))
					{
						//Uncle is red Normal Case
						Curr->Colour = 'b';
						Curr->Parent->left->Colour = 'b';
						if (Curr->Parent != Root)
							Curr->Parent->Colour = 'r';
					}
				}
			}
			else//If Curr right is null so insert there as data is greater then node
			{
				Curr->Right = Temp;
				Temp->Parent = Curr;
				if (Curr != Root)//If we are not Inserting First child on right # frist child on right of root
				{
					if (Temp->Parent->Parent->left != Curr)//Check if insertion is done totally in right of GRand Parent
				{
					if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->left == NULL || Temp->Parent->Parent->left->Colour == 'b'))
					{
						//Unlce Black check
						this->RotateLeft(Temp);
					}
					else if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->left->Colour == 'r'))
					{
						//Uncle Red Check
						Temp->Parent->Colour = 'b'; Temp->Parent->Parent->left->Colour = 'b';
						if (Temp->Parent->Parent != Root)
						{
							Temp->Parent->Parent->Colour = 'r';
						}
					}
				}
				else
				{
					//If INsertion is done in left of Grand Parent while MOving Right #(Special case) 
					if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->Right == NULL || Temp->Parent->Parent->Right->Colour == 'b'))
					{
						//Uncle Black Check 
						this->RotateParentLeft(Curr,Temp);
					}
					else if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->Right->Colour == 'r'))
					{
						//Uncle Red Check
						Temp->Parent->Colour = 'b'; Temp->Parent->Parent->Right->Colour = 'b';
						if (Temp->Parent->Parent != Root)
						{
							Temp->Parent->Parent->Colour = 'r';
						}
					}
				}
				}
			}
		}
		else
		{
			//Insertion in left start
			if (Curr->left != NULL)
			{
				this->BInsert(Temp, Curr->left);
				//Special Case check(Right Child Check).
				if (Curr->Right != NULL)
				{
					//Uncle is Black
					if (Curr->Colour == 'r'&&Curr->Right->Colour == 'r' && (Curr->Parent->Right == NULL || Curr->Parent->Right->Colour == 'b'))
					{
						this->RotateParentLeft(Curr, Curr->Right);
					}
					else if (Curr->Colour == 'r'&&Curr->Right->Colour == 'r'&&Curr->Parent->Right->Colour == 'r')
					{
						//Uncle is red
						Curr->Colour = 'b';
						Curr->Parent->Right->Colour = 'b';
						if (Curr->Parent != Root)
							Curr->Parent->Colour = 'r';
					}
				}
				if (Curr->left != NULL)
				{
					//Left Side Checks(Left Child Check).
					if (Curr->Colour == 'r'&&Curr->left->Colour == 'r' && (Curr->Parent->Right == NULL || Curr->Parent->Right->Colour == 'b'))
					{
						//Uncle Is Black.
						this->RotateRight(Curr->left);
					}
					else if (Curr->Colour == 'r'&&Curr->left->Colour == 'r' && (Curr->Parent->left->Colour == 'r'))
					{
						//Uncle Is REd
						Curr->Colour = 'b';
						Curr->Parent->Right->Colour = 'b';
						if (Curr->Parent != Root)
							Curr->Parent->Colour = 'r';
					}
				}
			}
			else
			{
				//Reach Last Insertion
				Curr->left = Temp;
				Temp->Parent = Curr;
				if (Curr != Root)
				{
					//Curr Is not root mean we are deep in the tree.
					//Normal Case
					if (Temp->Parent->Parent->Right != Curr)
					{
						//Uncle Black
						if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->Right == NULL || Temp->Parent->Parent->Right->Colour == 'b'))
						{
							this->RotateRight(Temp);
						}
						else if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->Right->Colour == 'r'))
						{
							//Uncle Red 
							Temp->Parent->Colour = 'b'; Temp->Parent->Parent->Right->Colour = 'b';
							if (Temp->Parent->Parent != Root)
							{
								Temp->Parent->Parent->Colour = 'r';
							}
						}
					}
					else
					{
						//Special Cases
						if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->left == NULL || Temp->Parent->Parent->left->Colour == 'b'))
						{
							//UNcle Black
							this->RotateParentRight(Curr, Temp);
						}
						else if (Temp->Parent->Colour == 'r' && (Temp->Parent->Parent->left->Colour == 'r'))
						{
							//Uncle RED
							Temp->Parent->Colour = 'b'; Temp->Parent->Parent->left->Colour = 'b';
							if (Temp->Parent->Parent != Root)
							{
								Temp->Parent->Parent->Colour = 'r';
							}
						}
					}
				}
			}

		}
	}
	void LNR(Node<T>*Current)//InOrder Traversal
	{
		if (Current->Left == NULL)
		{
			if (Current->Colour == 'b')
			{
				SetConsoleTextAttribute(h, 240);
			}
			if (Current->Colour == 'r')
			{
				SetConsoleTextAttribute(h, 244);
			}
			cout << Current->Data << " ";
		}
		else
		{
			this->LNR(Current->Left);
			if (Current->Colour == 'b')
			{
				SetConsoleTextAttribute(h, 240);
			}
			if (Current->Colour == 'r')
			{
				SetConsoleTextAttribute(h, 244);
			}
			cout << Current->Data << " ";
			if (Current->Rgiht != NULL)
				this->LNR(Current->Rgiht);
		}
	}
	void LRN(Node<T>*Current)//Preorder Traversal
	{
		if (Current->Left == NULL)
		{
			if (Current->Rgiht != NULL)
				this->LRN(Current->Rgiht);
			if (Current->Colour == 'b')
			{
				SetConsoleTextAttribute(h, 240);
			}
			else if (Current->Colour == 'r')
			{
				SetConsoleTextAttribute(h, 244);
			}
			cout << Current->Data << " ";
		}
		else
		{
			this->LNR(Current->Left);
			if (Current->Rgiht != NULL)
				this->LNR(Current->Rgiht);
			if (Current->Colour == 'b')
			{
				SetConsoleTextAttribute(h, 240);
			}
			else if (Current->Colour == 'r')
			{
				SetConsoleTextAttribute(h, 244);
			}
			cout << Current->Data << " ";
		}
	}
	void NLR(Node<T>*Current)//PostOrder Traversal
	{
		if (Current->Colour == 'b')
		{
			SetConsoleTextAttribute(h, 240);
		}
		else if (Current->Colour == 'r')
		{
			SetConsoleTextAttribute(h, 244);
		}
		cout << Current->Data << " ";
		if (Current->Left != NULL)
			this->NLR(Current->Left);
		if (Current->Rgiht != NULL)
			this->NLR(Current->Rgiht);
	}

public:
	RBTree()
	{
		Root = NULL;
	}
	Node<T>*Search(T V)//Search Function
	{
		Node<T>*Curr = Root;
		return Searcher(Curr, V);
	}
	void LevelOrderPrint()//It Will Print Level Orderly our Tree
	{
		Node<T>*Curr = Root;
		this->Print(Curr);
	}
	void Insert(T V)//Insert Function 
	{
		Node<T>*Temp = new Node<T>();
		Temp->Data = V;
		Node<T>*Curr = Root;
		if (Root == NULL)
		{
			Root = Temp;
			Root->Colour = 'b';
		}
		else
		{
			this->BInsert(Temp, Curr);
		}
	}
	void InOrder()//LNR Printing
	{
		Node<T>*Curr = Root;
		this->LNR(Curr);
		cout << endl;
	}
	void PostOrder()//LRN Printing
	{
		Node<T>*Curr = Root;
		this->LRN(Curr);
		cout << endl;
	}
	void PreOrder()//NLR Printing
	{
		Node<T>*Curr = Root;
		this->NLR(Curr);
		cout << endl;
	}
};
int main()
{
	RBTree<int>X;
	X.Insert(12);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(10);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(11);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(7);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(6);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(5);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(4);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(3);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(2);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	X.Insert(1);
	X.LevelOrderPrint();
	cout << "\n\n\n";
	return 0;
}