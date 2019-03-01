#include"Library.h"
int main()
{
	Reader *R[2];
	for(int i=0;i<2;i++)
	{
		R[i]=new Reader("zab",i);
	}
	Library_Book *B[2];
	for(int i=0;i<2;i++)
	{
		B[i]=new Library_Book("DEV","ali",2);
	}
	Library L(B,R);
	L.Print();
}
/*C *ptr[10];
		for(int i=0;i<10;i++)
			{
				ptr[i]=new C(i);
			}
		B b(ptr);
		return 0;
		B[0].set_author("ali_Jawad");
	B[0].set_ID(1);
	B[0].set_title("DEV");
	B[1].set_author("dravid");
	B[1].set_ID(2);
	B[1].set_title("hallown");
	R[0].set_id(3);
	R[0].set_name("ahmed");
	R[1].set_id(5);
	R[1].set_name("abc");

}*/