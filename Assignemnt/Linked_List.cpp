#include "Linked_List.h"
Linked_List::Linked_List(void)
{
	front=NULL;
	tail=NULL;
	//c=0;
}
Linked_List::Linked_List(const Linked_List&obj)
{
	if(obj.front==NULL &&obj.tail==NULL)
	{
		front=NULL;
		tail=NULL;
	}
	else
	{
		dabba *t=obj.front;
		while(t!=NULL)
		{
			insert_at_tail(t->data);
			t=t->next;
		}
		//dabba *temp=front;
		/*dabba *temp2=obj.front;
		while(true)
		{
			if(temp2==NULL)
			{
				break;
			}
			else
			{
				temp->data=temp2->data;
				//temp=temp2->next;
				temp2=temp2->next;
				temp=temp->next;
			}
		}*/
	}
}
void Linked_List:: insert_at_start(int value)
{
	if(front==NULL)
		{
			tail=front=new dabba(value,NULL);
			//tail=new dabba(value,NULL);
		}
		else
		{
			dabba *temp=new dabba(value,front);
			front=temp;
		}
}
void Linked_List::insert_at_tail(int value)
	{
		if(tail==NULL)
		{
			tail=front=new dabba(value,NULL);
		}
		else
		{
			dabba *temp=new dabba(value,NULL);
			tail->next=temp;
			tail=temp;
		}
	}
void Linked_List::delete_start()
	{
		dabba *t=front;
		if(t==NULL)
		{
			cout<<"null";
		}
		front=front->next;
	}
	void Linked_List::delete_end()
	{
		if(front==tail)
		{
			front=NULL;
			tail=NULL;
		}
		dabba *pre=front;
		while(pre->next->next!=NULL)//pre->next!=NULL &&
		{
			pre=pre->next->next;
		}
		pre->next=NULL;
		tail=pre;
	}
	dabba *Linked_List::search(int value)
	{
		dabba *temp=front;
		while(temp->next!=NULL)
		{
			if(temp->data==value)
			{
				cout<<value<<' ';
				return temp;
			}
			temp=temp->next;
		}
		if(temp->data==value)
			{
				cout<<value<<' ';
				return temp;
			}
	}
	void Linked_List::insert_before(int value,int key)
	{
		dabba *pre=front;
		if(front==tail)
		{
			cout<<"cant insert";
		}
		while(pre->next!=NULL)
		{
			if(pre->next->data==key)
			{
				dabba *temp=new dabba(value,pre->next);
				pre->next=temp;
				break;
			}
			pre=pre->next;
		}
	}
	void Linked_List::insert_after(int value,int key)
	{
		dabba *present=front;
		while(present->next!=NULL)
		{
			if(present->data==key)
			{
				dabba *temp=new dabba(value,present->next);//->next);
					present->next=temp;
					break;
			}
			present=present->next;
		}
	}
	void Linked_List::delete_value(int value)
	{
		dabba *pre=front;
		while(pre->next!=NULL)
		{
			if(pre->next->data==value)
			{
				pre->next=pre->next->next;
				break;
			}
			pre=pre->next;
		}
	}
	void Linked_List::remove_before(int key)
	{
		if(front->next->next==NULL)
		{
			front=front->next;
			//break;
		}
		else if(front->next=NULL)
		{
			cout<<"cant remove";
			//break;
		}
		else
		{
			dabba *pre=front;
			while(pre->next!=NULL)
			{
				if(pre->next->next->data=key)
				{
					pre->next=pre->next->next;
					break;
				}
			}
			pre=pre->next;
		}
	}
	void Linked_List::remove_after(int key)
	{
		if(front->next->next==NULL)
		{
			front=front->next;
			//break;
		}
		else if(front->next=NULL)
		{
			cout<<"cant remove";
			//break;
		}
		else
		{
			dabba *pre=front;
			while(pre->next!=NULL)
			{
				if(pre->next->data==key)
				{
					pre->next=pre->next->next;
					break;
				}
				pre=pre->next;
			}
		
		}
	}
	void Linked_List::print()
	{
		dabba *t=front;
		while(t->next!=NULL)
		{
			cout<<t->data<<"=>";
			t=t->next;
		}
		cout<<t->data<<endl;
		cout<<"null"<<endl;
	}


Linked_List::~Linked_List(void)
{
	delete front;
	/*dabba *ptr;
	for(ptr=front;front;ptr=front)
	{
		front=front->next;
		delete ptr;
	}*/
}
