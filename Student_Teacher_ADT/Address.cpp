#include "Address.h"
Address::Address()
{
	city=new MyString;
	city=nullptr;
	province=new MyString;
	province=nullptr;
	laneNo=0;
	houseNo=0;
}
Address::Address(const Address &obj)
{
	city=new MyString(obj.city->get_string());
	province=new MyString(obj.province->get_string());
	laneNo=obj.laneNo;
	houseNo=obj.houseNo;
}
Address::Address(char *c=nullptr,char *p=nullptr,int l=0,int h=0)
{
	city=new MyString(c);
	province=new MyString(p);
	laneNo=l;
	houseNo=h;
}
void Address::set_laneNo(int l)
{
	laneNo=l;
}
void Address::set_Hno(int h)
{
	houseNo=h;
}
int Address::get_lane_no()
{
	return laneNo;
}
int Address::get_house_no()
{
	return houseNo;
}
char*Address::get_name_C()const
{
	return city->get_string();
}
char*Address::get_name_P()const
{
	return province->get_string();
}
void Address::set_name_C(char *c)
{
	city->set_string(c);
}
void Address::set_name_P(char *p)
{
	province=new MyString(p);
	province->set_string(p);
}
Address::~Address(void)
{
	delete city;
	delete province;
}