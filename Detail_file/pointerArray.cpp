#include<iostream>
using namespace std;
class A
{
	public:
		A(int x)
		{
			cout<<"ctr A "<<x<<endl;
		}
};
class C
{
	public:
		C(int x)
		{
			cout<<"ctr C "<<x<<endl;
		}
};
class B
{
	A *p[10];
	C *P1[10];
	public:
		B(C *c[10])
		{
			for(int i=0;i<10;i++)
			{
				p[i]=new A(i);// composition
			}
			for(int i=0;i<10;i++)
			{
				P1[i]=c[i];// aggregation
			}
		}
		
};
int main()
{
		C *ptr[10];
		for(int i=0;i<10;i++)
			{
				ptr[i]=new C(i);
			}
		B b(ptr);
		return 0;
}
