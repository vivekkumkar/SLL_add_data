#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			next=NULL;
		}
		
		Node(int x)
		{
			data=x;
			next=NULL;
		}
};

class SLL
{
	Node *head;;
	public:
		SLL()
		{
			head=NULL;
		}
		
		void createList();
		void show();
		void addatbeg(int x);
		void addatend(int x);
};

int main()
{
	SLL obj1;
	cout<<"Enter List"<<endl;
	obj1.createList();
	cout<<"\nShowing List:-\n"<<endl;
	obj1.show();  
	                   
	int x;
	cout<<"\n\nEnter data to add at beginning : ";
	cin>>x;
	obj1.addatbeg(x);
	cout<<"\n\n Showing List after addatbeg : ";
	obj1.show();
	cout<<"\n\n Enter data to add ar end : ";
	cin>>x;
	obj1.addatend(x);
	cout<<"\n Showing List after addatend : ";
	obj1.show();
	
}


void SLL::createList()
{
	int n,x;
	cout<<"\n Enter number of nodes : ";
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"\n Enter data : ";
	cin>>x;
	
	head=new Node(x);
	Node *p;
	p=head;
	
	for(int i=1;i<=n-1;i++)
	{
		cout<<"\n Enter data : ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}

void SLL::show()
{
	if(head==NULL)
	{
		cout<<"\n List is Empty ";
		return;
	}
	Node *p;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void SLL::addatbeg(int x)
{
	Node *p;
	p=new Node(x);
	
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head=p;
	}
}

void SLL::addatend(int x)
{
	Node *p;
	p=new Node(x);
	
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		Node *q;
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}

