#include"Student.h"
int main()
{
	cout << " student before instantiated" << ' ' << Student::get_count() << endl;
	{Student S("aazka", "Iqbal");
	{
		Student S2("saad", "fayyaz");
		cout << "student after instantiated" << ' ' << Student::get_count() << endl;
	}
	cout << "after 1 delete " << ' ' << Student::get_count()<<endl;
	}
	cout << "after 2nd delete" << ' ' << Student::get_count();

}