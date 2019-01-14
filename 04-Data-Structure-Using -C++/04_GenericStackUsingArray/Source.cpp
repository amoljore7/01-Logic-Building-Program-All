#include<iostream>
using namespace std;

struct Node
	{
		int Data;
		struct Node *Next;
	};

template <class T>
class Stack
	{
		protected:
			
			T *ptr;
			int iSize;
			int Top;
			
		public:
			Stack(int iLength = 5)
				{
					this -> iSize = iLength;
					this -> Top = -1;
					this -> ptr = new T[iSize];
				}
						~Stack();
			
			void Push(T);
			T Pop();
		
	};
template <class T>
void Stack <T> :: Push( T iValue)
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
template <class T>
T Stack <T> :: Pop()
	{
		if(Top == -1)
			{
				cout<<"\nStack Is Empty\n";
				return -1;	
			}
		else
			{
				T iRet =ptr[Top];
				Top --;
				return iRet;
			}
	}
template <class T>
Stack <T> :: ~Stack()
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
	
		Stack <int> obj1;
		Stack <char> obj2;
		
		obj1.Push(11);
		obj1.Push(21);
		obj1.Push(51);
		obj1.Push(101);
		obj1.Push(111);
		
		cout<<obj1.Pop()<<"\t";
		cout<<obj1.Pop()<<"\t";
		cout<<obj1.Pop()<<"\t";	
		cout<<obj1.Pop()<<"\t";
		cout<<obj1.Pop()<<"\t";
		
		cout<<"\n\n";
		
		obj2.Push('A');
		obj2.Push('B');
		obj2.Push('C');
		obj2.Push('D');
		obj2.Push('E');
		
		cout<<obj2.Pop()<<"\t";
		cout<<obj2.Pop()<<"\t";
		cout<<obj2.Pop()<<"\t";
		cout<<obj2.Pop()<<"\t";
		cout<<obj2.Pop()<<"\t";	
	
	cout<<"\n\n\n\tDestructor For Obj1 AND obj2 CALL Implicitly\n\n";
	
	return 0;	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
