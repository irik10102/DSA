#include<iostream>
#include<cstdlib>
using namespace std;

template< class T=int >
class dynamic_stack
{
	struct node
	{
		T data;
		node* next;
	};
	
	node* top;
	
	public:
		
		dynamic_stack()
		{
			top = NULL;                  //intially empty
		}
		
		void push(int n)                // since stack is dynamic so no need check for overflow condition
		{
			node* temp = new node;
			temp->data = n;
			temp->next = top;
			top = temp;
		}
		
		T pop()
		{
			try
			{
				if(top == NULL)		// stack underflow check
					throw -1;
				else
				{
					node* temp = top;
					int n = top->data;
					top = top->next;
					delete temp;
					
					return n;
				}
			}
			catch(int)
			{
				cout<<"Underflow!"<<endl;
				exit(1);
			}
		}
		
		T peek()
		{
			try
			{
				if(top == NULL)
					throw -1;
				else
					return top->data;
			}
			catch(int)
			{
				cout<<"Underflow!"<<endl;
				exit(1);
			}
		}
		
		void display()
		{
			node* temp = top;
			try
			{
				if(top == NULL)
					throw -1;
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
				cout<<"Stack Empty"<<endl;
				return;
			}
		}

};

int main()
{
	dynamic_stack<> s;
	int ch,n;
	
	while(1)
	{
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Peek"<<endl;
		cout<<"4.Display"<<endl;
		cout<<"5.Exit"<<endl;
		
		cout<<"\n\nEnter Your Choice:";
		cin>>ch;
		cout<<endl;
		
		switch(ch)
		{
			case 1:
					
				cout<<"Enter Element to push: ";
				cin>>n;
				cout<<endl;
				s.push(n);
				break;
			
			case 2:
				s.pop();
				break;
			
			case 3:
				cout<<s.peek()<<endl;
				break;
				
			case 4:
				s.display();
				break;
			
			case 5:
				exit(1);
				
			default:
				cout<<"Invalid Choice!"<<endl;
		}
	}
	
	return 0;
}
