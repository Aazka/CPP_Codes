#include "Property.h"
//#include"MyString.h"
Property::Property(void)
{
	no=0;
	city=new MyString;
	city=nullptr;
}
Property::Property(char*c,int n)//,int l,int h)
{
	no=n;
	city=new MyString(c);
}
void Property::set_A_number(int n)
{
	no=n;
}
void Property::set_A_name_C(char*p)
{
	city=new MyString;
	city->set_string(p);
}
 /*int Property::get_A_house_no()
{
	return A->get_house_no();
}*/
 int Property::get_A_number()
 {
	 return no;
 }
 char* Property::get_A_name_C()const
 {
	 return city->get_string();//A->get_name_P();
 }
 /*int Property::get_A_lane_no()
 {
	 return //A->get_lane_no();
 }*/
Property::~Property(void)
{
	//delete name;
	delete city;
}
