#include<iostream>
using namespace std;
template <typename t>
struct dabba
{
	t data;
	dabba *next;
	dabba *prev;

	dabba(t info,dabba *N,dabba *P)
	{
		data=info;
		next=N;
		prev=P;
	}
};
template <typename t>
class doubly_LL
{
private:
	dabba <t> *head;
public:
	doubly_LL()
	{
		head =NULL;
	}
	void insert_at_end(t v)
	{
		if(head==NULL)
		{
			head=new dabba<t> (v,NULL,NULL);
		}
		else
		{
			dabba<t> *cur=head;
			while(cur->next!=NULL)
			{
				cur=cur->next;
			}
			dabba <t> *temp=new dabba<t>(v,NULL,NULL);
			temp->prev=cur;
			cur->next=temp;
		}
	}
	void insert_at_begain(t v)
	{
		if(head==NULL)
		{
			head=new dabba<t> (v,NULL,NULL);
		}
		else
		{
			dabba<t> *cur=head;
			if(cur->prev==NULL)
			{
				dabba<t> *temp=new dabba<t>(v,NULL,NULL);
				temp->next=cur;
				cur->prev=temp;
				head=temp;
			}
		}
	}
	void dalete_at_start()
	{
		if(head==NULL)
		{
			cout<<"null";
		}
		head=head->next;
		head->prev=NULL;
	}
	void delete_at_end()
	{
		dabba<t> *cur=head;
		if(cur==NULL)
		{
			cout<<"NULL";
		}
		else
		{
			while(cur->next->next!=NULL)
			{
				cur=cur->next;
			}
			cur->next=NULL;
		}
	}
	void delete_value(t v)
	{
		dabba<t> *cur=head;
		if(cur->data==v)
		{
			cur=cur->next;
			cur->prev=NULL;
			head=cur;
		}
		else
		{
			dabba<t> *temp= new dabba<t> (v,NULL,NULL);
			while(cur->next!=NULL)
			{
				if(cur->next->data==v)
				{
					if(cur->next->next==NULL)
					{
						cur->next=NULL;
						break;
					}
					else if(cur->next->next!=NULL)
					{
						dabba<t> *garb=cur;
						cur->next=cur->next->next;
						cur->prev=garb;
						break;
					}
				}
				cur=cur->next;
			}
		}
	}
	void insert_sort(t value)
	{
		dabba<t> *cur=head;
		if(cur->data>=value)
		{
			insert_at_begain(value);
		}
		else
		{
			while(cur->next!=NULL)
			{
				if(value<=cur->data)
				{
					dabba<t> *temp=new dabba<t>(value,NULL,NULL);
					cur->prev->next=temp;
					temp->prev=cur->prev;
					temp->next=cur;
					cur->prev=temp;
					break;
				}
				cur=cur->next;
			}
			if(cur->data<value)
			{
				insert_at_end(value);
			}
		}
	}
	int get_length(int l)
	{
		dabba *cur=head;
		while(cur!=NULL)
		{
			l++;
			cur=cur->next;
		}
		return l;
	}
	void insert_at_mid(t v)
	{
		dabba<t> *cur=head;
		int k=0;
		int length=0;
		length=get_length(k);
		int i=0;
		while(i<(length/2))
		{
			cur=cur->next;
			i++;
		}
		dabba<t> *temp=new dabba(v,NULL,NULL);
		cur->prev->next=temp;
		temp->prev=cur->prev;
		temp->next=cur;
		cur->prev=temp;
	}
	void insert_before(t key,t value)
	{
		dabba<t> *cur=head;
		if(cur->data==key)
		{
			insert_at_begain(value);
		}
		else
		{
			while(cur!=NULL)
			{
				if(cur->data==key)
				{
					dabba<t> *temp=new dabba<t>(value,NULL,NULL);
					cur->prev->next=temp;
		            temp->prev=cur->prev;
					temp->next=cur;
					cur->prev=temp;
					break;
				}
				cur=cur->next;
			}
		}
	}
	void delete_before(t key)
	{
		dabba<t> *cur=head;
		if(cur->next->data==key)
		{
			cur=cur->next;
			head=cur;
		}
		else
		{
			while(cur!=NULL)
			{
				if(cur->next->next->data==key)
				{
					dabba<t> *garb=cur->next->next;
					cur->next=garb;
					garb->prev=cur;
					break;
				}
				cur=cur->next;
			}
		}
	}
	void delete_after(t key)
	{
		dabba<t> *cur=head;
		while(cur!=NULL)
		{
			if(cur->data==key && cur->next->next==NULL)
			{
				cur->next->prev=NULL;
				cur->next=NULL;
				break;
			}
			else if(cur->data==key)
			{
				dabba<t> *garb=cur->next->next;
				cur->next=garb;
				garb->prev=cur;
				break;
			}
			cur=cur->next;
		}
	}
	void display_reverse()
	{
		dabba<t> *cur=head;
		while(cur->next!=NULL)
		{
			cur=cur->next;
		}
		while(cur!=NULL)
		{
			cout<<cur->data<<"=>";
			cur=cur->prev;
		}
		cout<<endl;
	}
	void sorted_DLL()
	{
		dabba<t> *cur=head;
		while(cur!=NULL)
		{
			int max=cur->data;
			dabba<t> *T=cur->next;
			while(T!=NULL)
			{
				if(max>T->data)
				{
					swap(cur->data,T->data);
					max=cur->data;
				}
				T=T->next;
			}
			cur=cur->next;
		}
	}
	dabba<t> *search(t value)
	{
		dabba<t> *temp=head;
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
	void insert_after(int key,int v)
	{
		dabba<t> *cur=head;
		if(cur->next==NULL && cur->data==key)
		{
			insert_at_end(v);
		}
		else
		{
			while(cur->next!=NULL)
			{
				if(cur->data==key && cur->next==NULL)
				{
					insert_at_end(v);
					break;
				}
				if(cur->next->data==key)
				{
					cur=cur->next->next;
					dabba<t> *temp=new dabba<t>(v,NULL,NULL);
					cur->prev->next=temp;
		            temp->prev=cur->prev;
					temp->next=cur;
					cur->prev=temp;
					break;
				}
				cur=cur->next;
			}
		}
	}
		void insert_mid_without_count_bounce(int v)
		{
			dabba<t> *cur=head;
			dabba<t> *half=head;
			dabba<t> *full=head;
			while(full!=NULL)
			{
				half=half->next;
				full=full->next->next;
				cur=cur->next;
			}
			cur=cur->next;
			dabba<t> *temp=new dabba<t>(v,NULL,NULL);
			cur->prev->next=temp;
		    temp->prev=cur->prev;
			temp->next=cur;
			cur->prev=temp;
		}
	void print()
	{
		dabba<t> *cur=head;
		while(cur!=NULL)
		{
			cout<<cur->data<<"=>";
			cur=cur->next;
		}
		cout<<endl;
	}
};

int main()
{
	doubly_LL <int> D;
	D.insert_at_end(1);
	D.insert_at_end(100);
	D.insert_at_end(4);
	D.insert_at_end(25);
	D.insert_at_end(6);
	D.insert_at_end(9);
	//D.insert_at_begain(3);
	//D.insert_at_begain(4);
	//D.dalete_at_start();
	//D.delete_at_end();
	//D.delete_value(7);
	//D.insert_sort(3);
	//D.insert_at_mid(3);
	//D.insert_before(4,3);
	//D.delete_before(5);
	//D.delete_after(6);
	//cout<<"search value address"<<' '<<D.search(5)<<endl;
	//D.display_reverse();
	//D.sorted_DLL();
	//D.insert_after(100,3);
	//D.insert_mid_without_count_bounce(5);
	D.print();
}