#include <iostream>
using namespace std;
template <typename T1>
class Queue
{
private:
	T1 *ptr;
	int max;
	int rare;
	int front;
public:
	Queue(int s)
	{		
		max = s;
		rare = 0;
		front = 0;
		ptr = new T1[max];
	}
	bool is_full()
	{
		if ((rare + 1) % max == front)
		{
			return true;
		}
		return false;
	}
	bool is_empty()
	{
		if (front == rare)// || count == 0)
		{
			return true;
		}
		return false;
	}
	void enQ(T1 value)
	{
		if (!is_full())
		{
			ptr[rare] = value;
			rare = (rare + 1) % max;
			//count++;
		}
		else
		{
			cout << "array if full";
		}
	}
	T1 deQue()
	{
		if (!is_empty())
		{
			T1 x = ptr[front];
			front = ((front + 1) % max);
			//count--;
			return x;
		}
		else
		{
			cout << "array is empty";
		}
		return -1;
	}
	T1 D_front()
	{
		return ptr[front];
	}
	T1 D_rare()
	{
		return ptr[rare];
	}
	void display()
	{
		cout << endl;
		if (front == max)
		{
			for (int i = 0; i < max; i++)
			{
				cout << ptr[i] << ' ';
			}
		}
		else if (front < rare)
		{
			for (int i = front; i <rare; i++)
			{
				cout << ptr[i] << ' ';
			}
			cout<<endl;
		}
	}
};
int main()
{
	int z = 0;
	Queue <int> Q(10);
	Q.enQ(14);
	Q.enQ(22);
	Q.enQ(13);
	Q.enQ(-6);
	cout<<"the enque values is"<<endl;
	Q.display();
	z=Q.deQue();
	cout<<"deleted value is "<<' '<<z<<endl;
	z=Q.deQue();
	cout<<"deleted value is "<<' '<<z<<endl;
	Q.display();
	Q.enQ(9);
	Q.enQ(20);
	Q.enQ(5);
	Q.display();
	/*for (int i = 0; i < 10; i++)
	{
		Q.enQ(i);
	}*/

	/*for (int i = 0; i < 6; i++)
	{
		z = Q.deQue();
		if (z != -1)
		{
			cout << z << ' ';
		}
	}
	Q.display();*/
}