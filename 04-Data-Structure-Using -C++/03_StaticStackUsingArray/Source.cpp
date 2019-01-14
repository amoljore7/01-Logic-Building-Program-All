#include<iostream>
using namespace std;

struct Node
	{
		int Data;
		struct Node *Next;
	};

class Stack
	{
		protected:
			
			int *ptr;
			int iSize;
			int Top;
			
		public:
			Stack(int iLength = 5)
				{
					this -> iSize = iLength;
					this -> Top = -1;
					this -> ptr = new int[iSize];
				}
						~Stack();
			
			void Push(int);
			int Pop();
		
	};

void Stack:: Push( int iValue)
	{
		if(((this -> iSize) -1 ) == this -> Top)
			{
				cout<<"\nStack Is Full\n";
				cout<<"\nData of Last Node is : ";
				return;
			}
		else
			{
				++Top;
				ptr[Top] = iValue;
			}
	}
int Stack:: Pop()
	{
		if(Top == -1)
			{
				cout<<"\nStack Is Empty\n";
				return -1;	
			}
		else
			{
				int iRet = 0;
				iRet = ptr[Top];
				Top --;
				return iRet;
			}
	}
Stack :: ~Stack()
	{
		if(this -> ptr != NULL)
			{
				delete []ptr;
			}
	}

	
int main(int argc, char* argv[])
{
	cout<<"\n\t\tSTACK Implenetation LIFO\n\n";
	cout<<"\t-------------------------------------------\n\n";
	
		Stack obj1;
		
		obj1.Push(11);
		obj1.Push(21);
		obj1.Push(51);
		obj1.Push(101);
		obj1.Push(111);
	//	obj1.Push(121);
		
		cout<<obj1.Pop()<<"\t";
		cout<<obj1.Pop()<<"\t";
		cout<<obj1.Pop()<<"\t";		
	
	cout<<"\n\n\n\tDestructor For Obj1 CALL Implicitly\n\n";
	
	return 0;	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
