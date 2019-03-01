#include<iostream>
using namespace std;

struct dabba
{
	char data;
	int row;
	int col;
	dabba *next,*previous,*up,*down;
	dabba(char v,int r,int c,dabba *N,dabba *Pre,dabba *top,dabba *bottom)
	{
		data=v;
		row=r;
		col=c;
		next=N;
		previous=Pre;
		up=top;
		down=bottom;
	}
};
class Quard_LL
{
	dabba *head;
	dabba *cursor;
public:
	Quard_LL()
	{
		head=NULL;
		cursor=NULL;
	}
	void move_cursor_to_RC(int &row,int &col)
	{
		cursor=head;
		int r=0,c=0;
		do
		{
			if(r==row&&c==col)
			{
				//cursor=cursor->next;
				break;
			}
			else if(cursor->data=='\n')
			{
				r++;
				c=0;
			}
			//r++;
			else
			{
			c++;
			}
			if(cursor->next==NULL)
			{
				break;
			}
		}while(cursor=cursor->next);
		/*for(int r=0;r<=row;r++)
		{
			for(int c=0;c<col;c++)
			{
				cursor=cursor->next;
			}
		}*/
	}
	void Set_row_col()
	{
		int r=0;
		int c=0;
		cursor=head;
		cursor->col=c;
		cursor->row=r;
		cursor=cursor->next;
		while(cursor!=NULL)
		{
			if(cursor->data=='\n')
			{
				r++;
				c=0;
			}
			else
			{
				c++;
			}
			if(cursor->data!='\n')
			{
			cursor->row=r;
			cursor->col=c;
			//cursor=cursor->next;
			}
			cursor=cursor->next;
		}
	}
	void insert_linear(char v,int r,int c)
	{
		move_cursor_to_RC(r,c);
		if(head!=NULL && cursor->next!=NULL)
		{
		//if(cursor->next!=NULL)//cursor->row!=r && cursor->col==c+1)
		//{
			//if(cursor!=NULL)
			//{
			interept_insert(v,r,c);
			//}
		//}
		}
		else if(head==NULL)
		{
			cursor=head=new dabba(v,r,c,NULL,NULL,NULL,NULL);
		}
		else //if(head!=NULL)
		{
		    if(v=='\n')
			{
				dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
				temp->previous=cursor;
				cursor->next=temp;
				if(cursor->up==NULL || cursor->up->next == NULL)
				{
					temp->up=NULL;
				}
				else if(cursor->up!=NULL || cursor->up->next!=NULL)
				{
					temp->up=cursor->up->next;
					cursor->up->next->down=temp;
				}
				cursor=temp;
			}
			else if(cursor->data=='\n')
			{
				dabba *tre=cursor;
				while(tre->previous!=NULL)
				{
					tre=tre->previous;
				}
				dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
				temp->previous=cursor;
				cursor->next=temp;
				tre->down=temp;
				temp->up=tre;
				cursor=temp;
			}
			else if(v!='\n')//&& (cursor->previous!=NULL|| cursor->previous->data!='\n'))
			{
				dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
				temp->previous=cursor;
				cursor->next=temp;
				if(cursor->up==NULL || cursor->up->next == NULL)
				{
					temp->up=NULL;
				}
				else if(cursor->up!=NULL || cursor->up->next!=NULL)
				{
					temp->up=cursor->up->next;
					cursor->up->next->down=temp;
				}
				cursor=temp;
			}	
		}
	}
	void value_not_enter_key(char v,int r,int c)
	{
		if(cursor->col!=0 &&cursor->row!=0)
			{
			dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
			temp->next=cursor;
			//temp->row=cursor->row;
			//temp->col=cursor->col;
			temp->up=cursor->up;
			if(cursor->up==NULL)
			{
				temp->up=cursor->up;
			}
			else
			{
			cursor->up->down=temp;
			}
			temp->previous=cursor->previous;
			if(cursor->previous==NULL)
			{
				temp->previous=NULL;
			}
			else
			{
			cursor->previous->next=temp;
			}
			cursor->previous=temp;
			temp->down=cursor->down;
			if(cursor->down==NULL)
			{
				temp->down=cursor->down;
			}
			else
			{
			cursor->down->up=temp;
			}
			head=temp;
			while(cursor->next!=NULL)
			{
				//cursor->row=cursor->next->row;
				//cursor->col=cursor->next->col;
				if(cursor->next->up==NULL)
				{
					cursor->up=NULL;
				}
				else
				{
					cursor->up=cursor->next->up;
				}
				if(cursor->next->down==NULL)
				{
					cursor->down=NULL;
				}
				else
				{
					cursor->down=cursor->next->down;
				}
				cursor=cursor->next;
			}
		}
			else
			{
			dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
			head=temp;
			temp->next=cursor;
			//temp->row=cursor->row;
			//temp->col=cursor->col;
			temp->up=cursor->up;
			if(cursor->up==NULL)
			{
				temp->up=cursor->up;
			}
			else
			{
			cursor->up->down=temp;
			}
			temp->previous=cursor->previous;
			if(cursor->previous==NULL)
			{
				temp->previous=NULL;
			}
			else
			{
			cursor->previous->next=temp;
			}
			cursor->previous=temp;
			temp->down=cursor->down;
			if(cursor->down==NULL)
			{
				temp->down=cursor->down;
			}
			else
			{
			cursor->down->up=temp;
			}
			while(cursor->next!=NULL)
			{
				//cursor->row=cursor->next->row;
				//cursor->col=cursor->next->col;
				if(cursor->next->up==NULL)
				{
					cursor->up=NULL;
				}
				else
				{
					cursor->up=cursor->next->up;
				}
				if(cursor->next->down==NULL)
				{
					cursor->down=NULL;
				}
				else
				{
					cursor->down=cursor->next->down;
				}
				cursor=cursor->next;
			}
		}	
	}
	void value_enter_key(char v,int r,int c)
	{
		dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
			//head=temp;
			temp->next=cursor;
			if(cursor->previous==NULL)
			{
				head=temp;
				temp->previous=NULL;
				cursor->previous=temp;
			}
			else
			{
			temp->previous=cursor->previous;
			temp->previous->next=temp;
			cursor->previous=temp;
			}
			if(cursor->up==NULL)
			{
				temp->up=NULL;
			}
			else
			{
				temp->up=cursor->up;
				temp->up->down=temp;
			}
			//temp->row=cursor->row;
			//temp->col=cursor->col;
			if(cursor->data=='\n')
			{
				dabba *move=cursor;
				move=move->next;
				move->up=cursor;

				//move->next=cursor;
				cursor->down=move;
				if(move->next!=NULL)
				{
					move->row=move->next->row;
					move->col=move->next->col;
				}
				while(move->next!=NULL)
				{
					dabba *tre=move;
					move=move->next;
					tre->next=move;
					move->previous=tre;
					if(tre->up==NULL)
					{
						tre->up=NULL;
					}
					else if(tre->up->next==tre)//NULL)
					{
						tre->up=NULL;
					}
					else if(tre->previous->up==NULL)
					{
						tre->up=NULL;
					}
					else
					{
					tre->up=move->up->next;
					tre->up->down=tre;
					}
				//	tre->row=move->row;
				//	tre->col=move->col;
				}
			}
			if(cursor->data!='\n')
			{
				dabba *mov=cursor->previous;
				if(mov->previous==NULL)
				{
				mov->down=cursor;
				cursor->up=mov;
				mov=cursor;
				while(mov->next!=NULL)
				{
					if(mov->next->next!=NULL)
					{
						mov->row=mov->next->row;
						mov->col=mov->next->col;
					}
					mov=mov->next;
					if(mov->previous->up==NULL)
					{
						mov->up=NULL;
					}
					else if(mov->previous->up->next==NULL)
					{
						mov->up=NULL;
					}
					else
					{
						mov->up=mov->previous->up->next;
					}
				}
				}
				else
				{
				while(mov->previous!=NULL || mov->previous->data!='\n')
				{
					if(mov->previous==NULL)
					{
						break;
					}
					else if(mov->previous->data=='\n')
					{
						break;
					}
					else
					{
						mov=mov->previous;
					}
				}
				mov->down=cursor;
				cursor->up=mov;
				mov=cursor;
				while(mov->next!=NULL)
				{
					//if(mov->next->next!=NULL)
					//{
					//	mov->row=mov->next->row;
					//	mov->col=mov->next->col;
					//}
					mov=mov->next;
					if(mov->previous->up==NULL)
					{
						mov->up=NULL;
					}
					else if(mov->previous->up->next==NULL)
					{
						mov->up=NULL;
					}
					else
					{
						mov->up=mov->previous->up->next;
					}
				}
			}
			}
	}
	void interept_insert(char v,int r,int c)
	{
		move_cursor_to_RC(r,c);
		if(v!='\n')
		{
			value_not_enter_key(v,r,c);
			Set_row_col();
		}
		if(v=='\n')
		{
			value_enter_key(v,r,c);
			Set_row_col();
		}
	}
	void print()
	{
		dabba *present=head;
		while(present!=NULL)
		{
			if(present->data=='\n')
			{
				cout<<"/n";
				cout<<endl;
			}
			cout<<present->data;
			present=present->next;
		}
		cout<<endl;
	}
};
int main()
{
	Quard_LL l;
	l.insert_linear('a',0,0);
	l.insert_linear('b',0,1);
	l.insert_linear('c',0,2);
	l.insert_linear('\n',0,3);
	l.insert_linear('e',1,0);
	l.insert_linear('f',1,1);
	l.insert_linear('g',1,2);
	l.insert_linear('h',1,3);
	l.insert_linear('i',1,4);
	l.insert_linear('\n',1,5);
	l.insert_linear('j',2,0);
	l.insert_linear('k',2,1);
	//l.insert_linear('k',2,1);
	//l.insert_linear('s',0,0);
	l.insert_linear('\n',1,2);
	//l.interept_insert('\n',1,0);
	cout<<"without interept"<<endl;
	l.print();
	//l.interept_insert('\n',1,5);//overwrite in \n
	//l.interept_insert('\n',0,0);//start of line
	//l.interept_insert('\n',1,1);
	//l.interept_insert('k',3,1);
	//cout<<"after interept"<<endl;
	//l.print();
	/*l.insert_linear('a',0,0);
	l.insert_linear('b',0,1);
	l.insert_linear('\n',0,2);
	l.insert_linear('c',1,0);
	l.insert_linear('d',1,1);
	l.insert_linear(' ',1,2);
	l.insert_linear('\n',1,3);
	//l.insert_linear('\n',2,0);
	l.interept_insert('s',0,0);
	l.interept_insert('z',1,0);
	l.interept_insert('\n',0,0);*/
	//l.print();
}
/*dabba *temp=new dabba(v,r,c,NULL,NULL,NULL,NULL);
			temp->next=cursor;
			//temp->row=cursor->row;
			//temp->col=cursor->col;
			temp->up=cursor->up;
			if(cursor->up==NULL)
			{
				temp->up=cursor->up;
			}
			else
			{
			cursor->up->down=temp;
			}
			temp->previous=cursor->previous;
			if(cursor->previous==NULL)
			{
				temp->previous=NULL;
			}
			else
			{
			cursor->previous->next=temp;
			}
			cursor->previous=temp;
			temp->down=cursor->down;
			if(cursor->down==NULL)
			{
				temp->down=cursor->down;
			}
			else
			{
			cursor->down->up=temp;
			}
			head=temp;
			while(cursor->next!=NULL)
			{
				//cursor->row=cursor->next->row;
				//cursor->col=cursor->next->col;
				if(cursor->next->up==NULL)
				{
					cursor->up=NULL;
				}
				else
				{
					cursor->up=cursor->next->up;
				}
				if(cursor->next->down==NULL)
				{
					cursor->down=NULL;
				}
				else
				{
					cursor->down=cursor->next->down;
				}
				cursor=cursor->next;
			}*/