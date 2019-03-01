#include "TASK2.h"

S_Pool::S_Pool()
{
	length=new int;
	*length = 0;
	width=new int;
	*width = 0;
	depth=new int;
	*depth = 0;
	filling=new int;
	*filling = 0;
	drain=new int;
	*drain = 0;
}
S_Pool::S_Pool(int l, int w, int d, int f, int dr)
{
	*length = l;
	*width = w;
	*depth = d;
	*filling = f;
	*drain =dr;
}
void S_Pool::set_length(int l)
{
	*length = l;
}
void S_Pool::set_width(int w)
{
	*width=w;
}
void S_Pool::set_depth(int d)
{
	*depth=d;
}
void S_Pool::set_filing(int f)
{
	*filling = f;
}
void S_Pool::set_drain(int dr)
{
	*drain=dr;
}
int S_Pool::get_length()
{
	return *length;
}
int S_Pool::get_width()
{
	return *width;
}
int S_Pool::get_depth()
{
	return *depth;
}
int S_Pool::get_filing()
{
	return *filling;
}
int S_Pool::get_drain()
{
	return *drain;
}
int S_Pool::calculate_filing_pool()
{
	int volume = (*length)*(*width)*(*depth);
	int total_cost = volume*(*filling);
	return total_cost;
}
int S_Pool::calculate_drain_from_pool()
{
	int volume = (*length)*(*width)*(*depth);
	int total_cost = volume*(*drain);
	return total_cost;
}
S_Pool::~S_Pool(void)
{
	delete length;
	delete width;
	delete depth;
	delete filling;
	delete drain;
}
