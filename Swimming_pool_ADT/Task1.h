#include<iostream>
using namespace std;
class S_Pool
{
	int length;
	int width;
	int depth;
	int filling;
	int drain;
public:
	S_Pool();
	S_Pool(int l,int w,int d,int f,int dr);
	~S_Pool();
	void set_length(int l);
	void set_width(int w);
	void set_depth(int d);
	void set_filing(int f);
	void set_drain(int dr);
	int get_length();
	int get_width();
	int get_depth();
	int get_filing();
	int get_drain();
	int calculate_filing_pool();
	int calculate_drain_from_pool();
};

