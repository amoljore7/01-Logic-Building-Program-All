#include<iostream>

using namespace std;

struct Node
	{
		int Data;
		struct Node *Next;
		struct Node *Prev;
		
	};
	
class DoublyCircularLinkedList
	{
		private:
			struct Node *Head;
			struct Node *Tail;
			int iSize;
			
		public:
			DoublyCircularLinkedList();
			~DoublyCircularLinkedList();
			
			void InsertFirst(int);
			void InsertLast(int);
			void InsertAtPos(int,int);
			
			void DeleteFirst();
			void DeleteLast();
			void DeleteAtPos(int);
			
			void DisplayF();
			void DisplayB();
			
			int Count();
	};
	
int main(int argc, char* argv[])
	{
		printf("\n\t\tDoubly Circular Linked List\n");
		printf("\n\t-------------------------------------------\n\n");
		DoublyCircularLinkedList obj1;
		
		obj1.InsertFirst(11);
		obj1.InsertFirst(21);
		obj1.DisplayF();
		obj1.DisplayB();
		
		obj1.InsertLast(51);
		obj1.InsertLast(101);
		obj1.DisplayF();
		obj1.DisplayB();
		
		obj1.InsertAtPos(111,4);
		obj1.DisplayF();
		obj1.DisplayB();
		
		obj1.DeleteFirst();
		obj1.DisplayF();
		obj1.DisplayB();
		
		obj1.DeleteLast();
		obj1.DisplayF();
		obj1.DisplayB();
		
		obj1.DeleteAtPos(1);
		obj1.DisplayF();
		obj1.DisplayB();
		
		cout<<"\nSIZE of Node     = "<<obj1.Count();
			
		return 0;
	}
	
DoublyCircularLinkedList ::	DoublyCircularLinkedList()
	{
			cout<<"\t\tIn Default Contructor\n\n";
			cout<<"Head = NULL\nTail = NULL\niSize = 0\n\n";
			Head = NULL;
			Tail = NULL;
			iSize = 0;
	}
DoublyCircularLinkedList ::	~DoublyCircularLinkedList()
	{
		cout<<"\n\n\t\t In Destructor DeAllocating The All Node\n\n";
		struct Node *Temp = Head;
		int i = 0;
		
		for(i=0;i<=iSize;i++)
			{
				Head = Head -> Next;
				delete Temp;
				Temp = Head;
				iSize--;
			}
		cout<<"After DeAlocating Memory SIZE of Node = "<<iSize;
	}
			
void DoublyCircularLinkedList :: InsertFirst(int iValue)
	{
		cout<<"\t\tInsert First\n\n";
			struct Node *newNode = NULL;
			
			newNode = new struct Node;
			
			newNode -> Data = iValue;
			newNode -> Next = NULL;
			newNode -> Prev = NULL;
			
			if((Head == NULL) && (Tail == NULL) && (iSize == 0))	
				{
					Head = newNode;
					Tail = newNode;
				} 
			else
				{
					newNode -> Next = Head;
					Head -> Prev = newNode;
					Head = newNode;	
				}
			Tail -> Next = Head;
			Head -> Prev = Tail;
			iSize++;
	}
void DoublyCircularLinkedList :: InsertLast(int iValue)
	{
		cout<<"\n\t\tInsert Last\n\n";
		
		struct Node *newNode = NULL;
		
		newNode = new struct Node;
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		newNode -> Prev = NULL;
		
		if((Head == NULL) && (Tail == NULL) && (iSize == 0))
			{
					Head = newNode;
					Tail = newNode;
			}
		else
			{
				Tail -> Next = newNode;
				newNode -> Prev = Tail;
				Tail = newNode;	
			}
		Tail -> Next = Head;
		Head -> Prev = Tail;
		iSize++;
	}
void DoublyCircularLinkedList :: InsertAtPos(int iValue,int iPos)
	{
		cout<<"\n\t\tInsert At Position\n\n";
		
		if((iPos < 1) || (iPos > (iSize +1 )) )
			{
				cout<<"\n\t\tEnter Valide Position\n\n";
				return ;
			}
		if(iPos ==1)
			{
				InsertFirst(iValue);
				
			}
		else if(iPos == (iSize + 1) )
			{
				InsertLast(iValue);
			}
		else
			{
				struct Node *newNode = NULL;
				struct Node *Temp = Head;
				int i = 0;
				
				newNode = new struct Node;
				
				newNode -> Data = iValue;
				newNode -> Next = NULL;
				newNode -> Prev = NULL;
				
				for(i=1; i <= (iPos -2); i++)
					{
						Temp = Temp -> Next;
					}
				newNode -> Next = Temp -> Next;
				newNode -> Next -> Prev = newNode;
				Temp -> Next = newNode;
				newNode -> Prev = Temp;
				iSize++;
				
			}
	}
			
void DoublyCircularLinkedList :: DeleteFirst()
	{
			cout<<"\n\t\tDelete First\n\n";
			
			if((Head == NULL) &&(Tail == NULL)&&(iSize == 0))
				{
					cout<<"Linked List NULL\n";
				}
			else if(Head == Tail)
				{
					delete Head;
					Head = NULL;
					Tail = NULL;
				}
			else
				{
					struct Node *Temp = Head;
					Head = Head -> Next;
					delete Temp;	
				}
			Tail -> Next = Head;
			Head -> Prev = Tail;
			iSize--;
	}
void DoublyCircularLinkedList ::  DeleteLast()
	{
				cout<<"\n\t\tDelete Last\n\n";
				
			if((Head == NULL) && (Tail == NULL)&&(iSize == 0))
				{
					cout<<"Linked List NULL\n";
				}
			else if(Head == Tail)
				{
					delete Head;
					Head = NULL;
					Tail = NULL;
				}
			else
				{
					struct Node *Temp = Tail;
					Tail = Temp -> Prev;
					delete Temp;	
				}
			Tail -> Next = Head;
			Head -> Prev = Tail;
			iSize--;
				
	}
void DoublyCircularLinkedList :: DeleteAtPos(int iPos)
	{
				cout<<"\n\t\tDelete At Position\n\n";
				
				if((iPos < 1) || (iPos > iSize))
					{
						cout<<"\n\t\tEnter Valide Position\n";
						return ;
					}
				if(iPos == 1)
					{
						DeleteFirst();
					}
				else if(iPos == iSize)
					{
						DeleteLast();
					}
				else
					{
						struct Node *Temp = Head;
						int i =0;
						for(i =1; i<=(iPos-2);i++)
							{
								Temp = Temp -> Next;		
							}	
						Temp -> Next = Temp -> Next -> Next;
						delete Temp -> Next -> Prev;
						Temp -> Next -> Prev = Temp;
						iSize--;	
					}
		
	}
			
void DoublyCircularLinkedList :: DisplayF()
	{
		cout<<"Display Forword  =\t";
		do
		{
			cout<<Head -> Data<<"\t";
			Head = Head -> Next;	
		}while(Head != Tail -> Next);
		cout<<"NULL\n";
		cout<<"\n";
	}
void DoublyCircularLinkedList :: DisplayB()
	{
		cout<<"Display Backword =\t";
		cout<<"NULL\t";
		do
		{
			cout<<Tail -> Data<<"\t";
			Tail = Tail-> Prev;	
		}while(Tail != Head -> Prev);
		cout<<"\n";
	}
			
int DoublyCircularLinkedList ::	 Count()
	{
		return iSize;
		
	}
