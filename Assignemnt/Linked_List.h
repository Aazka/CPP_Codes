#include<iostream>
using namespace std;
class dabba
{
public://private:
	int data;
	dabba *next;
public:
	dabba(int d,dabba *N=NULL)
	{
		data=d;
		next=N;
	}
};

class Linked_List
{
	dabba *front;
	dabba *tail;
	//int c;
	//int count(dabba*);
public:
	Linked_List(void);
	Linked_List(const Linked_List&);
	// get_count();
	void insert_at_start(int);
	void insert_at_tail(int);
	void delete_start();
	void delete_end();
	dabba *search(int);
	void insert_before(int,int);
	void insert_after(int,int);
	void delete_value(int);
	void sort();
	void remove_before(int);
	void remove_after(int);
	void print();
	~Linked_List(void);
};

