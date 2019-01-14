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

	void InsertLast(struct Node**, int);
	void Display(struct Node*);
	
	int ConcatList(struct Node **,struct Node **);
	int ConcatFirstN(struct Node **,struct Node **,int);
	int ConcatListRange(struct Node **,struct Node **,int,int);
	int LLCopy(struct Node *,struct Node **);
	int LLNCopy(struct Node *,struct Node **,int);

	


		
int main(int argc, char *argv[])
{
	printf("\n------------------------Assingment No 32 All Operation-----------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;	
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		int iStart = 0;
		int iEnd = 0;
		
		struct Node *first = NULL;
		struct Node *second = NULL;
	
		int iCnt=0;						
		
		while(1)
		{
		
		printf("01.Insert Source LL\n02.Insert Destination LL\n03.Display Source LL\n04.Display Destination LL\n05.Concat List\n06.Concat First N\n07.Concat List Range\n08.LL Copy\n09.LLN Copy\n10.EXIT\n\n");

		printf("Enter Your Choice\t");
		scanf_s("%d",&iChoice);
		printf("\n");
		
		switch(iChoice)
			{
				case 1:
					{
						printf("Enter Value To FIRST LL \t");
						scanf_s("%d",&iValue);
						InsertLast(&first, iValue);
						break;	
					 } 
				case 2:
					{
						printf("Enter Value To Second LL \t");
						scanf_s("%d",&iValue);
						InsertLast(&second, iValue);
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
						ConcatList(&first,&second);
						printf("\n\nAfter Concatination Of Two Linked List => ");
						Display(second);
						break;
					}
				case 6:
					{	
						printf("Enter How Many Node Concat iN LL \t");
						scanf_s("%d",&iValue);	
										
						ConcatFirstN(&first,&second,iValue);
						printf("\n\nAfter Concatination Of Two Linked List => ");
						Display(second);
						break;
					}
				case 7:
					{
							printf("Enter Range START Node iN LL \t");
							scanf_s("%d",&iStart);
							printf("Enter Range END Node iN LL \t");
							scanf_s("%d",&iEnd);
							
							ConcatListRange(&first,&second,iStart,iEnd);
							printf("\n\nAfter Concatination Of Two Linked List => ");
							Display(second);
							break;
					}
				case 8:
					{
						LLCopy(first,&second);
						printf("\n\n After Copying Node of  Dest. linked list is=> ");
						Display(second);
						break;
					}
				case 9:
					{
						printf("Enter Value To Display First Node iN LL \t");
						scanf_s("%d",&iValue);
						
						LLNCopy(first,&second,iValue);

						printf("\n\n After Copying Node of Dest. linked list is=> ");
						Display(second);
						break;
					}
				case 10: 
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

void InsertLast(struct Node **Head, int iValue)
	{
		printf("\tInsert First\n");
		struct Node *newNode = NULL;
		struct Node *Temp = NULL;
		
		newNode =(struct Node*)malloc(sizeof(struct Node));
		
		newNode ->Data = iValue;
		newNode ->Next = NULL;
		
		if(*Head == NULL)
			{
				*Head = newNode;
			}
		else
			{
				Temp = *Head;
				while(Temp -> Next != NULL)
					{
						Temp = Temp -> Next;
					}
				Temp -> Next = newNode;
			}
	}

void Display(struct Node *Head)
	{	
		if(Head != NULL)
		{
			while(Head != NULL)
				{
					printf(" %d -->",Head ->Data);
					Head = Head -> Next;
				}
			}
		else
			{
				printf("\n Your Linked List is NULL\n");		
			}	
			
		
	}
int ConcatList(struct Node **Src,struct Node **Dest)
	{
		struct Node *Temp = *Dest;
		
		if((*Src == NULL) || (*Dest == NULL))
			{
				printf("\n Your Linked List is NULL\n");
				return -1;
			}
			
		while(Temp -> Next != NULL)
			{
				Temp = Temp -> Next;
			}
		Temp -> Next = *Src;
	}
int ConcatFirstN(struct Node **Src,struct Node **Dest,int iValue)
	{
		struct Node *Temp1 = *Dest;
		struct Node *Temp2 = *Src;
		
		if((NULL == *Src) || (NULL == *Dest))
			{
				printf("\n Your Linked List is NULL\n");
				return -1;	
			}
		
		while(Temp1 -> Next != NULL)
			{
				Temp1 = Temp1 -> Next;
			}
		Temp1 -> Next = *Src;
		
		
		while((Temp1 -> Next != NULL) && (iValue != 0))
			{
				Temp1 = Temp1 -> Next;
				iValue--;
			}
			
		if(Temp1 -> Next != NULL)
			{
				Temp2 = Temp1 -> Next;
				Temp1 -> Next = NULL;
				
				Temp1 = Temp2 -> Next;
		
			}
		return 1;
	}
int ConcatListRange(struct Node **Src,struct Node **Dest,int iStart,int iEnd)
	{
		struct Node *Temp1 = *Dest;
		struct Node *Temp2 = *Src;
		
		if(*Src == NULL  || *Dest == NULL)
			{
				printf("\n Your Linked List is NULL\n");
				return -1;
			}
		
		while(Temp1 -> Next != NULL)
			{
				Temp1 = Temp1 -> Next;
			}
			
		while( ((iStart -1)!= 0) && (Temp2 != NULL))
			{
				Temp2 = Temp2 -> Next;
				iStart--;
				iEnd--;
			}
			
		while(iEnd != 0  &&  Temp2 != NULL)
			{
				InsertLast(Dest,Temp2 -> Data);
				Temp2 = Temp2 -> Next;
				iEnd--;
			}
		return -1;
	}
int LLCopy(struct Node *Src,struct Node **Dest)
	{
		struct Node *Temp1 = *Dest;
		struct Node *newNode = NULL;
		
		if(Src == NULL)
			{
				return -1;	
			}
		
		while(Src != NULL)
			{
				newNode = (struct Node*)malloc(sizeof(struct Node));
		
			if(newNode == NULL)
				{
					return -1;
				}
				
				newNode -> Data = Src -> Data;
				newNode -> Next = NULL;
				
				if(*Dest == NULL)
					{
						*Dest = Temp1 = newNode;
					}
				else
					{
						Temp1 -> Next = newNode;
						Temp1 = newNode;
					}
				Src = Src -> Next;
			}
		
		return 1;						
	}
int LLNCopy(struct Node *Src,struct Node **Dest,int iValue)
	{
		struct Node *Temp = *Dest;
		struct Node *newNode = NULL;
		
		if((Src == NULL) || (iValue <= 0))
			{
				return -1;
			}
		
		while((Src != NULL) &&(iValue != 0))
			{
				newNode = (struct Node*)malloc(sizeof(struct Node));
					if(newNode == NULL)
						{
							return -1;
						}
				newNode -> Data = Src -> Data;
				newNode -> Next = NULL;
				
				if(*Dest == NULL)
					{
						*Dest = Temp = newNode;
					}
				else
					{
						Temp -> Next = newNode;
						Temp = newNode;
					}
				Src = Src -> Next;
				iValue--;
			}
		return -1;	
	}






























