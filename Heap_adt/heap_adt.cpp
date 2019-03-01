#include<iostream>
using namespace std;

class Heap_adt
{
	int *ptr;
	int count;
	int size;
public:

	Heap_adt(int s)
	{
		size = s;
		ptr = new int[size];
		count = 0;
	}
	bool empty()
	{
		if (count == 0)
		{
			return true;
		}
		return false;
	}
	bool full()
	{
		if (count == size)
		{
			return true;
		}
		return false;
	}
	void insert(int v)
	{
		if (empty())
		{
			ptr[count] = '0';
			count++;
			ptr[count] = v;
			count++;
		}
		else
		{
			if (!full())
			{
				int i;
				i = count;
				ptr[count] = v;
				while (ptr[i] != '0' && i != 1)
				{
					if (ptr[i / 2] < ptr[i])
					{
						swap(ptr[i / 2], ptr[i]);
						i = i / 2;
					}
					else
					{
						break;
					}
				}
				count++;
			}
		}
	}  
	void swap(int a,int b)
	{
		int t=ptr[a];
		ptr[a]=ptr[b];
		ptr[b]=t;
	}
	void reheap_down(int root,int bottom)//still i didnt understand this reheap concept -,-
	{
		int max_child,right_child,left_child;
		left_child=2*root + 1;
		right_child=2*root +2;
		if(left_child<=bottom)
		{
			if(left_child==bottom)
			{
				max_child=left_child;
			}
			else
			{
				if(ptr[left_child]<=ptr[right_child])
				{
					max_child=right_child;
				}
				else
				{
					max_child=left_child;
				}
			}
			if(ptr[root]<ptr[max_child])
			{
				swap(root,max_child);
				reheap_down(max_child,bottom);
			}
			
		}
	}
	int delete_root()
	{
		if(!empty())
		{
			int temp=ptr[0];
			count--;
			ptr[0]=ptr[count];
			reheap_down(0,count);
			return temp;
		}
		else
		{
			cout<<"nothing to show"<<endl;
		}
	}
	void clear()
	{
		for(int i=0;i<=count;i++)
		{
			delete_root();
		}
		cout<<"data delete"<<endl;
	}
	void display()
	{
		for (int i = 1; i < count; i++)
		{
			cout << ptr[i] << " ";
		}
	}
	~Heap_adt()
	{
		delete ptr;
	}
};
int main()
{
	Heap_adt H(7);
	H.insert(1);
	H.insert(2);
	H.insert(3);
	H.insert(4);
	H.display();
	cout<<endl;
	H.delete_root();
	H.display();
	cout<<endl;
	H.clear();
	H.display();
	return 0;
}