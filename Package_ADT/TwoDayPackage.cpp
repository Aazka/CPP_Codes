#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(void):Package()
{
	flat_fee=0;
}
TwoDayPackage::TwoDayPackage(char *n,char *add,char*c,char*s,int cd,float w,float cst,int f):Package(n,add,c,s,cd,w,cst)
{
	flat_fee=f;
}
void TwoDayPackage::set_flat_fee(int f)
{
	flat_fee=f;
}
int TwoDayPackage::get_flat_fee()
{
	return flat_fee;
}
float TwoDayPackage::Package’s_calculate_Cost()
{
	float w=get_weight();
	float cst=get_cost();
	return w*cst*flat_fee;
}
TwoDayPackage::~TwoDayPackage(void)
{
}
