#include "calender.h"
calender::calender() :size(3)
{
	day = nullptr;
	date = 0;
	month = 0;
	year = 0;
}
calender::calender(char* da, int d, int m, int y, int s = 0) :size(3)
{
	day = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		day[i] = da[i];
	}
	day[size] = '\0';
	date = d;
	month = m;
	year = y;
}
calender::calender(calender &obj) :size(obj.size)
{
	day = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		day[i] = obj.day[i];
	}
	day[size] = '\0';
	date = obj.date;
	month = obj.month;
	year = obj.year;
}
void calender:: operator=(calender &obj)
{
	day = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		day[i] = obj.day[i];
	}
	day[size] = '\0';
	date = obj.date;
	month = obj.month;
	year = obj.year;
}
void calender::set_day(char* d)
{
	for (int i = 0; i < size; i++)
	{
		day[i] = d[i];
	}
	day[size] = '\0';
}
char* calender::get_day()
{
	return day;
}
void calender::set_cur_date(int d)
{
	    if(d>=1||d<=31)
		{
			date=d;
		}
}
int calender::get_date()
{
	return date;
}
int calender::get_mon()
{
	return month;
}
int calender::get_y()
{
	return year;
}
void calender::set_mon(int m)
{
	if (m >= 1 || m <= 12)
	{
		month = m;
	}
	else
	{
		cout << "wrong input of m";
	}
}
void calender::set_year(int y)
{
	year = y;
}
void calender::display()
{
	cout << get_day() << endl;
	cout << get_date() <<' '<<get_mon()<<' '<<get_y();
}
calender calender::next()
{
	calender temp;
	int d=this->get_date();
	int m=this->get_mon();
	int y=this->get_y();
	if(m>12||m<1)
	{
		cout<<"wrong month";
	}
	else if(d>31||d<1)
	{
		cout<<"wrong input";
	}
	if(m==12&&(d==30||d==31))
	{
		y++;
		temp.year=y;
	}
	else
	{
		temp.year=y;
	}
	if((m==4||m==6||m==9||m==11)&&(d==30))
	{
		m++;
		d=1;
		temp.month=m;
		temp.date=d;
	}
	else if((y%4==0)&&(m==2)&&(d==29))
	{
		m++;
		d=1;
		temp.date=d;
		temp.month=m;
	}
	else if((m==12 && d==31))
	{
		m=1;
		d=1;
		temp.month=m;
		temp.date=d;
	}
	else if(d>=1||d<=31)//((m==1 ||m==2 ||m==3 ||m==5||m==7
	{
		d++;
		temp.date=d;
		temp.month=m;
	}
	char *D=this->get_day();
	temp.day=new char[size+1];
     	if(D[0]=='M')
		{
			D[0]='T';
			D[1]='U';
			D[2]='E';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';
		}
		else if(D[0]=='T'&&D[1]=='U')
		{
			D[0]='W';
			D[1]='E';
			D[2]='D';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='W')//&&D[i+1]=='U')
		{
			D[0]='T';
			D[1]='H';
			D[2]='U';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='T'&&D[1]=='H')
		{
			D[0]='F';
			D[1]='R';
			D[2]='I';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='F')//&&D[i+1]=='U')
		{
			D[0]='S';
			D[1]='A';
			D[2]='T';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='S'&&D[1]=='A')
		{
			D[0]='S';
			D[1]='U';
			D[2]='N';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='S'&&D[1]=='U')
		{
			D[0]='M';
			D[1]='O';
			D[2]='N';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
	return temp;
}
calender calender:: prev()
{
	calender temp;
	int d=this->get_date();
	int m=this->get_mon();
	int y=this->get_y();
	if(m>12||m<1)
	{
		cout<<"wrong month";
	}
	else if(d>31||d<1)
	{
		cout<<"wrong input";
	}
	if(m==1&&(d==1))
	{
		y--;
		temp.year=y;
	}
	else
	{
		temp.year=y;
	}
	if((m==4||m==6||m==9||m==11)&&(d==1))
	{
		m--;
		d=30;
		temp.month=m;
		temp.date=d;
	}
	else if((y%4==0)&&(m==3)&&(d==1))
	{
		m--;
		d=29;
		temp.date=d;
		temp.month=m;
	}
	else if((m==1 && d==1))
	{
		m=12;
		d=31;
		temp.month=m;
		temp.date=d;
	}
	else if(d>=1||d<=31)//((m==1 ||m==2 ||m==3 ||m==5||m==7
	{
		if(d==1)
		{
			d=31;
			m--;
		}
		else
		{d--;}
		temp.date=d;
		temp.month=m;
	}
	char *D=this->get_day();
	temp.day=new char[size+1];
     	if(D[0]=='M')
		{
			D[0]='S';
			D[1]='U';
			D[2]='N';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';
		}
		else if(D[0]=='T'&&D[1]=='U')
		{
			D[0]='M';
			D[1]='O';
			D[2]='N';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='W')//&&D[i+1]=='U')
		{
			D[0]='T';
			D[1]='U';
			D[2]='E';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='T'&&D[1]=='H')
		{
			D[0]='W';
			D[1]='E';
			D[2]='D';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='F')//&&D[i+1]=='U')
		{
			D[0]='T';
			D[1]='H';
			D[2]='U';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='S'&&D[1]=='A')
		{
			D[0]='F';
			D[1]='R';
			D[2]='I';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
		else if(D[0]=='S'&&D[1]=='U')
		{
			D[0]='S';
			D[1]='A';
			D[2]='T';
			//D={"tue"};
			for(int j=0;j<size;j++)
			{
			temp.day[j]=D[j];
			}
			temp.day[size]='\0';	
		}
	return temp;
}
calender calender::getting_day(int d)
{
	calender temp;
	for(int i=0;i<d;i++)
	{
		temp=next();
		set_cur_date(temp.date);
		set_mon(temp.month);
		set_year(temp.year);
	}
	return temp;
}
calender calender:: some_day_back(int d)
{
	calender temp;
	for(int i=0;i<d;i++)
	{
		temp=prev();
		set_cur_date(temp.date);
		set_mon(temp.month);
		set_year(temp.year);
	}
	return temp;
}
calender::~calender()
{
	delete[]day;
}
