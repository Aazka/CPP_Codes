#include<iostream>
using namespace std;
template<typename T>
struct Node
{
	Node<T>*Left;
	Node<T>*Rgiht;
	T Data;
};
template<typename T>
class BST
{
private:
	Node<T>*Root;
	Node<T>* TempInit(T V)
	{
		Node<T>*Temp = new Node<T>();
		Temp->Data = V;
		Temp->Left = NULL;
		Temp->Rgiht = NULL;
		return Temp;
	}
	void BInsert(Node<T>*Current, Node<T>*Temp)
	{
		if (Current->Left == NULL&&Current->Rgiht == NULL)
		{
			if (Temp->Data > Current->Data)
			{
				Current->Rgiht = Temp;
			}
			else if (Temp->Data <= Current->Data)
			{
				Current->Left = Temp;
			}
		}
		else if (Temp->Data > Current->Data)
		{
			if (Current->Rgiht != NULL)
				BInsert(Current->Rgiht, Temp);
			else
				Current->Rgiht = Temp;
		}
		else if (Temp->Data <= Current->Data)
		{
			if (Current->Left != NULL)
				BInsert(Current->Left, Temp);
			else
				Current->Left = Temp;
		}
	}
	int BSearchTimes(Node<T>*Current, T V, int & Count)
	{
		if (V == Current->Data)
		{
			Count++;
		}
		if (Current->Left != NULL)
		{
			BSearchTimes(Current->Left, V, Count);
			if (Current->Rgiht != NULL)
			{
				BSearchTimes(Current->Left, V, Count);
			}
		}
		else if (Current->Rgiht != NULL)
		{
			BSearchTimes(Current->Left, V, Count);
			if (Current->Left != NULL)
			{
				BSearchTimes(Current->Left, V, Count);
			}
		}
	}
	Node<T>*BSearchNode(Node<T>*Current, T V)
	{
		if (V == Current->Data)
		{
			return Current;
		}
		if (Current->Data < V)
		{
			if (Current->Rgiht != NULL)
			{
				return this->BSearchNode(Current->Rgiht, V);
			}
			return NULL;
		}
		else
		{
			if (Current->Left != NULL)
			{
				return this->BSearchNode(Current->Left, V);
			}
			return NULL;
		}
	}
	Node<T>**SearchNodeAdress(Node<T>*Current, T V)
	{
		if (V == Current->Data)
		{
			return &Current;
		}
		if (Current->Data < V)
		{
			if (Current->Rgiht != NULL)
			{
				return this->SearchNodeAdress(Current->Rgiht, V);
			}
			return NULL;
		}
		else
		{
			if (Current->Left != NULL)
			{
				return this->SearchNodeAdress(Current->Left, V);
			}
			return NULL;
		}
	}
	Node<T>* Parent(Node<T>*ptr, Node<T>*Current)
	{
		if (Current->Left == ptr || Current->Rgiht == ptr)
		{
			return Current;
		}
		else if (Current->Data < ptr->Data)
		{
			if (Current->Rgiht != NULL)
			{
				return Parent(ptr, Current->Rgiht);
			}
		}
		else
		{
			if (Current->Left != NULL)
			{
				return Parent(ptr, Current->Left);
			}
		}
	}
	void Print(Node<T>*Current)
	{
		if (Current->Left != NULL)
			this->Print(Current->Left);
		cout << Current->Data << " ";
		if (Current->Rgiht != NULL)
			this->Print(Current->Rgiht);
	}
	int BHeight(Node<T>*Current, int count)
	{
		if (Current->Left == NULL&&Current->Rgiht == NULL)
		{
			count++;
			return count;
		}
		else
		{
			if (Current->Left != NULL)
			{
				if (this->BHeight(Current->Left, count + 1) > count)
				{
					count = this->BHeight(Current->Left, count + 1);
				}
			}
			if (Current->Rgiht != NULL)
			{
				if (this->BHeight(Current->Rgiht, count + 1) > count)
				{
					count = this->BHeight(Current->Rgiht, count + 1);
				}
			}
			return count;
		}
	}
	int BCountNodes(Node<T>*Current)
	{
		int Count = 1;
		if (Current->Left != NULL)
		{
			Count = Count + BCountNodes(Current->Left);
		}
		if (Current->Rgiht != NULL)
		{
			Count = Count + BCountNodes(Current->Rgiht);
		}
		return Count;
	}
	int BCountLeaves(Node<T>*Current)
	{
		int Count = 0;
		if (Current->Left == NULL&&Current->Rgiht == NULL)
		{
			return 1;
		}
		if (Current->Left != NULL)
		{
			Count = Count + this->BCountLeaves(Current->Left);
		}
		if (Current->Rgiht != NULL)
		{
			Count = Count + this->BCountLeaves(Current->Rgiht);
		}
		return Count;
	}
	void BDelAllLeaves(Node<T>*Current)
	{
		if (Current->Left == NULL&&Current->Rgiht == NULL)
		{
			Current->Data;
			if (Current == Root)
			{
				delete Current;
				Root = NULL;
			}
			delete Current;
		}
		else
		{
			Current->Data;
			if (Current->Left != NULL)
			{
				if (Current->Left->Left == NULL&&Current->Left->Rgiht == NULL)
				{
					this->BDelAllLeaves(Current->Left);
					Current->Left = NULL;
				}
				else
				{
					this->BDelAllLeaves(Current->Left);
				}
			}
			if (Current->Rgiht != NULL)
			{
				if (Current->Rgiht->Left == NULL&&Current->Rgiht->Rgiht == NULL)
				{
					this->BDelAllLeaves(Current->Rgiht);
					Current->Rgiht = NULL;
				}
				else
				{
					this->BDelAllLeaves(Current->Rgiht);
				}
			}
		}
	}
	int BNthGreater(int N, Node<T>*Curr)
	{
		if (Curr->Left == NULL&&Curr->Rgiht == NULL)
		{
			if (Curr->Data > N)
			{
				return -1;
			}
			return Curr->Data;
		}
		else
		{
			if (Curr->Data == N)
			{
				return Curr->Data;
			}
			if (Curr->Data < N)
			{
				if (Curr->Rgiht != NULL&&Curr->Rgiht->Data <= N)
				{
					return BNthGreater(N, Curr->Rgiht);
				}
				return Curr->Data;
			}
			if (Curr->Data>N)
			{
				if (Curr->Left != NULL)
				{
					return BNthGreater(N, Curr->Left);
				}
				return -1;
			}
		}
	}
	void LNR(Node<T>*Current)
	{
		if (Current->Left == NULL)
		{
			cout << Current->Data << " ";
		}
		else
		{
			this->LNR(Current->Left);
			cout << Current->Data << " ";
			if (Current->Rgiht != NULL)
				this->LNR(Current->Rgiht);
		}
	}
	void LRN(Node<T>*Current)
	{
		if (Current->Left == NULL)
		{
			if (Current->Rgiht != NULL)
				this->LRN(Current->Rgiht);
			cout << Current->Data << " ";
		}
		else
		{
			this->LNR(Current->Left);
			if (Current->Rgiht != NULL)
				this->LNR(Current->Rgiht);
			cout << Current->Data << " ";
		}
	}
	void NLR(Node<T>*Current)
	{
		cout << Current->Data << " ";
		if (Current->Left != NULL)
			this->NLR(Current->Left);
		if (Current->Rgiht != NULL)
			this->NLR(Current->Rgiht);
	}
	Node<T>**Max(Node<T>*Cur)
	{
		if (Cur->Rgiht == NULL)
		{
			return &Cur;
		}
		else
		{
			return  this->Max(Cur->Rgiht);
		}
	}
public:
	BST()
	{
		Root = NULL;
	}
	bool ISempty()
	{
		return Root == NULL;
	}
	int SearchTimes(T V)
	{
		int count = 0;
		Node<T>*Current = Root;
		this->BSearchTimes(Current, V, count);
		return count;
	}
	Node<T>* SearchNode(T V)
	{
		Node<T>*Curr = Root;
		return this->BSearchNode(Curr, V);
	}
	int HeightOfTree()
	{
		int count = 0;
		Node<T>*Current = Root;
		return this->BHeight(Current, count);
	}
	void Insert(T V)
	{
		Node<T>*Temp = TempInit(V);
		if (this->ISempty())
		{
			Root = Temp;
		}
		else
		{
			Node<T>*Current = Root;
			this->BInsert(Current, Temp);
		}
	}
	int CountNodes()
	{
		Node<T>*Current = Root;
		return this->BCountNodes(Current);
	}
	int CountLeaves()
	{
		Node<T>*Current = Root;
		return this->BCountLeaves(Current);
	}
	void DelAllLeaves()
	{
		Node<T>*Curr = Root;
		this->BDelAllLeaves(Curr);
	}
	void Display()
	{
		Node<T>*Curr = Root;
		this->Print(Curr);
		cout << endl;
	}
	int NthGreater(int N)
	{
		Node<T>*Curr = Root;
		return this->BNthGreater(N, Curr);
	}
	void InOrder()
	{
		Node<T>*Curr = Root;
		this->LNR(Curr);
		cout << endl;
	}
	void PostOrder()
	{
		Node<T>*Curr = Root;
		this->LRN(Curr);
		cout << endl;
	}
	void PreOrder()
	{
		Node<T>*Curr = Root;
		this->NLR(Curr);
		cout << endl;
	}
	void Remove(T Val)
	{
		Node<T>*Temp1 = Root;
		Node<T>**Curr = this->SearchNodeAdress(Temp1, Val);
		Node<T>*Temp = *Curr;
		if (Curr == NULL)
		{
			cout << "Value Not Found" << endl;
		}
		else if ((*Curr)->Left == NULL && (*Curr)->Rgiht == NULL)
		{
			Node<T>*Temp2 = this->Parent(Temp, Temp1);
			if (Temp2->Data < Temp->Data)
			{
				Temp2->Rgiht = NULL;
			}
			else
			{
				Temp2->Left = NULL;
			}
			delete *Curr;
			*Curr = NULL;
		}
		else if ((*Curr)->Left == NULL)
		{
			Node<T>*Temp2 = this->Parent(Temp, Temp1);
			*Curr = (*Curr)->Rgiht;
			if (Temp2->Data < (*Curr)->Data)
			{
				Temp2->Rgiht = *Curr;
			}
			else
			{
				Temp2->Left = *Curr;
			}
			delete Temp;
		}
		else if ((*Curr)->Rgiht == NULL)
		{
			Node<T>*Temp2 = this->Parent(Temp, Temp1);
			*Curr = (*Curr)->Left;
			if (Temp2->Data < (*Curr)->Data)
			{
				Temp2->Rgiht = *Curr;
			}
			else
			{
				Temp2->Left = *Curr;
			}
			delete Temp;
		}
		else
		{
			Node<T>**Curr2 = this->Max(Temp->Left);
			(*Curr)->Data = (*Curr2)->Data;
			Temp = *Curr2;
			if ((*Curr2)->Left == NULL && (*Curr2)->Rgiht == NULL)
			{
				Node<T>*Temp2 = this->Parent(Temp, Temp1);
				if (Temp2->Data < Temp->Data)
				{
					Temp2->Rgiht = NULL;
				}
				else
				{
					Temp2->Left = NULL;
				}
				delete *Curr2;
				*Curr2 = NULL;
			}
			else if ((*Curr2)->Left == NULL)
			{
				Node<T>*Temp2 = this->Parent(Temp,Root);
				*Curr2 = (*Curr2)->Rgiht;
				if ((*Curr)->Data > Temp2->Data)
				{
					Temp2->Rgiht = *(Curr);
				}
				else
				{
					Temp2->Left = *(Curr);
				}
				delete Temp;
			}
			else if ((*Curr2)->Rgiht == NULL)
			{
				Node<T>*Temp2 = this->Parent(Temp, Root);
				*Curr2 = (*Curr2)->Left;
				if ((*Curr)->Data > Temp2->Data)
				{
					Temp2->Rgiht = *(Curr);
				}
				else
				{
					Temp2->Left = *(Curr);
				}
				delete Temp;
			}
		}
	}
};
int main()
{
	BST<int>X;
	X.Insert(20);
	X.Insert(30);
	X.Insert(10);
	X.Insert(5);
	X.Insert(15);
	X.Insert(25);
	X.Insert(35);
	X.Insert(15);
	X.Display();
	/*cout << X.HeightOfTree() << endl;
	cout << X.CountNodes() << endl;
	cout << X.CountLeaves() << endl;
	cout << X.NthGreater(34) << endl;*/
	X.Remove(20);
	X.DelAllLeaves();
	//cout << X.CountNodes() << endl;
	//cout << X.CountLeaves() << endl;
	X.Display();
	/*X.InOrder();
	X.PreOrder();
	X.PostOrder();*/
	return 0;
}