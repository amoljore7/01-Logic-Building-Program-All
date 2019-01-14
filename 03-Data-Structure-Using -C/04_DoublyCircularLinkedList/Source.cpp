#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
	{
		int Data;
		struct Node *Next;
		struct Node *Prev;
	};
	
	void InsertFirst(struct Node**,struct Node**,int);
	void InsertLast(struct Node**,struct Node**,int);
	void InsertAtPos(struct Node**,struct Node**,int,int);
	
	void DeleteFirst(struct Node**,struct Node**);
	void DeleteLast(struct Node**,struct Node**);
	void DeleteAtPos(struct Node**,struct Node**,int);
	
	void DisplayF(struct Node*,struct Node*);
	void DisplayB(struct Node*,struct Node*);
	int Count(struct Node*,struct Node*);
	
	
int main(int argc, char* argv)
	{
		printf("\n\t\tDoubly Circular Linked List\n\n");
		printf("\n-----------------------------------------------------------------------------\n");
		struct Node *first = NULL;
		struct Node *last = NULL;
		
		int iRet = 0;
		
	
		InsertFirst(&first,&last,11);
		InsertFirst(&first,&last,21);
		InsertFirst(&first,&last,51);
		InsertFirst(&first,&last,101);
		InsertFirst(&first,&last,111);
		
		DisplayF(first,last);
		DisplayB(first,last);
		
	
	/*	InsertLast(&first,&last,51);
		DisplayF(first,last);
		DisplayB(first,last);
		
		InsertAtPos(&first,&last,75,3);
		DisplayF(first,last);
		DisplayB(first,last);
		
		DeleteFirst(&first,&last);
		DisplayF(first,last);
		DisplayB(first,last);
		
		DeleteLast(&first,&last);
		DisplayF(first,last);
		DisplayB(first,last);*/
		
		DeleteAtPos(&first,&last,4);
		DisplayF(first,last);
		DisplayB(first,last);
		
		iRet = Count(first,last);
		printf("\nCount Of Node is = %d \n",iRet);
		printf("\n--------------------------------------------------------------\n");
		
	}
void InsertFirst(struct Node **Head,struct Node **Tail,int iValue)
	{
		printf("\t\tInsert First\n");
		struct Node *newNode = NULL;
		
		newNode = (struct Node*)malloc(sizeof(struct Node));
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		newNode -> Prev = NULL;
		
		if((*Head == NULL)||(*Tail == NULL))
			{
				*Head = newNode;
				*Tail = newNode;
			
			}
		else
			{
				newNode -> Next = (*Head);
				(*Head) -> Prev = newNode;
				
				(*Head) = newNode;
				
			
			}
			(*Tail) -> Next = *Head;
			(*Head) -> Prev = *Tail;
	}
void InsertLast(struct Node **Head,struct Node **Tail,int iValue)
	{
		printf("\t\tInsert Last\n");
		struct Node *newNode = NULL;
		
		newNode = (struct Node*)malloc(sizeof(struct Node));
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		newNode -> Prev = NULL;
		
		if((*Head == NULL) && (*Tail == NULL))
			{
				*Head = newNode;
				*Tail = newNode;
			}
		else
			{
				(*Tail) -> Next = newNode;
				newNode -> Prev = *Tail;
				*Tail = newNode;
			}
		(*Tail) -> Next = *Head;
		(*Head) -> Prev = *Tail;
	}
void InsertAtPos(struct Node **Head,struct Node **Tail,int iValue,int iPos)
	{
		printf("\t\tInsert At Position\n");
		struct Node *newNode = NULL;
		struct Node *Temp = *Head;
		
		int iSize = Count(*Head,*Tail);
		int iCnt = 0;
		
		if ((iPos < 1) || (iPos > (iSize + 1)) )
			{
				return ;
			}
			
		if(iPos == 1)
			{
				InsertFirst(Head,Tail,iValue);
			}
			
		else if(iPos == (iSize + 1))
			{
				InsertLast(Head,Tail,iValue);
			}
			
		else
			{
				newNode = (struct Node*)malloc(sizeof(struct Node));
				
				newNode -> Data = iValue;
				newNode -> Next = NULL;
				newNode -> Prev = NULL;
				
				for(iCnt=1;iCnt <= (iPos -2);iCnt++)
					{
						Temp = Temp -> Next;
					}
				newNode -> Next = Temp -> Next;
				Temp -> Next -> Prev = newNode;
				Temp -> Next = newNode;
				newNode -> Prev = Temp;
				
				(*Tail) -> Next = *Head;
				(*Head) -> Prev = *Tail;
			}
	}
	
void DeleteFirst(struct Node **Head,struct Node **Tail)
	{
		printf("\t\tDelete First\n");
		
		if((*Head == NULL) && (*Tail == NULL))
			{
				printf("\n No Node Present\n");
				return;
			}
		else if(*Head == *Tail)
			{
				free (*Head);
				*Head = NULL;
				*Tail = NULL;
			}
		else
			{
				(*Head) = (*Head) -> Next;
				(*Head) -> Prev = (*Tail);
				free((*Tail) -> Next);
				(*Tail) -> Next = (*Head);
				
			}
			(*Tail) -> Next = (*Head);
			(*Head) -> Prev = (*Tail);
	}
void DeleteLast(struct Node **Head,struct Node **Tail)
	{
		printf("\t\tDelete Last\n");
		struct Node *Temp = *Tail;
		
		if((*Head == NULL) && (*Tail == NULL))
			{
				printf("\t\tDelete Last\n");
				printf("\nNO Node\n");
				return;
			}
		else if(*Head == *Tail)
			{
				free(*Head);
				(*Head) = NULL;
				(*Tail) = NULL;
			}
		else
			{
				(*Tail) = (*Tail) -> Prev;
				free (Temp);
				(*Tail) -> Next = (*Head);	
			}
		(*Tail) -> Next = (*Head);
		(*Head) -> Prev = (*Tail);
	}
void DeleteAtPos(struct Node **Head,struct Node **Tail,int iPos)
	{
		printf("\t\tDelete At Position\n");
		
		struct Node *Temp = *Head;
		int iSize = Count(*Head,*Tail);
		int iCnt = 0;
		
		if((iPos < 1) || (iPos > (iSize +1)))
			{
				printf("\nPlz Enter Valide Position\n");
				return;
			}
		if(iPos == 1)
			{
				DeleteFirst(Head,Tail);
			}
		else if(iPos == iSize)
			{
				DeleteLast(Head,Tail);
			}
		else
			{
				for(iCnt =1 ;iCnt<=(iPos-2);iCnt++)
					{
						Temp = Temp -> Next;
					}
				Temp -> Next = Temp -> Next ->Next;
				free(Temp -> Next -> Prev);
				Temp -> Next -> Prev = Temp;
				
			}
				(*Tail) -> Next = *Head;
				(*Head) -> Prev = *Tail;
	}
	
void DisplayF(struct Node *Head,struct Node *Tail)
	{
		printf("\n\n\t\tInside Display Forword\n\n");
		if((Head == NULL) || (Tail == NULL))
			{
				printf("\t\tNo Any Node In Linked List\n");
				return;
			}
				do
				{
					printf("%d ",Head -> Data);
					Head = Head -> Next;
				}while(Head != Tail -> Next);
		
			printf("\n--------------------------------------------------------------\n");
	}
void DisplayB(struct Node *Head,struct Node *Tail)
	{
		printf("\n\n\t\tInside Display Backword\n\n");
		if((Head == NULL) || (Tail == NULL))
			{
				printf("\t\tNo Any Node In Linked List\n");
				return;
			}
				do
				{
					printf("%d ",Tail -> Data);
					Tail = Tail -> Prev;
				}while(Tail != Head -> Prev);
			
			printf("\n--------------------------------------------------------------\n");
	}
int Count(struct Node *Head,struct Node *Tail)
	{
		int iCnt = 0;
		printf("\n\n\t\tInside Count\n\n");
		if((Head == NULL) || (Tail == NULL))
			{
				printf("\t\tNo Any Node In Linked List\n");
  				return -1;
			}
				do
				{
					iCnt++;
					Head = Head -> Next;
				}while(Head != Tail -> Next);
		return iCnt;
		
			printf("\n--------------------------------------------------------------\n");
	}
	
	
	
	
	
