#include<iostream>
#include<cstdlib>
using namespace std;

template<class T=int>
class dynamic_queue
{
	
	struct node
	{
		T data;
		node* next;
	};
	
	node* head;
	node* tail;
	
	public:
		
		dynamic_queue()
		{
			head=tail=NULL;
		}
		
		void enqueue(T n)
		{
			node* temp = new node();
			
			try
			{
				if( temp == NULL)
					throw 0;
				else
				{
					temp->data = n;
					temp->next=NULL;
					
					if(head == NULL ) //queue contains no element at all
						head = temp;
						
					else
						tail->next = temp;
					
					
					tail = temp;
				}
			}
			catch(int)
			{
				cout<<"Memory is not allocated"<<endl;
				return;
			}
		}
		
		T dequeue()
		{
			node* temp = head;
			
			try
			{
				if(head == NULL) // queue contains no element
					throw 0;
				else
				{
					T x = head->data;
					
					if(head == tail) //queue contains only one element 
						head=tail=NULL;
					else
						head=head->next;
					
					delete temp;
					return x;
				}
			}
			catch(int)
			{
				cout<<"Queue Underflow!"<<endl;
				exit(1);
			}
		}
		
		void display()
		{
			node *temp = head;
			
			try
			{
				if(head == NULL)
					throw 0;
				else
				{
					while(temp != NULL)
					{
						cout<<temp->data<<"   ";
						temp=temp->next;
					}
					cout<<endl;
				}
			}
			catch(int)
			{
				cout<<"Queue is empty"<<endl;
				return;
			}
		}
	
};

int main()
{
	dynamic_queue<> q;
	int ch,n;
	
	while(1)
	{
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"\n\nEnter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter element: ";
				cin>>n;
				cout<<endl;
				q.enqueue(n);
				break;
				
			case 2:
				n=q.dequeue();
				cout<<n<<" is dequeued..." <<endl;
				break;
				
			case 3:
				q.display();
				break;
				
			case 4:
				exit(1);
				
			default:
				cout<<"Invalid Choice!";
				
		}
	}
	
	return 0;
}
				
				
					
					
					
					