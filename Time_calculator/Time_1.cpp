#include "Time_1.h"
#include"time.h"
#include "string.h"
Time_1::Time_1(void)
{
	time_t current_time;
	struct tm  local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);
	Hour = local_time.tm_hour;
	Mint = local_time.tm_min;
	second = local_time.tm_sec;
	AM_PM=new char[10];
	AM_PM=nullptr;
}
Time_1::Time_1(int H=0,int M=0,int S=0,char*T=nullptr)
{
	Hour=H;
	Mint=M;
	second=S;
	if(valide_time())
	{
	if(T==nullptr)
	{
		AM_PM=nullptr;
	}
	else
	{
		int l=strlen(T);
		AM_PM=new char[l+1];
		for(int i=0;i<l;i++)
		{
			AM_PM[i]=T[i];
		}
		AM_PM[l]='\0';
	}
	}
	else
	{
	time_t current_time;
	struct tm  local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);
	Hour = local_time.tm_hour;
	Mint = local_time.tm_min;
	second = local_time.tm_sec;
	AM_PM=new char[10];
	AM_PM=nullptr;
	}
}
Time_1::Time_1(const Time_1&obj)
{
	Hour=obj.Hour;
	Mint=obj.Mint;
	second=obj.second;
	if(obj.AM_PM==nullptr)
	{
		AM_PM=nullptr;
	}
	else
	{
		int l=strlen(obj.AM_PM);
		AM_PM=new char[l+1];
		for(int i=0;i<l;i++)
		{
			AM_PM[i]=obj.AM_PM[i];
		}
		AM_PM[l]='\0';
	}
}
bool Time_1::input_Time()
{
	cout<<"enter HH:MM:SS "<<endl;
	cin>>Hour;
	cin>>Mint;
	cin>>second;
	int C=0;
	cout<<"do u want to enter AM_PM for 12hour formate if yes press 1"<<endl;
	cin>>C;
	if(C==1)
	{
		cin>>AM_PM;
	}
	else
	{
		AM_PM=nullptr;
	}
	if(valide_time()==false)
	{
		cout<<"wrong input"<<endl;
	time_t current_time;
	struct tm  local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);
	Hour = local_time.tm_hour;
	Mint = local_time.tm_min;
	second = local_time.tm_sec;
	AM_PM=new char[10];
	AM_PM=nullptr;
	}
	return true;
}
bool Time_1::valide_time()
{
	if((Hour<0||Hour>24)&&(Mint<0||Mint>61)&&(second<0||second>61))
	{
		return false;
	}
	else if(AM_PM!=nullptr)
	{
		if((AM_PM[0]!='P'||AM_PM[0]!='p' ||AM_PM[0]!='A' ||AM_PM[0]!='a')&&(AM_PM[1]!='m'||AM_PM[1]!='M'))
		{
			return false;
		}
	}
	else 
		return true;
}
Time_1 Time_1::get_time()const
{
	Time_1 Temp(Hour,Mint,second);
	return Temp;
}
void Time_1::retrive_time(int&h,int&m,int&s,char*&A_P)const
{
	h=this->Hour;
	m=this->Mint;
	s=this->second;
	if(AM_PM==nullptr)
	{
		A_P=nullptr;
	}
	else
	{
		int l=strlen(AM_PM);
		A_P=new char[l+1];
		for(int i=0;i<l;i++)
		{
			A_P[i]=AM_PM[i];
		}
		A_P[l]='\0';
	}
}
bool Time_1::valid_12hour(int hr,char*A_P)
{
	if(hr<1&&hr>12)
	{
		return false;
	}
	else if(A_P[0]!='P'||A_P[0]!='p' && A_P[0]!='A' ||A_P[0]!='a')  
	{
		if(A_P[1]!='m'||A_P[1]!='M')
		{
		  return false;
		}
		return false;
	}
	return true;
}
bool Time_1::valid_24hour(int H,char*A_P)
{
	if(H<0 && H>24)
	{
		return false;
	}
	else if(A_P!=nullptr)
	{
		return false;
	}
	else
		return true;
}
void Time_1::convert_to_12Hour()
{
	if(valid_24hour(Hour,AM_PM)==false)
	{
		cout<<"time is already in 12 hour formate"<<endl;
	}
	else
	{
		if(Hour==0)
		{
			Hour=12;//its mean morning time
			AM_PM[0]='A';
			AM_PM[1]='M';
			AM_PM[2]='\0';
		}
		else if(Hour>12&&Hour<24)
		{
			Hour=Hour%12;//its mean noon time
			AM_PM=new char[3];
			AM_PM[0]='P';
			AM_PM[1]='M';
			AM_PM[2]='\0';
		}
	}
}
void Time_1::convert_to_24Hour()
{
	if(valid_12hour(Hour,AM_PM))
	{
		cout<<"time is already in 12 hour formate"<<endl;
	}
	else
	{
		if(AM_PM[0]=='P' || AM_PM[0]=='p')
		{
			if(Hour<=12)
			{
				Hour+=12;
				if(Hour>23)
				{
					Hour=0;
				}
			}
		}
		AM_PM=nullptr;
	}
}
void Time_1::set_Hour(int h)
{
	Hour=h;
}
void Time_1::set_Mint(int m)
{
	Mint=m;
}
void Time_1::set_second(int s)
{
	second=s;
}
void Time_1::set_am_pm(char*T)
{
	    int l=strlen(T);
		AM_PM=new char[l+1];
		for(int i=0;i<l;i++)
		{
			AM_PM[i]=T[i];
		}
		AM_PM[l]='\0';
}
int Time_1::get_hour()
{
	return Hour;
}
int Time_1::get_mint()
{
	return Mint;
}
int Time_1::get_second()
{
	return second;
}
char*Time_1::get_am_pm()const
{
	return AM_PM;
}
void Time_1::display()
{
	cout<<Hour<<' '<<Mint<<' '<<second<<' ';
	if(AM_PM!=nullptr)
	{
		cout<<AM_PM<<endl;
	}
	cout<<endl;
}
Time_1::~Time_1(void)
{
	delete[]AM_PM;
}
