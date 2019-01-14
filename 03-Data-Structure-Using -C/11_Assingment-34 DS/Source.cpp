#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define TRUE	1
#define FALSE	0

typedef int BOOL;

struct Node 
{
	int Data;
	struct Node *Next;
};

	void InsertFirst(struct Node**, int);
	void Display(struct Node*);
	
	int Swap(struct Node**);
	int InsertAtPos(struct Node*,struct Node**, int);

	int CountSrc(struct Node*);
	int CountDest(struct Node*);
	


		
int main(int argc, char *argv[])
{
	printf("\n------------------------Assingment No 34 All Operation-----------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;
		
		struct Node *first = NULL;
		struct Node *second = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		
		while(1)
		{
		
		printf("01.Insert Source LL\n02.Insert Destination LL\n03.Display Source LL\n04.Display Destination LL\n05.Swap\n06.Insert At Position\n07.Count Node Source\n08.Count Node Dest\n09.EXIT\n\n");

		printf("Enter Your Choice\t");
		scanf("%d",&iChoice);
		printf("\n");
		
		switch(iChoice)
			{
				case 1:
					{
						printf("Enter Value To FIRST LL \t");
						scanf("%d",&iValue);
						InsertFirst(&first, iValue);
						break;	
					 } 
				case 2:
					{
						printf("Enter Value To Second LL \t");
						scanf("%d",&iValue);
						InsertFirst(&second, iValue);
						break;	
					 }
						
				case 3: 
					{
						printf("\n\n FIRST Linked list is => ");
						Display(first);
						break;	
					}
						
				case 4:
					{
						printf("\n\n Second Linked list is => ");
						Display(second);
						break;				
					}
				case 5:
					{
						Swap(&first);
						printf("\n\n After Swaping linked list is => ");
						Display(first);
						break;				
					}
				case 6:
					{
						printf("Enter Position To Insert LL \t");
						scanf("%d",&iValue);
						InsertAtPos(first,&second,iValue);
						printf("\n\n After inserting source list into dest list => ");
						Display(second);
					
						break;				
					}
			
				
				case 7: 
					{
						bRet = CountSrc(first);
						printf("\nCount Of Source Node In linked list is => %d",bRet);
						break;
					}
				case 8: 
					{
						bRet = CountDest(second);
						printf("\nCount Of Destination Node In linked list is =>%d",bRet);
						break;
					}				
				case 9: 
					{
						exit(0);
					}
				default:
					{
						printf("\nPLz Enter Valide Operation\n");
					
						break;	
					}
					
			}
			printf("\n---------------------------------------------------------------------------------------\n");
			printf("\n");
	}
	
	return 0;
}

void InsertFirst(struct Node **Head, int iValue)
	{
		printf("\tInsert First\n");
		struct Node *newNode = NULL;
		
		newNode =(struct Node*)malloc(sizeof(struct Node));
		
		newNode ->Data = iValue;
		newNode ->Next = NULL;
		
		if(*Head == NULL)
			{
				*Head = newNode;
			}
		else
			{
				newNode -> Next = *Head;
				*Head = newNode;
			}
	}

void Display(struct Node *Head)
	{	
		
		while(Head != NULL)
			{
				printf(" %d -->",Head ->Data);
				Head = Head -> Next;
			}
		
	}

int CountSrc(struct Node *Src)
	{
		int iCount=0;
	
		if(Src != NULL)
			{
				while(Src != NULL)
				{
					Src = Src -> Next;
					iCount++;
				}
			}
		else
			{
				printf("\nNode Node In LL\n");
				return 0;
			}
		return iCount;	
	}
int CountDest(struct Node *Dest)
	{
		int iCount=0;
	
		if(Dest != NULL)
			{
					while(Dest != NULL)
					{
						Dest = Dest -> Next;
						iCount++;
					}
			}
		else
			{
				printf("\nNode Node In LL\n");
				return 0;
			}
		return iCount;	
	}
	
int Swap(struct Node **Src)
	{
		struct Node *Temp1=*Src;
		struct Node *Temp2=(*Src)->Next;
		struct Node *Temp3=NULL;
	
		if(*Src == NULL || (*Src)->Next == NULL)
		{
			return -1;
		}
	
		while(Temp2!=NULL)
		{
			if(Temp1==*Src && Temp2==Temp1->Next)
			{
				Temp1->Next=Temp2->Next;
				Temp2->Next=*Src;
				*Src=Temp2;
			}
			else 
			{
				Temp3=*Src;
				while(Temp3->Next!=Temp1 && Temp3->Next!=NULL)
				{
					Temp3=Temp3->Next;
				}
				Temp3->Next=Temp1->Next;
				Temp1->Next=Temp2->Next;
				Temp2->Next=Temp1;
			}
			Temp1=Temp1->Next;
			if(Temp1==NULL)
				break;
			Temp2=Temp1->Next;
		}

	}
int InsertAtPos(struct Node *Src,struct Node **Dest, int iValue)
	{
		struct Node *Temp1=*Dest;
		 struct Node *Temp2 = Src;
	
		 if(Src == NULL || *Dest == NULL)
		 {
			return -1;
		 }
	
		 while(iValue - 2 && Temp1->Next != NULL)
		 {
			Temp1 = Temp1 -> Next;
			iValue--;
		 }
		 while(Temp2 -> Next != NULL)
		 {
			Temp2 = Temp2 -> Next;
		 }
		 Temp2->Next=Temp1->Next;
		 Temp1 -> Next = Src;
	
		return 1;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	





