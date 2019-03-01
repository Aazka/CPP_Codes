#include "registered.h"


registered::registered(void):User()
{

}
void registered::login(int id)
{
	cout<<"have been login";
	set_id(id);
}
registered::~registered(void)
{
}
