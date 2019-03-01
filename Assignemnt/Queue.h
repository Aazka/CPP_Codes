#include<iostream>
using namespace std;
class Queue
{
	int rare;
	int front;
	int *ptr;
	int max;
	void copy(int*,int*,int);
	int *regrow(int*,int,int&);
public:
	Queue(void);
	//Queue(int);
	Queue(const Queue&);
	
	//void set_rare(int);
	//void set_front(int);
	//void set_ptr(int*,int);
	//void set_size(int);
	int get_rare();
	int get_front();
	const int* get_ptr();
	int get_size();
	bool is_empty();
	bool is_full();
	void enque(int);//setter
	int dequeue();//gettter
	void print_list();
	~Queue(void);
};

