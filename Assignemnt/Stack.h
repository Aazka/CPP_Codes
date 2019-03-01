#include<iostream>
using namespace std;

//template<typename T1>
class Stack
{
	int *ptr;
	int cur_size;
	void copy(int*,int*,int&);
	int* regrow(int*,int,int&);
	//int max_size;
public:
	Stack(void);
	//Stack(int); NO NEED FOR THE PARAMETRIZE CONSTRUCTOR
	Stack(const Stack&);
	//void set_max_size(int);
	//void set_current_size(int);
	//void set_ptr(int*,int);
    const int *get_ptr();
	int get_cur_size();
	//int get_max_size();
	//bool full();
	bool empty();
	void push(int);//setter
	int pop();//getter
	int top();
	void display();
	~Stack(void);
};

