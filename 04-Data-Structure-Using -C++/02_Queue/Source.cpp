#include<iostream>
using namespace std;

struct Node 	
	{
		int Data;
		struct Node *Next;
	};

class Queue
	{
		private:
			
			struct Node *Head;
			
		public:
			
			Queue();
			Queue(Queue &);
			~ Queue();
			
			void EnQueue(int);
			int DeQueue();
			void Display();
			int Count();
					
	};

int main(int argc, char* argv[])
	{
		cout<<"\n\t\tQUEUE Implenetation FIFO\n\n";
	cout<<"\t-------------------------------------------\n\n";
	
		Queue obj1;
		Queue obj2;
	
		
		obj1.EnQueue(11);
		obj1.EnQueue(21);
		obj1.EnQueue(51);
		
		obj2.EnQueue(101);
		obj2.EnQueue(111);
		obj2.EnQueue(121);
		obj2.EnQueue(151);
	
		cout<<"\n\nObj1 EnQueue\t";
		obj1.Display();
		
		cout<<"\n\nObj2 EnQueue\t";
		obj2.Display();
		
		cout<<"\n\nObj1 DeQueue\t";
		cout<<obj1.DeQueue();
		
		cout<<"\n\nObj2 DeQueue\t";
		cout<<obj2.DeQueue();
		
		cout<<"\n\nObj1 Display\t";
		obj1.Display();
		
		cout<<"\n\nObj2 Display\t";
		obj2.Display();
		
		
		cout<<"\n\nCopy Contructor\t";
		cout<<"\n\nObj3 Display\t";
		Queue obj3(obj2);
		obj3.Display();
		
		cout<<"Obj1 Count\t"<<obj1.Count()<<"\n";
		cout<<"Obj2 Count\t"<<obj2.Count()<<"\n\n";
		cout<<"Obj3 Count\t"<<obj3.Count()<<"\n\n";
		
		cout<<"\n\n\tDestructor For Obj1 AND Obj2 AND Obj3 CALL Implicitly\n\n";
		cout<<"\n";
	   	return 0;
	}
	
Queue :: Queue()
	{
		Head = NULL;
	}
	
void Queue :: EnQueue(int iValue)
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
				struct Node *Temp = Head;
				
				while(Temp -> Next != NULL)
					{
						Temp = Temp -> Next;
					}
				Temp -> Next = newNode;
			}
		
	}
	
void Queue :: Display()
	{
		struct Node *Temp = Head;
		
		while(Temp != NULL)
			{
				cout<<Temp -> Data<<"\t";
				Temp = Temp -> Next;
			}
	}
int Queue :: Count()
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
	
int Queue :: DeQueue()
	{
		struct Node *Temp = Head;
		int iRet = 0;
		
		Head = Head -> Next;
		
		iRet = Temp -> Data;
		delete Temp;
		
		return iRet;
	}

Queue :: Queue(Queue &ref)
	{
		
		struct Node *newNode = NULL;		
		struct Node *Temp1 = ref.Head;
		struct Node *Temp2 = NULL;
			Head = NULL;
			
		while(Temp1 != NULL)
			{
				newNode = new struct Node;
				
				newNode -> Data = Temp1 -> Data;
				newNode -> Next = NULL;
				
					if(Head == NULL)
						{
							Head = newNode;
							Temp2 = Head;
						}
					else
						{
							Temp2 -> Next = newNode;
							Temp2 = Temp2 -> Next;
						}
				Temp1 = Temp1 -> Next;
			}
	
			
	}	
	
Queue :: ~Queue()
	{
		struct Node *Temp = Head;
		
		while(Head != NULL)
			{
				Head = Head -> Next;
				delete Temp;
				Temp = Head;
			}
		
	}	
	
	
	
	
	
	
