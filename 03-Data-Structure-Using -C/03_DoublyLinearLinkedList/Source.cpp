#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node 
	{
		int Data;
		struct Node *Next;
		struct Node *Prev;
	};

void InsertFirst(struct Node**,int);
void InsertLast(struct Node**,int);
void InsertAtPosition(struct Node**,int,int);

void DeleteFirst(struct Node**);
void DeleteLast(struct Node**);
void DeleteAtPosition(struct Node**,int);

void DisplayF(struct Node*);
void DisplayB(struct Node*);

int Count(struct Node*);

int main(int argc,char* argv[])
	{
		struct Node *first=NULL;
		int iRet =0;
		printf("\n-------------------------------------------------------\n");
		InsertFirst(&first,101);
		InsertFirst(&first,51);
		InsertFirst(&first,21);
		InsertFirst(&first,11);
		DisplayF(first);
		DisplayB(first);
		InsertLast(&first,111);
		DisplayF(first);
		
		DeleteFirst(&first);
		DisplayF(first);
		DisplayB(first);
		
		DeleteLast(&first);
		DisplayF(first);
		DisplayB(first);
		
		InsertAtPosition(&first,71,2);
		DisplayF(first);
		DisplayB(first);
		
		DeleteAtPosition(&first,2);
		DisplayF(first);
		DisplayB(first);
		
		iRet = Count(first);
		printf("\nCount Of Node Is : %d\n",iRet);
		printf("\n-------------------------------------------------------\n");
	
	}
void InsertFirst(struct Node **Head,int iValue)
	{
		
		printf("\t\tInsert First Node\n");
		struct Node *newNode = NULL;
		struct Node *Temp = *Head;
		
		newNode = (struct Node*)malloc(sizeof(struct Node));
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		newNode -> Prev = NULL;	
		
		if(*Head == NULL)
			{
				*Head = newNode;		
			}	
		else
			{
				newNode -> Next = *Head;
				(*Head)->Prev=newNode;
				*Head=newNode;	
			}
			
	}
void InsertLast(struct Node **Head,int iValue)
	{
		printf("\t\tInsert Last Node\n");
			struct Node *newNode = NULL;
			struct Node *Temp = *Head;
			
			newNode = (struct Node*)malloc(sizeof(struct Node));
			
			newNode -> Data = iValue;
			newNode -> Next = NULL;
			newNode -> Prev = NULL;
			
			if(*Head == NULL)
				{
					*Head = newNode;		
				}	
			else
				{
					while(Temp -> Next != NULL)
						{
							Temp = Temp -> Next;
						}
					Temp -> Next = newNode;
					newNode -> Prev = Temp;
				}
	}
void DeleteFirst(struct Node **Head)
	{
		printf("\t\tDelete First Node\n");
		struct Node * Temp = *Head;
		
		if(*Head == NULL)
			{
				return;
			}
		if((*Head)-> Next == NULL)
			{
				free(*Head);
				*Head = NULL;
			}
		else
			{
				(*Head) = (*Head) -> Next;
				(*Head) -> Prev = NULL;
				free(Temp);	
			}
	}
void DeleteLast(struct Node **Head)
	{
		printf("\t\tDelete Last Node\n");
		
		struct Node *Temp = *Head;
		
		if(*Head == NULL)
			{
				return ;
			}
		if((*Head) -> Next == NULL)
			{
				free(*Head);
				*Head = NULL;
			}
		else
			{
				while(Temp -> Next !=NULL)
					{
						Temp = Temp -> Next;
					}
				Temp -> Prev -> Next = NULL;
				free(Temp);
			}
		
	}
void InsertAtPosition(struct Node **Head,int iValue,int iPos)
	{
		printf("\t\tInsert At Position\n");
		struct Node *newNode = NULL;
		struct Node *Temp = *Head;
		int iCnt = 0;
		int iSize = Count(*Head);

		if( (iPos < 1) || (iPos > (iSize + 1)) )
			{
				return;
			}
		if(iPos == 1)
			{
				InsertFirst(Head,iValue);
			}
		else if (iPos == (iSize + 1) ) 
			{
				InsertLast(Head,iValue);
			}
		else
			{
				newNode = (struct Node*)malloc(sizeof(struct Node));
				
				newNode ->Data = iValue;
				newNode ->Next = NULL;
				newNode ->Prev = NULL;
				
				for(iCnt=1;iCnt<=(iPos - 2);iCnt++)
					{
						Temp = Temp -> Next;
					}
				newNode -> Next = Temp -> Next;
				Temp -> Next -> Prev = newNode;
				Temp -> Next = newNode;
				newNode -> Prev = Temp;
			
			}
	}
void DeleteAtPosition(struct Node **Head,int iPos)
	{
			printf("\t\tDelete At Position\n");
			
			struct Node *Temp1 = *Head;
			struct Node *Temp2 = NULL;
			int iCnt =0;
			int iSize = Count(*Head);
			
			if( (iPos < 1) || (iPos > (iSize + 1 )) )
				{
					printf("\t\tPlz Enter Valide Position\n");
					return;
				}
			if(iPos == 1)
				{
					DeleteFirst(Head);
				}
			else if(iPos == iSize)
				{
					DeleteLast(Head);
				}
			else
				{
					for(iCnt =1; iCnt<=(iPos-2);iCnt++)
						{
							Temp1 = Temp1 -> Next;
						}
					Temp2 = Temp1 -> Next;
					Temp1 -> Next = Temp2 -> Next;
					Temp2 -> Next -> Prev = Temp1;
					free(Temp2);
					
				}
	}
void DisplayF(struct Node *Head)
	{
		printf("\nElements in Linked List Are Forword Direction\n\n");
		while(Head != NULL)
			{
				printf(" %d -->",Head -> Data);
				Head =Head -> Next;
			}
			printf(" NULL");
			printf("\n-------------------------------------------------------\n");
	}
void DisplayB(struct Node *Head)
	{
		printf("\nElements in Linked List Are Backword Direction\n\n");
		if(Head == NULL)
			{
				return;
			}
		while(Head -> Next != NULL)
			{
				Head = Head ->Next;
			}
		while(Head != NULL)
			{
				printf(" %d -->",Head -> Data);
				Head = Head -> Prev;
			}
		    printf(" NULL");
			printf("\n-------------------------------------------------------\n");
			
	}
int Count(struct Node *Head)
	{
		int iCnt =0;
		
		while(Head != NULL)
			{
				iCnt++;
				Head = Head -> Next;
			}
		return iCnt;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
