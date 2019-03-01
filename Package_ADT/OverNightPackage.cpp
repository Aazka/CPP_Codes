
#include "OverNightPackage.h"
OverNightPackage::OverNightPackage():Package()
{
	additional_fee=0;
}
OverNightPackage::OverNightPackage(char *n,char *add,char*c,char*s,int cd,float w,float cst,int f):Package(n,add,c,s,cd,w,cst)
{
	additional_fee=f;
}
void OverNightPackage::set_adfee(int f)
{
	additional_fee=f;
}
int OverNightPackage::get_adfee()
{
	return additional_fee;
}
float OverNightPackage::Package’s_calculate_Cost()
{
	float w=get_weight();
	float cst=get_cost();
	return w*cst*additional_fee;
}
OverNightPackage::~OverNightPackage(void)
{
}
