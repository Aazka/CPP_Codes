#include"PC.h"
int main()
{
	PC P;
	int choice = 0;
	do
	{
	cout << "enter ur choice if u enter -1 then its mean that u dont want to enter anything :P" << endl;
	cout << "1.set_model_of_HDD(char*)"<<endl;
	cout << "2.set_RPM_of_HDD(int)" << endl;
	cout << "3.set_capacity_of_HDD(int)"<<endl;
	cout << " 4.set_buffer_of_HDD(int)"<<endl;
	cout << " 5.set_frequency_of_RAM(int)"<<endl;
	cout << "6 set_model_of_RAM(char*)"<<endl;
	cout << "7 set_space_of_RAM(float)"<<endl;
	cout << "8.set_tech_of_RAM(char*)"<<endl;
	cout << "9 set_frequency_of_CPU(int)"<<endl;
	cout << "10.set_model_of_CPU(char*)"<<endl;
	cout << "11.set_serial_no_of_CPU(int)"<<endl;
	cout << "12.const char *get_model_of_HDD():"<<endl;
	cout << "13.int get_RPM_of_HDD()"<<endl;
	cout << "14.int get_capacity_of_HDD()"<<endl;
	cout << "15.int get_buffer_of_HDD()"<<endl;
	cout << "16.const char *get_model_of_RAM()"<<endl;
	cout << "17.const char *get_tech_of_RAM()"<<endl;
	cout << "18.int get_fre_of_RAM()"<<endl;
	cout << "19.float get_sp_of_RAM()"<<endl;
	cout << "20.const char *get_model_of_CPU()"<<endl;
	cout << "21.int get_fre_of_CPU()"<<endl;
	cout << "22.int get_s_no_of_CPU()"<<endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		P.set_model_of_HDD("MY_Comp");
		break;
	case 2:
		P.set_RPM_of_HDD(200);
		break;
	case 3:
		P.set_capacity_of_HDD(100);
		break;
	case 4:
		P.set_buffer_of_HDD(2);
		break;
	case 5:
		P.set_frequency_of_RAM(200);
		break;
	case 6:
		P.set_model_of_RAM("abc");
		break;
	case 7:
		P.set_space_of_RAM(34.8);
		break;
	case 8:
		P.set_tech_of_RAM("IP");
		break;
	case 9:
		P.set_frequency_of_CPU(54);
		break;
	case 10:
		P.set_model_of_CPU("ABC");
		break;
	case 11:
		P.set_serial_no_of_CPU(2);
		break;
	case 12:
		cout << P.get_model_of_HDD();
		break;
	case 13:
		cout << P.get_RPM_of_HDD();
		break;
	case 14:
		cout << P.get_capacity_of_HDD();
		break;
	case 15:
		cout << P.get_buffer_of_HDD();
		break;
	case 16:
		cout << P.get_model_of_RAM();
		break;
	case 17:
		cout << P.get_tech_of_RAM();
		break;
	case 18:
		cout << P.get_fre_of_RAM();
		break;
	case 19:
		cout << P.get_sp_of_RAM();
		break;
	case 20:
		cout << P.get_model_of_CPU();
		break;
	case 21:
		cout << P.get_fre_of_CPU();
		break;
	case 22:
		cout << P.get_s_no_of_CPU();
		break;
	}
	}while(choice!=-1);
}
