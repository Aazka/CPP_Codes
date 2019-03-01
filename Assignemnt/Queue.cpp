#include "Queue.h"
Queue::Queue(void)
{
	rare=-1;
	front=-1;
	ptr=nullptr;
	max=0;
	ptr=new int[max+1];
}
/*Queue::Queue(int s)
{
	rare=-1;
	front=-1;
	max=s;
	ptr=new int[max+1];
}*/
Queue::Queue(const Queue &obj)
{
	rare=obj.rare;
	front=obj.front;
	max=0;
	ptr=new int[max+1];
	for(int i=0;i<obj.rare;i++)
	{
		ptr=regrow(ptr,obj.ptr[i],rare);
		ptr[i]=obj.ptr[i];
	}
}
void Queue::copy(int *arr, int *arr2,int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr2[i];
	}
}
int* Queue::regrow(int *ptr, int in,int &size)
{
	int *t = new int[size+1];
	copy(t, ptr, size);
	t[size] = in;
	//size++;
	delete[]ptr; 
	ptr = t;
	t = NULL;
	return ptr;
}
/*void Queue::set_rare(int r)
{
	if(r<=max||r>=front)
	{
	   rare=r;
	}
	else
	{
		cout<<"this rare_size u enter is not valid"<<endl;
	}
}
void Queue::set_front(int f)
{
	if(f<=max||f>=0)
	{
	   front=f;
	}
	else
	{
		cout<<"this front_size u enter is not valid"<<endl;
	}
}*/
/*void Queue::set_ptr(int*pointer,int s)
{
	for(int i=0;i<s;i++)
	{
		ptr[i]=pointer[i];
	}
}*/
/*void Queue::set_size(int s)
{
	max=s;
}*/
int Queue::get_rare()
{
	return rare;
}
int Queue::get_front()
{
	return front;
}
const int* Queue::get_ptr()
{
	return ptr;
}
int Queue::get_size()
{
	return max;
}
bool Queue::is_empty()
{
	if((front>rare) || (front ==-1 && rare==-1))
		{
			return true;
		}
		return false;
}
bool Queue::is_full()
{
		if(rare==max)
		{
			return true;
		}
		return false;
}
void Queue::enque(int value)//value setter
{
		if(is_empty())
		{
			rare=0;
			front=0;
			ptr[rare]=value;
			rare++;
		}
		else if(!is_full())
		{
			ptr=regrow(ptr,value,rare);
			ptr[rare]=value;
			rare++;
		}
}
int Queue::dequeue()//getter
{
		int a;
		if(!is_empty())
		{
			a=ptr[front];
			front++;
			return a;
		}
		return -1;
}
void Queue::print_list()
	{
		for(int i=front;i<=rare-1;i++)
		{
			cout<<ptr[i]<<' ';
		}
	}
Queue::~Queue(void)
{
	delete [] ptr;
}
