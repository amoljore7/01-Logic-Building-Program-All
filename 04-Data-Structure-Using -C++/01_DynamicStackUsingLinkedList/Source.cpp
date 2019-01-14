#include<iostream>
using namespace std;

struct Node
	{
		int Data;
		struct Node *Next;
	};

class Stack
	{
		private:
			
			struct Node *Head;
			
		public:
			
			Stack();
			~ Stack();
			
			void Push(int);
			int Pop();
			int Peep();
			void Display();
			int Count();
	};
	
int main(int argc, char* argv[])
{
	cout<<"\n\t\tSTACK Implenetation LIFO\n\n";
	cout<<"\t-------------------------------------------\n\n";
	
	Stack obj1;
	Stack obj2;
	
	obj1.Push(11);
	obj1.Push(21);
	obj1.Push(51);
	
	obj2.Push(101);
	obj2.Push(111);
	obj2.Push(121);
	obj2.Push(151);
	
	cout<<"Obj1 Count\t"<<obj1.Count()<<"\n";
	cout<<"Obj2 Count\t"<<obj2.Count()<<"\n\n";
	
	cout<<"Obj1 PUSH\t";
	obj1.Display();
	
	cout<<"Obj2 PUSH\t";
	obj2.Display();
	
	cout<<"Obj1 POP\t";
	cout<<obj1.Pop()<<"\n\n";
	
	cout<<"Obj2 POP\t";
	cout<<obj2.Pop()<<"\n\n";
	
	cout<<"Obj1 Display\t";
	obj1.Display();
	
	cout<<"Obj2 Display\t";
	obj2.Display();
	
	cout<<"Obj1 PEEP\t";
	cout<<obj1.Peep()<<"\n\n";
	
	cout<<"Obj2 PEEP\t";
	cout<<obj2.Peep()<<"\n\n";
	
	cout<<"\n\tDestructor For Obj1 AND Obj2 CALL Implicitly\n\n";
	
	return 0;	
}

Stack :: Stack()
	{
		Head = NULL;	
	}

void Stack :: Push(int iValue)
	{
		struct Node *newNode = NULL;
		
		newNode = new struct Node;
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;	
		
		if(Head == NULL)
			{
				Head = newNode;
			}
		else
		{
			newNode -> Next = Head;
			Head = newNode;
		}
	}
	
int Stack :: Pop()
	{
		struct Node *Temp = Head;
		int iRet = 0;
		
		Head = Temp -> Next;
		iRet = Temp -> Data;
		delete Temp;
		
		return iRet;
			
	}
	
	
	
void Stack :: Display()
	{
	
		struct Node *Temp = Head;
		
		while(Temp != NULL)
			{
				cout<<Temp -> Data<<"\t";
				Temp = Temp -> Next;
			}
		cout<<"\n\n";
	}
		
int Stack :: Count()
	{
	
		struct Node *Temp = Head;
		int iCnt = 0;
		
		while(Temp != NULL)
			{
				iCnt++;
				Temp = Temp -> Next;
			}
		cout<<"\n\n";
		return iCnt;
	}
int Stack :: Peep()
	{
		if(Head == NULL)
			{
				cout<<"Stack Is NULL\n";
				return 0;
			}
		else
			{
				return(Head -> Data);
			}
	}
Stack :: ~Stack()
	{
		struct Node *Temp = Head;
		
		while(Head != NULL)
			{
				Head = Head -> Next;
				delete Temp;
				Temp = Head;
			}
		
	}	
	
	
	
