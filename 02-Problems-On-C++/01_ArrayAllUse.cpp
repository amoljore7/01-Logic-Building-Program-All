#include<iostream>

using namespace std;

#define TRUE	1
#define FALSE	0

typedef int BOOL;

class Array
	{
		protected:
				int *iArr;
				int iLength;
				
		public:
				Array(int size = 5)
					{
						cout<<"\n\t\tInside Default"<<"\n";
						iLength = size;
						iArr = new int[iLength];		
					}	
				
				Array(Array &);
				~Array();
				
				void Accept();
				void Display();
				
				inline void SetData(int,int);
				inline int GetData(int);
				
				inline int GetLength();
	};
	
Array :: Array(Array &ref)
	{
			cout<<"\n\t\tInside Copy"<<"\n";
			this -> iLength = ref.iLength;
			this -> iArr = new int [iLength];
			
			for(int i =0; i< iLength;i++)
				{
					this -> iArr[i] = ref.iArr[i];		
				}	
	}
Array :: ~Array()
	{
			cout<<"\n\t\tInside Destructor"<<"\n";
			if(iArr != NULL)
				{
					delete []iArr;
				}
	}
	
void Array :: Accept()
	{
			cout<<"\n\t\tInside Accept"<<"\n";
			cout<<"\nEnter the No of Element"<<"\n";
			int i =0;
			
			for(i=0;i<this->iLength;i++)
				{
					cout<<"\nEnter Element No :"<<i + 1<<"\n";
					cin>>this->iArr[i];
				}
	}
void Array :: Display()
	{
			cout<<"\n\t\tInside Display"<<"\n";
			cout<<"\nElement of Array Are :"<<"\t";
			
			int i =0;
			
			for(i=0;i< this->iLength;i++)
				{
					cout<<this->iArr[i]<<"\t";
				}
			cout<<"\n";
	}
	
void Array :: SetData(int Index, int Data)
	{
		cout<<"\n\t\tInside SetData"<<"\n";
			if((Index >= iLength)||(Index < 0))
				{
					cout<<"\nPlz Enter Valide INDEX\n";
					return;
				}
			else
				{
					this -> iArr[Index]= Data;
				}
	
		}
		
int Array :: GetData(int Index)
	{
			cout<<"\n\t\tInside GetData"<<"\n";
		if((Index >= iLength) || (Index < 0))
			{
				return -1;
			}
		else
			{
				cout<<"\nIndex No "<<Index<<" Value is : \t";
				return(this -> iArr[Index]);
			}
			
	}
	 
int Array :: GetLength()
	{
		cout<<"\n\t\tInside GetLength"<<"\n";
		cout<<"\nLength of Element is : ";	
		return(this -> iLength);
	 } 	
	
int main(int argc, char* argv[])
	{
		cout<<"\n\t\tInside Main"<<"\n";
		int size =0;
		int Index =0,Data=0;
		cout<<"\nEnter The size of Array : ";
		cin>>size;
		
		Array *ptr = new Array(size);
		
		Array obj1;
		
		ptr -> Accept();
		ptr -> Display();
		
		cout<<"\nSet Data Enter Index No : "<<"\t";
		cin>>Index;
		cout<<"\nSet Data Enter Data No : "<<"\t";
		cin>>Data;
		
		ptr -> SetData(Index,Data);
		ptr ->  Display();
		cout<<"\nGet Data Enter Index No : "<<"\t";
		cin>>Index;
		cout<<ptr -> GetData(Index);	
		cout<<ptr -> GetLength();
		
		Array obj2 = obj1;
		ptr -> Display();	
			
	return 0;
		
	}

